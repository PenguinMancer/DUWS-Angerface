_place   =   _this select 0; 
_points =   _this select 1;
_markername = _this select 2;
_markername2 = _this select 3;
_triggerPos = _this select 4;
_size = _this select 5;

[[[_place],{["us_takencontrol",[(_this select 0)]] call bis_fnc_showNotification;}],"BIS_fnc_spawn",true,true] call BIS_fnc_MP;

// TELL THE ZONE IS UNDER OPF CONTROL
WARCOM_zones_controled_by_OPFOR = WARCOM_zones_controled_by_OPFOR + [_triggerPos];


// TELL THE ZONE IS REMOVED FROM BLUFOR CONTROL
WARCOM_zones_controled_by_BLUFOR = WARCOM_zones_controled_by_BLUFOR - [_triggerPos];


// MODIFY NUMBER OF CONTROLLED ZONES
zoneundercontrolblu = zoneundercontrolblu - 1;
publicVariable "zoneundercontrolblu";

// MODIFY ARMY POWER
WARCOM_opfor_ap = WARCOM_opfor_ap + 25;
WARCOM_blufor_ap = WARCOM_blufor_ap - 25;
publicVariable "WARCOM_opfor_ap";
publicVariable "WARCOM_blufor_ap";

if (WARCOM_opfor_ap > 200) then {
WARCOM_opfor_ap = 200;
publicVariable "WARCOM_opfor_ap";
} else {};
if (WARCOM_blufor_ap < 0) then {
WARCOM_blufor_ap = 0;
publicVariable "WARCOM_blufor_ap";
} else {};

// MODIFY MARKER ICON
str(_markername) setMarkerColor "ColorRed";
// hint str(_markername);
// MODIFY MARKER ELLIPSE
str(_markername2) setMarkerColor "ColorRed";

// RECALL VARNAME FOR ZONE TRIGGER --> use the pos of the trigger
private ["_trg","_trgQRF"];

call compile format["_trg = trigger%1%2",round (_triggerPos select 0),round (_triggerPos select 1)];
call compile format["_trgQRF = triggerQRF%1%2",round (_triggerPos select 0),round (_triggerPos select 1)];

//// MAKE THE TRIGGER CAPTURABLE FOR BLUFOR
_trg setTriggerActivation["WEST SEIZED","PRESENT",false];
_trg setTriggerStatements["this", format["[""%1"",%2,""%3"",""%4"",%5,%6] execvm 'zonescap\blufor_cap.sqf'",_place,_points,_markername,_markername2,_triggerPos,_size], ""];

//// MAKE QRF TRIGGER DO SOMETHING AGAIN
_trgQRF setTriggerArea[_size,_size,0,false];
_trgQRF setTriggerActivation["WEST","EAST D",true];
_trgQRF setTriggerStatements["this", format["[%1,%2] spawn QRF_zone",_trigger,_size], ""];
_trgQRF setTriggerTimeout [5, 7, 10, true ];