_place   =   _this select 0; 
_points =   _this select 1;
_markername = _this select 2;
_markername2 = _this select 3;
_triggerPos = _this select 4;
_size = _this select 5;

// MODIFY NUMBER OF CONTROLLED ZONES
zoneundercontrolblu = zoneundercontrolblu + 1;
publicVariable "zoneundercontrolblu";

[[[_place],{["us_takencontrol",[(_this select 0)]] call bis_fnc_showNotification;}],"BIS_fnc_spawn",true,true] call BIS_fnc_MP;

// TELL THE ZONE IS UNDER BLU CONTROL
WARCOM_zones_controled_by_BLUFOR = WARCOM_zones_controled_by_BLUFOR + [_triggerPos];
publicVariable "WARCOM_zones_controled_by_BLUFOR";

// TELL THE ZONE IS REMOVED FROM OPFOR CONTROL
WARCOM_zones_controled_by_OPFOR = WARCOM_zones_controled_by_OPFOR - [_triggerPos];
publicVariable "WARCOM_zones_controled_by_OPFOR";

if WARCOM_opfor_ap > 149 then {
_opf_patrol = [_triggerPos,_size] execVM "WARCOM\WARCOM_opf_zonerecapforce.sqf";
};

// MODIFY ARMY POWER
WARCOM_opfor_ap = WARCOM_opfor_ap - 25;
WARCOM_blufor_ap = WARCOM_blufor_ap + 25;
publicVariable "WARCOM_opfor_ap";
publicVariable "WARCOM_blufor_ap";

if (WARCOM_opfor_ap < 0) then {
WARCOM_opfor_ap = 0;
publicVariable "WARCOM_opfor_ap";
} else {};
if (WARCOM_blufor_ap > 200) then {
WARCOM_blufor_ap = 200;
publicVariable "WARCOM_blufor_ap";
} else {};

// ADD Skill to operatives
_operHandler = execVM "dialog\operative\operative_mission_complete.sqf"; 

// MODIFY MARKER ICON
str(_markername) setMarkerColor "ColorGreen";
// hint str(_markername);
// MODIFY MARKER ELLIPSE
str(_markername2) setMarkerColor "ColorGreen";

[[[],{["cpadded_retaken",[]] call bis_fnc_showNotification;}],"BIS_fnc_spawn",true,true] call BIS_fnc_MP;

// RECALL VARNAME FOR ZONE TRIGGER --> use the pos of the trigger
private ["_trg","_trgQRF"];

call compile format["_trg = trigger%1%2",round (_triggerPos select 0),round (_triggerPos select 1)];
call compile format["_trgQRF = triggerQRF%1%2",round (_triggerPos select 0),round (_triggerPos select 1)];

//// Delete old trigger
deleteVehicle _trg;

sleep 0.5;

// CREATE ZONE CAPTURABLE TRIGGER
_trg=createTrigger["EmptyDetector",_triggerPos];
_trg setTriggerArea[_size,_size,0,false];
_trg setTriggerActivation["EAST SEIZED","PRESENT",false];
_trg setTriggerStatements["this", format["[""%1"",%2,""%3"",""%4"",%5,%6] execvm 'zonescap\opfor_cap.sqf'",_place,_points,_markername,_markername2,_triggerPos,_size], ""];
_trg setTriggerTimeout [30, 60, 300, true ];

// CREATE VARNAME FOR ZONE TRIGGER --> use the pos of the trigger
_triggerName = format["trigger%1%2",round (_triggerPos select 0),round (_triggerPos select 1)];
call compile format["%1 = _trg",_triggerName];

//// MAKE QRF TRIGGER DO NOTHING FOR NOW
_trgQRF setTriggerArea[1,1,1,false];
_trgQRF setTriggerActivation["NONE","PRESENT",true];
_trgQRF setTriggerStatements["","",""];