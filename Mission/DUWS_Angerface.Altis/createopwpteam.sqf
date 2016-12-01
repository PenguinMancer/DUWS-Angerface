// usage: [position, radius] execvm "createopwpteam.sqf"
// radius: 50 for patrol inside and around base, 500 for medium lenght skirmish, 1300 for island

_position = _this select 0;
_radius   = _this select 1;

if (isNil "WARCOM_opfor_ap") then {
WARCOM_opfor_ap = 75;
};

_initGroup = [];
_PatrolSoldier1 = "";
_PatrolSoldier2 = "";
_PatrolSoldier3 = "";
_PatrolSoldier4 = "";
_PatrolSoldier5 = "";

if (WARCOM_opfor_ap > 50) then {
	if (WARCOM_opfor_ap > 100) then {
		//Randomizing Units
		_PatrolSoldier1 = [] call Soldiers_fnc_GetOpforSoldier;
		_PatrolSoldier2 = [] call Soldiers_fnc_GetOpforAutorifleman;
		_PatrolSoldier3 = [] call Soldiers_fnc_GetOpforAntiTank;
		_PatrolSoldier4 = [] call Soldiers_fnc_GetOpforAntiAir;
		_PatrolSoldier5 = [] call Soldiers_fnc_GetOpforTeamleader;

		_initGroup = [_PatrolSoldier1,_PatrolSoldier2,_PatrolSoldier3,_PatrolSoldier4,_PatrolSoldier5];
	} else {
		//Randomizing Units
		_PatrolSoldier1 = [] call Soldiers_fnc_GetOpforSoldier;
		_PatrolSoldier2 = [] call Soldiers_fnc_GetOpforAntiTank;
		_PatrolSoldier3 = [] call Soldiers_fnc_GetOpforAntiAir;
		_PatrolSoldier4 = [] call Soldiers_fnc_GetOpforTeamleader;

		_initGroup = [_PatrolSoldier1,_PatrolSoldier2,_PatrolSoldier3,_PatrolSoldier4];
	};
} else{ 
//Randomizing Units
_PatrolSoldier1 = [] call Soldiers_fnc_GetOpforSoldier;
_PatrolSoldier2 = [] call Soldiers_fnc_GetOpforSoldier;
_PatrolSoldier3 = [] call Soldiers_fnc_GetOpforAntiTank;
_PatrolSoldier4 = [] call Soldiers_fnc_GetOpforTeamleader;

_initGroup = [_PatrolSoldier1,_PatrolSoldier2,_PatrolSoldier3,_PatrolSoldier4];
};

_group = [_position, EAST, _initGroup,[],[],opfor_ai_skill] call BIS_fnc_spawnGroup;
_patrolRadius = round(_radius/2);

//randomize identity
{
[_x] remoteExecCall ["Soldiers_fnc_RandomOpforIdentity", 0, true];
} forEach (units _group);

// ADD QRF eventhandler
_EH = leader _group addEventHandler ["Fired", {[_this select 0] spawn QRF}];

if (debugmode) then {
_null = [_group,"Weapons team"] execvm "debuglocation.sqf";
};