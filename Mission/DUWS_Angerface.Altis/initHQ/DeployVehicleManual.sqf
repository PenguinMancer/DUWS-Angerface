_hqvehicle = _this select 0;
blu_hq_created = true;

_hqblu = getPos _hqvehicle;

PosOfBLUHQ = _hqblu;
publicVariable "PosOfBLUHQ";

sleep 0.1;
{
	_x action ["Eject", _hqvehicle];
} forEach crew _hqvehicle;
deleteVehicle _hqvehicle;

sleep 0.3;

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
_trg5 setTriggerArea[100,100,0,false];
_trg5 setTriggerActivation["VEHICLE","PRESENT",true];
_trg5 setTriggerStatements["this", format["[""%1"",thislist] execvm 'enterlocation.sqf'",'Main Base'], ""];

// warning trigger when an enemy approaches the camp
_trgWarning=createTrigger["EmptyDetector",_hqblu];
_trgWarning setTriggerArea[500,500,0,false];
_trgWarning setTriggerActivation["EAST","PRESENT",true];
_trgWarning setTriggerStatements["this","[]execVM 'warninghq.sqf'", ""];



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
_hq setVariable ["asr_ai_exclude", true];
//Disable VCOM for officer
_hq setVariable ["NOAI",1,false];
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
		} else {};
		if (WARCOM_blufor_ap < 0) then {
		WARCOM_blufor_ap = 0;
		publicVariable "WARCOM_blufor_ap";
		} else {};
		
		[[[],"spectate.sqf"],"BIS_fnc_execVM",true,true ] call BIS_fnc_MP;
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

HQgenerated = true;
publicVariable "HQgenerated";

player allowDamage true;

if (isServer) then {
_sitrep = [player,"sitrep"] call BIS_fnc_addCommMenuItem;
};
