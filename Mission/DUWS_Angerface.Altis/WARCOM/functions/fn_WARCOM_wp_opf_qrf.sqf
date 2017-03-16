_group =_this select 0;
_unitPos = _this select 1;

if (debugmode) then {
// create marker on leader 
_markername = format["ENEMYWP%1",enemy_waypoint_num]; // Define marker name
_markerstr = createMarker [str(_markername), _unitPos];
_markerstr setMarkerShape "ICON";
str(_markername) setMarkerType "o_inf";
str(_markername) setMarkerColor "ColorRed";
str(_markername) setMarkerText format["Enemy QRF Waypoint"];
enemy_waypoint_num = enemy_waypoint_num + 1;
publicVariable "enemy_waypoint_num";
};

_group setCombatMode "RED";

    _wp = _group addWaypoint [_unitPos, 0];
    _wp setWaypointType "SAD";
	_wp setWaypointCompletionRadius 40;
	_wp setWaypointSpeed "FULL";
	_wp setWaypointTimeout [300, 450, 600]; 