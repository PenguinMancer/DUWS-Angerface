_centerPos = _this select 3;
_actionID = _this select 2;
_object = _this select 0;
aliveAllUnits = {alive _x} count allunits;

if (commandpointsblu1 < 4) exitWith {hint "You don't have enough Command Points"};
commandpointsblu1 = commandpointsblu1 - 4;
publicvariable "commandpointsblu1";

_object removeAction _actionID;
playSound "loadgun";

_groupGuard = createGroup WEST;

//Laptop for vehicle requests
_laptoptable = createVehicle ["Land_CampingTable_small_F", [0,0,0], [], 0, "NONE"];
_laptoptable setDir 270;
_laptoptable enableSimulation false;
_laptoptable allowdamage false;
_laptoptable setdamage 0;
_laptoptable setpos [(_centerpos select 0)-5.7, (_centerpos select 1)-5.519];

_laptopposition = _laptoptable modelToWorld [0,0,.4];
_laptop = createVehicle ["Land_Laptop_unfolded_F", [0,0,0], [], 0, "NONE"];
_laptop setDir 270;
_laptop enableSimulation false;
_laptop allowdamage false;
_laptop setdamage 0;
_laptop setpos _laptopposition;

[[_laptop,["<t color='#ffb700'>Request Vehicle</t>","dialog\requestvehiclefob.sqf", "", 0, true, true]],"addAction",true,true] call BIS_fnc_MP;
[[_laptop,["<t color='#ffb700'>Build Fortifications</t>","dialog\Buildfortificationsfob.sqf", "", 0, true, true, "", "BLD1cap == 1"]],"addAction",true,true] call BIS_fnc_MP;

// AA on the roof
_aapod = createVehicle ["B_static_AA_F", [0,0,0], [], 0, "NONE"];
_aapod allowdamage false;
_aapod setdamage 0;
_aapod setpos [_centerpos select 0, _centerpos select 1,(_centerpos select 2)+3.109];

_HQguard1 = _groupGuard createUnit ["Blufor_Soldier_1", _centerPos, [], 0, "FORM"]; 
_HQguard1 moveinGunner _aapod;

// GMG
_gl1pod = createVehicle ["RHS_MK19_TriPod_D", [0,0,0], [], 0, "NONE"];
_gl1pod allowdamage false;
_gl1pod setdamage 0;
_gl1pod setpos [(_centerpos select 0)-7, (_centerpos select 1)+5.5];

_HQguard1 = _groupGuard createUnit ["Blufor_Soldier_1", _centerPos, [], 0, "FORM"]; 
_HQguard1 moveinGunner _gl1pod;

// AT
_atpod1 = createVehicle ["I_mas_TOW_TriPod_AAF", [0,0,0], [], 0, "NONE"];
_atpod1 setpos [(_centerpos select 0)-7, (_centerpos select 1)-8];
_atpod1 allowdamage false;
_atpod1 setdamage 0;
_atpod1 setdir 215;

_HQguard1 = _groupGuard createUnit ["Blufor_Soldier_1", _centerPos, [], 0, "FORM"]; 
_HQguard1 moveinGunner _atpod1;

// HMG
_atpod2 = createVehicle ["CUP_B_M2StaticMG_USMC", [0,0,0], [], 0, "NONE"];
_atpod2 allowdamage false;
_atpod2 setdamage 0;
_atpod2 setpos [(_centerpos select 0)+8, (_centerpos select 1)-7];

_HQguard1 = _groupGuard createUnit ["Blufor_Soldier_1", _centerPos, [], 0, "FORM"]; 
_HQguard1 moveinGunner _atpod2;

// GMG
_atpod3 = createVehicle ["RHS_MK19_TriPod_D", [0,0,0], [], 0, "NONE"];
_atpod3 allowdamage false;
_atpod3 setdamage 0;
_atpod3 setpos [(_centerpos select 0)+7, (_centerpos select 1)+8];

_HQguard1 = _groupGuard createUnit ["Blufor_Soldier_1", _centerPos, [], 0, "FORM"]; 
_HQguard1 moveinGunner _atpod3;

// LIGHTS
_light1 = createVehicle ["Land_Camping_Light_F", [0,0,0], [], 0, "NONE"];
_light1 allowdamage false;
_light1 setdamage 0;
_light1 setpos [_centerpos select 0, _centerpos select 1];

_light2 = createVehicle ["Land_Camping_Light_F", [0,0,0], [], 0, "NONE"];
_light2 allowdamage false;
_light2 setdamage 0;
_light2 setpos [(_centerpos select 0)+5.5, (_centerpos select 1)-5.5];

_light3 = createVehicle ["Land_Camping_Light_F", [0,0,0], [], 0, "NONE"];
_light3 allowdamage false;
_light3 setdamage 0;
_light3 setpos [(_centerpos select 0)-5.5, (_centerpos select 1)+3.5];

_light4 = createVehicle ["Land_Camping_Light_F", [0,0,0], [], 0, "NONE"];
_light4 allowdamage false;
_light4 setdamage 0;
_light4 setpos [(_centerpos select 0)+5.5, (_centerpos select 1)+3.5];

_light5 = createVehicle ["Land_Camping_Light_F", [0,0,0], [], 0, "NONE"];
_light5 allowdamage false;
_light5 setdamage 0;
_light5 setpos [(_centerpos select 0)-5.5, (_centerpos select 1)-5.5];

sleep 2;
_atpod1 allowdamage true;
_atpod2 allowdamage true;
_atpod3 allowdamage true;
_gl1pod allowdamage true;
_aapod allowdamage true;
_light1 allowdamage true;
_light2 allowdamage true;
_light3 allowdamage true;
_light4 allowdamage true;
_light5 allowdamage true;

