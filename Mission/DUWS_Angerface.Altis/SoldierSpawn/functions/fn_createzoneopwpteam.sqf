params ["_trigger","_size"];

_originaltrigger = _trigger;
_safetrigger = [_trigger, 0,_size-50,15,0,0.2,0,[],[[0,0],[0,0]]] call BIS_fnc_findSafePos;
_trigger = [(_trigger select 0)+40,_trigger select 1];
if (0 == _safetrigger select 0 && 0 == _safetrigger select 1) then {//If our safe position is empty, it ain't safe.
_safetrigger = _trigger;
};
_trigger = _safetrigger;

// usage: [position, radius] execvm "createopwpteam.sqf"
// radius: 50 for patrol inside and around base, 500 for medium lenght skirmish, 1300 for island

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

_group = [_trigger, EAST, _initGroup,[],[],opfor_ai_skill] call BIS_fnc_spawnGroup;

//randomize identity
{
[_x] remoteExecCall ["Soldiers_fnc_RandomOpforIdentity", 0, true];
} forEach (units _group);

// ADD QRF eventhandler
_EH = leader _group addEventHandler ["Fired", {[_this select 0] spawn QRF}];

[_group, _originaltrigger, _size] call BIS_fnc_taskPatrol;

if (debugmode) then {
_null = [_group,"Weapons team"] execvm "debuglocation.sqf";
};