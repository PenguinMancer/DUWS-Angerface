_place   =   _this select 0; 
_points =   _this select 1;
_markername = _this select 2;
_markername2 = _this select 3;
_triggerPos = _this select 4;
_size = _this select 5;

// TELL THE ZONE IS UNDER BLU CONTROL
WARCOM_zones_controled_by_BLUFOR = WARCOM_zones_controled_by_BLUFOR + [_triggerPos];
publicVariable "WARCOM_zones_controled_by_BLUFOR";

[[[_place],{["us_takencontrol",[(_this select 0)]] call bis_fnc_showNotification;}],"BIS_fnc_spawn",true,true] call BIS_fnc_MP;

// TELL THE ZONE IS REMOVED FROM OPFOR CONTROL
WARCOM_zones_controled_by_OPFOR = WARCOM_zones_controled_by_OPFOR - [_triggerPos];
publicVariable "WARCOM_zones_controled_by_OPFOR";

// ADD POINTS
if (isServer) then {
    commandpointsblu1 = commandpointsblu1 + 50;
    publicVariable "commandpointsblu1";
};

// ADD NUMBER OF CONTROLLED ZONES
zoneundercontrolblu = zoneundercontrolblu + 1;
publicVariable "zoneundercontrolblu";

// MODIFY ARMY POWER
WARCOM_opfor_ap = WARCOM_opfor_ap - 25;
WARCOM_blufor_ap = WARCOM_blufor_ap + 25;
publicVariable "WARCOM_opfor_ap";
publicVariable "WARCOM_blufor_ap";

if (WARCOM_opfor_ap < 0) then {
WARCOM_opfor_ap = 0;
publicVariable "WARCOM_opfor_ap";
};
if (WARCOM_blufor_ap > 200) then {
WARCOM_blufor_ap = 200;
publicVariable "WARCOM_blufor_ap";
};

// ADD PERSISTENT STAT
_addzone = call persistent_fnc_incrementCapturedZones;

// MODIFY MARKER ICON
str(_markername) setMarkerColor "ColorGreen";

// MODIFY MARKER ELLIPSE
str(_markername2) setMarkerColor "ColorGreen";

sleep 2;

[[[50],{["cpadded",[(_this select 0)]] call bis_fnc_showNotification;}],"BIS_fnc_spawn",true,true] call BIS_fnc_MP;

_trg=createTrigger["EmptyDetector",_triggerPos];
_trg setTriggerArea[_size,_size,0,false];
_trg setTriggerActivation["EAST SEIZED","PRESENT",false];
_trg setTriggerStatements["this", format["[""%1"",%2,""%3"",""%4"",%5,_size] execvm 'zonescap\opfor_cap.sqf'",_place,_points,_markername,_markername2,_triggerPos,_size], ""];
_trg setTriggerTimeout [30, 60, 300, true ];