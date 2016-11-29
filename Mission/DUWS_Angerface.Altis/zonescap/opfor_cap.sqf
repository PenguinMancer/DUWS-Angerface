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

// CREATE ZONE CAPTURABLE TRIGGER
_trg=createTrigger["EmptyDetector",_triggerPos];
_trg setTriggerArea[_size,_size2,0,false];
_trg setTriggerActivation["WEST SEIZED","PRESENT",false];
_trg setTriggerStatements["this", format["[""%1"",%2,""%3"",""%4"",%5,_size] execvm 'zonescap\blufor_cap.sqf'",_place,_points,_markername,_markername2,_trigger,_size], ""];
_trg setTriggerTimeout [30, 60, 300, true ];

[_size,_triggerPos] spawn {
_size 		= _this select 0;
_triggerPos	= _this select 1;

// CREATE ZONE CAPTURABLE TRIGGER
_trg=createTrigger["EmptyDetector",_triggerPos];
_trg setTriggerArea[_size,_size2,0,false];
_trg setTriggerActivation["WEST SEIZED","PRESENT",false];
_trg setTriggerStatements["this","[_trg,_trg2]execVM 'deletezonetriggers.sqf'", ""];
_trg setTriggerTimeout [30, 60, 300, true ];
		
// CREATE ZONE NOTIFICATION TRIGGER
_trg2=createTrigger["EmptyDetector",_triggerPos];
_trg2 setTriggerArea[_size,_size2,0,false];
_trg2 setTriggerActivation["WEST","EAST D",true];
_trg2 setTriggerStatements["this","[_triggerPos] spawn QRF_Zones", ""];
};