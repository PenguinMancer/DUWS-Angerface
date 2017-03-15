_group =_this select 0;

_group setCombatMode "SAFE";
_towns = nearestLocations [getPosATL hq_blu1, ["NameVillage","NameCity","NameCityCapital"], 25000];
_RandomTownPosition = position (_towns select (floor (random (count _towns))));

if (debugmode) then {
// create marker on leader 
_markername = format["ENEMYWP%1",enemy_waypoint_num]; // Define marker name
_markerstr = createMarker [str(_markername), _RandomTownPosition];
_markerstr setMarkerShape "ICON";
str(_markername) setMarkerType "o_inf";
str(_markername) setMarkerColor "ColorRed";
str(_markername) setMarkerText format["Enemy Town Patrol Waypoint"];
enemy_waypoint_num = enemy_waypoint_num + 1;
publicVariable "enemy_waypoint_num";
};

_pat = [_group, _RandomTownPosition, 50] call BIS_fnc_taskPatrol;

{
[_x] remoteExecCall ["Soldiers_fnc_RandomOpforIdentity", 0, true];
} forEach (units _group);