//faction = "OPF_F"; faction = "BLU_F"; faction = "IND_F"; faction = "CIV_F";
//vehicleClass = "Armored" "Car" "Ship" "Static" "Air"
//hasDriver = 1;
//canFloat = 0;

_faction = _this select 0;
_vehClass = _this select 1;
_position = _this select 2;
_radius = _this select 3;

_vehicles = ["CUP_C_Ural_Open_Civ_custom", "CUP_C_LR_Transport_CTK_custom","CUP_I_BTR40_TKG_custom"];
_foundVeh = _vehicles select floor(random(count _vehicles));

// DETERMINE LA FACTION
_side = EAST; 
if(_faction=="BLU_F") then {_side=WEST};
if(_faction=="OPF_F") then {_side=EAST};
if(_faction=="IND_F") then {_side=RESISTANCE};
if(_faction=="CIV_F") then {_side=CIVILIAN};

_createdVehFnc = [_position,0,_foundVeh,_side] call bis_fnc_spawnvehicle;
_vehGroup = _createdVehFnc select 2;
_opf_assault = [_vehGroup] execVM "WARCOM\WARCOM_wp_opf_patrol.sqf";

 // Setting Identities
{
[_x] remoteExecCall ["Soldiers_fnc_RandomOpforIdentity", 0, true];
} forEach (units _vehGroup);