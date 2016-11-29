// usage: [position, radius] execvm "createoppatrol.sqf"
// radius: 50 for patrol inside and around base, 500 for medium lenght skirmish, 1300 for island

_position = _this select 0;
_radius   = _this select 1;

if (isNil "WARCOM_opfor_ap") then {
WARCOM_opfor_ap = 75;
};

_initGroup = [];
_PatrolSoldier1 = "";
_PatrolSoldier2 = "";

//Randomizing Units
if (WARCOM_opfor_ap > 50) then {
	if (WARCOM_opfor_ap > 100) then {
		//Randomizing Units
		_PatrolSoldier1 = [] call Soldiers_fnc_GetOpforSquadleader;
		_PatrolSoldier2 = [] call Soldiers_fnc_GetOpforAutorifleman;

		_initGroup = [_PatrolSoldier1,_PatrolSoldier2];
	} else {
		//Randomizing Units
		_PatrolSoldier1 = [] call Soldiers_fnc_GetOpforSquadleader;
		_PatrolSoldier2 = [] call Soldiers_fnc_GetOpforSoldier;

		_initGroup = [_PatrolSoldier1,_PatrolSoldier2];
	};
} else{ 
//Randomizing Units
_PatrolSoldier1 = [] call Soldiers_fnc_GetOpforSoldier;
_PatrolSoldier2 = [] call Soldiers_fnc_GetOpforSoldier;

_initGroup = [_PatrolSoldier1,_PatrolSoldier2];
};

_group = [_position, EAST, _initGroup,[],[],opfor_ai_skill] call BIS_fnc_spawnGroup;
_patrolRadius = round(_radius/2);
[_group, _position, _patrolradius] call bis_fnc_taskPatrol;

//randomize identity
{
[_x] remoteExecCall ["Soldiers_fnc_RandomOpforIdentity", 0, true];
} forEach (units _group);

// ADD QRF eventhandler
_EH = leader _group addEventHandler ["Fired", {[_this select 0] spawn QRF_test}];

if (debugmode) then {
_null = [_group,"Squad"] execvm "debuglocation.sqf";
};

