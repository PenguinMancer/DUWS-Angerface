_position = _this select 0;
_group = [];

//Randomizing Units
_PatrolSoldier1 = [] call Soldiers_fnc_GetOpforAntiAir;
_PatrolSoldier2 = [] call Soldiers_fnc_GetOpforAntiTank;
_PatrolSoldier3 = [] call Soldiers_fnc_GetOpforGrenadier;
_PatrolSoldier4 = [] call Soldiers_fnc_GetOpforSquadleader;

//original group without leaders
_initGroup = [_PatrolSoldier1,_PatrolSoldier2,_PatrolSoldier3,_PatrolSoldier4];

_group = [_position, EAST, _initGroup,[],[],opfor_ai_skill] call BIS_fnc_spawnGroup;
[_group, _position] call bis_fnc_taskDefend;

//randomize identity
{
[_x] remoteExecCall ["Soldiers_fnc_RandomOpforIdentity", 0, true];
} forEach (units _group);

// ADD QRF eventhandler
_EH = leader _group addEventHandler ["Fired", {[_this select 0] spawn QRF_test}];
