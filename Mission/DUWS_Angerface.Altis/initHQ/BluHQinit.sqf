_hqblu = _this select 0;
blu_hq_created = true;
PosOfBLUHQ = _hqblu;
publicVariable "PosOfBLUHQ";
// create the building
_hq = "Land_Cargo_HQ_V1_F" createVehicle _hqblu; //  	Land_Medevac_house_V1_F // Land_Cargo_HQ_V3_F

// create marker on HQ
_markername = format["%1%2",round (_hqblu select 0),round (_hqblu select 1)]; // Define marker name

//hint _markername;
_markerstr = createMarker [str(_markername), _hqblu];
_markerstr setMarkerShape "ICON";
str(_markername) setMarkerType "mil_flag";
str(_markername) setMarkerColor "ColorBlue";
str(_markername) setMarkerText "Main base";
blu_hq_markername = _markername; publicVariable "blu_hq_markername";

// make HQ zone notification trigger
_trg5=createTrigger["EmptyDetector",_hqblu];
_trg5 triggerAttachVehicle [player];
_trg5 setTriggerArea[200,200,0,false];
_trg5 setTriggerActivation["VEHICLE","PRESENT",true];
_trg5 setTriggerStatements["this", format["[""%1"",thislist] execvm 'Scripts\enterlocation.sqf'",'Main Base'], ""];

// CREATE MARKER (HQ)
_HQmarker = createMarker ["HQMarker",_hqblu];
"HQMarker" setMarkerShape "ELLIPSE";
"HQMarker" setMarkerBrush "SolidBorder";
"HQMarker" setMarkerColor "ColorBlue";
"HQMarker" setMarkerSize [200, 200];
"HQMarker" setMarkerAlpha 0.1; 

// warning trigger when an enemy approaches the camp
_trgWarning=createTrigger["EmptyDetector",_hqblu];
_trgWarning setTriggerArea[500,500,0,false];
_trgWarning setTriggerActivation["EAST","PRESENT",true];
_trgWarning setTriggerStatements["this","[]execVM 'Scripts\warninghq.sqf'", ""];
// CREATE THE OFFICER. UGLY HACKS FOR AI MODS SUPPORT
_group = createGroup west;
_hq = _group createUnit ["Blufor_General",(getmarkerpos str(blu_hq_markername)), [], 0, "FORM"];
sleep 0.2;
_hq setformdir 240;
sleep 1;
_hq allowFleeing 0;
_hq disableAI "TARGET";
_hq disableAI "FSM";
_hq disableAI "AUTOTARGET";
_hq disableAI "MOVE";
_hq disableAI "PRONE";
//Disable ASR for officer
//_hq setVariable ["asr_ai_exclude", true];
//Disable VCOM for officer
_hq setVariable ["NOAI",true];
hq_blu1 = _hq;
publicVariable "hq_blu1";
_hq setpos [_hqblu select 0, _hqblu select 1, .59];
_handle = [hq_blu1] execVM "initHQ\HQaddactions.sqf";
removeAllWeapons _hq;
removeAllItems _hq;
removeAllAssignedItems _hq;
_hq setFace "Zee_White_Head_04";
_hq setSpeaker "rhs_Male02RUS";

//GUARDS
_handle = [getpos hq_blu1] execVM "initHQ\guards.sqf";

//STATIC DEFENSES
_handle = [getpos hq_blu1] execVM "initHQ\fortify.sqf";

// IF THE OFFICER IS DEAD -- BEGIN OF "SPAWN"
[_hq] spawn {

  _hq = _this select 0;
  waitUntil {sleep 3;!alive _hq};
  _hq switchMove "AidlPercMstpSnonWnonDnon01";

	[["TaskFailed",["","Your commanding officer has been killed"]],"bis_fnc_showNotification"] call BIS_fnc_MP;
	sleep 6;
	if (MisEndCond==0) then {[["officerkilled",false,true],"BIS_fnc_endMission"] call BIS_fnc_MP;}
	else {	
		[[{hint "Your HQ Officer has been killed!\n\nRESPAWN: OFF\n\nYou must now take the island without the help of your commander. The mission will end in failure if all players are killed!"}],"BIS_fnc_Spawn",true,true] call BIS_fnc_MP;
		officedead = true; publicvariable "officedead";
		// MODIFY ARMY POWER
		WARCOM_opfor_ap = WARCOM_opfor_ap + 50;
		WARCOM_blufor_ap = WARCOM_blufor_ap - 50;
		publicVariable "WARCOM_blufor_ap";
		publicVariable "WARCOM_opfor_ap";
		
		if (WARCOM_opfor_ap > 200) then {
		WARCOM_opfor_ap = 200;
		publicVariable "WARCOM_opfor_ap";
		};
		if (WARCOM_blufor_ap < 0) then {
		WARCOM_blufor_ap = 0;
		publicVariable "WARCOM_blufor_ap";
		};
		
		[[[],"Scripts\spectate.sqf"],"BIS_fnc_execVM",true,true ] call BIS_fnc_MP;
//		deleteVehicle _hq;
		};	
  };
// IF THE OFFICER IS DEAD -- End OF "SPAWN"


// TELEPORT PLAYER
player setpos [(_hqblu select 0)-1.5, (_hqblu select 1) +1];
player setdir 110;


//////// HQ GENERATED /////
"respawn_west" setMarkerPos _hqblu;
sleep 0.1;


// BROADCAST, TELL THE HQ POS IS FOUND
HQ_pos_found = true;
publicVariable "HQ_pos_found";


// SHOW THE STARTUP MENU
if (!zones_created) then {
sleep 0.1;
_nill = [] execVM "dialog\startup\startup.sqf";
waitUntil {sleep .1;chosen_settings};  // WAIT UNTIL THE PLAYER HAS CHOSEN THE SETTINGS
};


// WEATHER INIT
if (dynamic_weather_enable) then {
_weather_script = [] execVM "dialog\startup\weather.sqf";
};

// CALL ZONES GENERATION
if (!zones_created && !manually_chosen) then {      // CHECK IF ZONES ARE PLACED, IF NOT EXECUTE locatorZonesV1.sqf
    _zones_create = [50, 0.2] execVM "initZones\locatorZonesV1.sqf";   // CHECK IF ZONES HAVE ALREADY BEEN PLACED
} else {
	if (!advanced_chosen && manually_chosen) then {
		_zones_create = [50, 0.2] execVM "initZones\locatorZonesV2.sqf";
		} else {
		_zones_create = [50, 0.2] execVM "initZones\locatorZonesV3.sqf";
		};
};

HQgenerated = true;
publicVariable "HQgenerated";

player allowDamage true;

if (isServer) then {
_sitrep = [player,"sitrep"] call BIS_fnc_addCommMenuItem;
};
