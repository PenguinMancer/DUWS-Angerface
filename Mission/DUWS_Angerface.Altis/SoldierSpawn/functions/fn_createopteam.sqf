_position = _this select 0;
_radius   = _this select 1;

if (isNil "WARCOM_opfor_ap") then {
WARCOM_opfor_ap = 75;
};

//initialize the array and classnames, as you can't do that inside of an if.
_initGroup = [];
_PatrolSoldier1 = "";
_PatrolSoldier2 = "";
_PatrolSoldier3 = "";
_PatrolSoldier4 = "";
_PatrolSoldier5 = "";
_PatrolSoldier6 = "";
_PatrolSoldier7 = "";

if (WARCOM_opfor_ap > 50) then {
	if (WARCOM_opfor_ap > 100) then {
		//Randomizing Units
		_PatrolSoldier1 = [] call Soldiers_fnc_GetOpforSoldier;
		_PatrolSoldier2 = [] call Soldiers_fnc_GetOpforSoldier;
		_PatrolSoldier3 = [] call Soldiers_fnc_GetOpforAutorifleman;
		_PatrolSoldier4 = [] call Soldiers_fnc_GetOpforGrenadier;
		_PatrolSoldier5 = [] call Soldiers_fnc_GetOpforMarksman;
		_PatrolSoldier6 = [] call Soldiers_fnc_GetOpforLightAntiTank;
		_PatrolSoldier7 = [] call Soldiers_fnc_GetOpforTeamleader;

		_initGroup = [_PatrolSoldier1,_PatrolSoldier2,_PatrolSoldier3,_PatrolSoldier4,_PatrolSoldier5,_PatrolSoldier6,_PatrolSoldier7];
	} else {
		//Randomizing Units
		_PatrolSoldier1 = [] call Soldiers_fnc_GetOpforAutorifleman;
		_PatrolSoldier2 = [] call Soldiers_fnc_GetOpforGrenadier;
		_PatrolSoldier3 = [] call Soldiers_fnc_GetOpforMarksman;
		_PatrolSoldier4 = [] call Soldiers_fnc_GetOpforLightAntiTank;
		_PatrolSoldier5 = [] call Soldiers_fnc_GetOpforTeamleader;

		_initGroup = [_PatrolSoldier1,_PatrolSoldier2,_PatrolSoldier3,_PatrolSoldier4,_PatrolSoldier5];
	};
} else{ 
//Randomizing Units
_PatrolSoldier1 = [] call Soldiers_fnc_GetOpforSoldier;
_PatrolSoldier2 = [] call Soldiers_fnc_GetOpforSoldier;
_PatrolSoldier3 = [] call Soldiers_fnc_GetOpforGrenadier;
_PatrolSoldier4 = [] call Soldiers_fnc_GetOpforLightAntiTank;
_PatrolSoldier5 = [] call Soldiers_fnc_GetOpforTeamleader;

_initGroup = [_PatrolSoldier1,_PatrolSoldier2,_PatrolSoldier3,_PatrolSoldier4,_PatrolSoldier5];
};

_group = [_position, EAST, _initGroup,[],[],opfor_ai_skill] call BIS_fnc_spawnGroup;
_patrolRadius = round(_radius/2);
[_group, _position, _patrolradius] call bis_fnc_taskPatrol;

//randomize identity
{
[_x] remoteExecCall ["Soldiers_fnc_RandomOpforIdentity", 0, true];
} forEach (units _group);

// ADD QRF eventhandler
_EH = leader _group addEventHandler ["Fired", {[_this select 0] spawn WARCOM_opf_qrf}];

if (debugmode) then {
_null = [_group,"Fireteam"] execvm "debuglocation.sqf";
};