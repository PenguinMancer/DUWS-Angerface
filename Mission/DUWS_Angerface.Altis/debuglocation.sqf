_group   =   _this select 0;
_grouptype = _this select 1;
sleep 0.5;

[_group,_grouptype] spawn {
_group = _this select 0;
_grouptype = _this select 1;
_loop = true;

_leader = leader _group;
// create marker on leader 
_markername = format["ENEMY%1",enemy_marker_num]; // Define marker name
_markerstr = createMarker [str(_markername), getpos _leader];
_markerstr setMarkerShape "ICON";
str(_markername) setMarkerType "o_inf";
str(_markername) setMarkerColor "ColorRed";
str(_markername) setMarkerText format["Enemy %1",_grouptype];
enemy_marker_num = enemy_marker_num + 1;
publicVariable "enemy_marker_num";

    while {_loop} do {
    _units_alive = {alive _x }count units _group;
    if (_units_alive<=0) exitWith {  // IF ALL DEAD, EXIT.
    str(_markername) setMarkerColor "ColorRed";
    str(_markername) setMarkerType "waypoint";
    deleteMarker str(_markername);
    };
    _leader = leader _group; 
    str(_markername) setMarkerPos getpos _leader; 
    sleep 4;
    };
};