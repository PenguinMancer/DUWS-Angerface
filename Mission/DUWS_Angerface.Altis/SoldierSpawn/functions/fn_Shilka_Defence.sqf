_position = _this select 0;
_radius   = _this select 1;

_group = [_position, EAST, ["rhs_zsu234_aa"],[],[],opfor_ai_skill] call BIS_fnc_spawnGroup;
_patrolRadius = round(_radius/2);
[_group, _position, _patrolradius] call bis_fnc_taskPatrol;

// ADD QRF eventhandler
_EH = leader _group addEventHandler ["Fired", {[_this select 0] spawn QRF}];