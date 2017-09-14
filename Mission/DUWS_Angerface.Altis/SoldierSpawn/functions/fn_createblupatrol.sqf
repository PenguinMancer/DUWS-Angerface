_position = _this select 0;
_radius   = _this select 1;

_group = [_position, WEST, ["Blufor_TeamLeader_1","Blufor_Soldier_1"]] call BIS_fnc_spawnGroup;
_patrolRadius = round(_radius/3);
[_group, _position, _patrolRadius] call bis_fnc_taskPatrol;