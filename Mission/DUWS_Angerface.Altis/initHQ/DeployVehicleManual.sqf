private [ "_ghost_spot", "_vehicle", "_dist", "_actualdir" ];
_hqvehicle = _this select 0;
_hqvehicle removeAction Vehicleaction;

build_invalid = 0;
buildconfirmation = 1;

_vehicle = "Land_HelipadEmpty_F";
_classname = "Land_Cargo_HQ_V3_F"; // this is the desert one

while {buildconfirmation == 1} do {

	actcancel = _hqvehicle addAction ["<t color='#B0FF00'>Cancel</t>","dialog\building\buildcancel.sqf","",-725,false,true];
	actplace = _hqvehicle addAction ["<t color='#B0FF00'>Place</t>","dialog\building\buildplace.sqf","",-775,false,true,"","build_invalid == 0"];

	_ghost_spot = getmarkerpos "ghost_spot";

	_vehicle = _classname createVehicleLocal _ghost_spot;
	_vehicle allowdamage false;
	_vehicle setVehicleLock "LOCKED";
	_vehicle enableSimulationGlobal false;

	_dist = 0.6 * (sizeOf _classname);
	if (_dist < 3.5) then { _dist = 3.5 };
	_dist = _dist + 0.5;

	for [{_i=0}, {_i<5}, {_i=_i+1}] do {
		_vehicle setObjectTextureGlobal [_i, '#(rgb,8,8,3)color(0,1,0,0.8)'];
	};

	while {buildconfirmation == 1 && alive _hqvehicle} do {
		_truedir = 90 - (getdir player);
		_truepos = [((getpos _hqvehicle) select 0) + (_dist * (cos _truedir)), ((getpos _hqvehicle) select 1) + (_dist * (sin _truedir)),0];

		if ((!surfaceIsWater _truepos) && (!surfaceIsWater getpos _hqvehicle)) then {
			_vehicle setpos _truepos;
			_vehicle setVectorUp [0,0,1]; //for HQ/FOBs only. 
			build_invalid = 0;
		} else {
			_vehicle setpos _ghost_spot;
			build_invalid = 1;
			hint "Can't build on water.";
		};
		sleep 0.05;
	};
	
	if (!alive _hqvehicle) then {
		buildconfirmation = 2;
	};
	
};

_hqvehicle removeAction actcancel;
_hqvehicle removeAction actplace;

if (buildconfirmation == 2) exitwith {
deleteVehicle _vehicle;
Vehicleaction = player1 addaction ["<t color='#ff0066'>Deploy HQ</t>","initHQ\DeployVehicleManual.sqf",["player1"], 0, false, true,"","_target == _this"];
};

_vehpos = getpos _vehicle;
deleteVehicle _vehicle;
player1 removeEventHandler ["respawn",PlayerRespawnEHDeployment];
sleep 0.1;
_vehicle = _classname createVehicle _vehpos;
_vehicle allowDamage false;
_vehicle setpos _vehpos;
_vehicle setVectorUp [0,0,1];
sleep 0.3;
_vehicle allowDamage true;
_vehicle setDamage 0;



// create marker on HQ
_markername = format["%1%2",(_vehpos select 0),(_vehpos select 1)]; // Define marker name

//hint _markername;
_markerstr = createMarker [str(_markername), _vehpos];
_markerstr setMarkerShape "ICON";
str(_markername) setMarkerType "mil_flag";
str(_markername) setMarkerColor "ColorBlue";
str(_markername) setMarkerText "Main base";
blu_hq_markername = _markername; publicVariable "blu_hq_markername";

// make HQ zone notification trigger
_trg5=createTrigger["EmptyDetector",_vehpos];
_trg5 triggerAttachVehicle [player];
_trg5 setTriggerArea[250,250,0,false];
_trg5 setTriggerActivation["VEHICLE","PRESENT",true];
_trg5 setTriggerStatements["this", format["[""%1"",thislist] spawn Recurring_fnc_enterlocation",'Main Base'], ""];

// CREATE MARKER (HQ)
_HQmarker = createMarker ["HQMarker",_vehpos];
"HQMarker" setMarkerShape "ELLIPSE";
"HQMarker" setMarkerBrush "SolidBorder";
"HQMarker" setMarkerColor "ColorBlue";
"HQMarker" setMarkerSize [250, 250];
"HQMarker" setMarkerAlpha 0.1; 
// warning trigger when an enemy approaches the camp
_trgWarning=createTrigger["EmptyDetector",_vehpos];
_trgWarning setTriggerArea[500,500,0,false];
_trgWarning setTriggerActivation["EAST","PRESENT",true];
_trgWarning setTriggerStatements["this","[] call Recurring_fnc_warninghq", ""];

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
_hq setpos [_vehpos select 0, _vehpos select 1, .59];
[[hq_blu1],"Recurring_fnc_addHQactions",true,true] spawn BIS_fnc_MP;
[_hq] remoteExecCall ["Soldiers_fnc_RandomBluforIdentityGeneral", 0, true];

//GUARDS
_handle = [getpos hq_blu1] execVM "initHQ\guards.sqf";

//STATIC DEFENSES
_handle = [getpos hq_blu1] execVM "initHQ\fortify.sqf";

//REQUEST LAPTOP
_handle = [getpos hq_blu1] execVM "initHQ\laptop.sqf";

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
player setpos [(_vehpos select 0)-1.5, (_vehpos select 1) +1];
player setdir 110;

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

//////// HQ GENERATED /////
"respawn_west" setMarkerPos _vehpos;
sleep 0.1;
HQgenerated = true;
publicVariable "HQgenerated";

player allowDamage true;

if (isServer) then {
_sitrep = [player,"sitrep"] call BIS_fnc_addCommMenuItem;
};
