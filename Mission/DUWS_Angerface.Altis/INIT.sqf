diag_log format ["------------------ DUWS Angerface START ----v1.00 based on Unofficial ------ player: %1", profileName];

if (!isMultiplayer) exitWith {systemChat "DUWS Angerface does not support single player. If you wish to experience the mission in single player, please launch the mission through a listen server.";};
if (isDedicated) exitWith {};
waitUntil {!isNull player};

player allowDamage false;

persistent_stat_script_init = [] spawn persistent_fnc_initPersistentStats;
waitUntil {scriptDone persistent_stat_script_init};

#include "dialog\supports_init.hpp"
#include "dialog\squad_number_init.hpp"

// IF MP
if (isMultiplayer) then {

	// Get the variables from the parameters lobby
	player_fatigue = paramsArray select 1;
	TrkAllPlayer = paramsArray select 4; //disable/enable player markers
	MisEndCond = paramsArray select 6;
	
	if (TrkAllPlayer == 1) then {["player"] spawn Recurring_fnc_player_markers};
	if (player_fatigue == 0) then {[]execVM "Scripts\fatigue.sqf"};

	"support_specialized_training_available" addPublicVariableEventHandler {lbSetColor [2103, 11, [0, 1, 0, 1]];};
	"commandpointsblu1" addPublicVariableEventHandler {ctrlSetText [1000, format["%1",commandpointsblu1]];}; // change the shown CP for request dialog

	"savegameNumber" addPublicVariableEventHandler { call Recurring_fnc_restClient };
	"capturedZonesNumber" addPublicVariableEventHandler { call persistent_fnc_incrementCapturedZones };
	"finishedMissionsNumber" addPublicVariableEventHandler { call persistent_fnc_incrementCompletedMissions };

	sleep 5;
	if (((vehiclevarname player) in game_master)) then {
	waitUntil {time > 0.1};
	_getsize_script = [player] spawn Recurring_fnc_getMapSize;

	// Init High Command
	_handle = [] execVM "dialog\hc_init.sqf";
	waitUntil {scriptDone _getsize_script};
	
	//Start HQ Placement
	_null = [] execVM "dialog\startup\hq_placement\placement.sqf";
	waitUntil {chosen_hq_placement};

	// create random HQ if manual placement not chose
	if (!player_is_choosing_hqpos) then {
		hq_create = [20, 0.015] execVM "initHQ\locatorHQ.sqf";
		waitUntil {scriptDone hq_create};	
		};
	};
};

///////////////////////////FOR JIP////////////////////////////////////////////////////////

if (hasInterface) then { // WHEN CLIENT CONNECTS INIT (might need sleep)
    waitUntil {isPlayer Player};
	hintsilent "Waiting for the host to find an HQ...";
	waitUntil {sleep 0.5; HQ_pos_found && time > 0.1};
	player setpos [(getmarkerpos "respawn_west" select 0),(getmarkerpos "respawn_west" select 1)+10];
	hintsilent "Waiting for the host to select the campaign parameters...";
	waitUntil {chosen_settings};
	sleep 1;
	player setdamage 0;
	player allowDamage true;
	hintsilent format["Joined game, welcome to %1, %2",worldName,profileName];
	waitUntil {sleep 1; HQgenerated};
	
	
	// init High Command
    _handle = [] execVM "dialog\hc_init.sqf";
    [] execVM "dialog\startup\weather_client.sqf";

};


// INIT the operative list
execVM "dialog\operative\operator_init.sqf";

// MP notification
[] spawn {
	waitUntil {time > 5};
	["info",["MP Mechanics","Check the manual for the specifics of the DUWS in MP"]] call bis_fnc_showNotification;
};


// CREATE MAIN OBJECTIVE
capture_island_obj = player createSimpleTask ["taskIsland"];
capture_island_obj setSimpleTaskDescription ["The enemy is controlling the island, we must take it back! Capture every zone under enemy control and the mission will succeed.<br/>You can let your BLUFOR forces take the island by themselves and help them getting a bigger army by accomplishing side missions. Or you can capture the zones yourself and do all the big work. As the campaign progress, the war will escalate and the armies will get stronger and start to use bigger guns.<br/>To capture a zone, you need to have more units inside the zone than the enemy.<br/><br/>It's up to you on how you want to play this.<br/>Good luck, soldier!","Take the island",""];

//Create win condition handler
"zoneundercontrolblu" addPublicVariableEventHandler {
  if (zoneundercontrolblue >= amount_zones_created) then {
    call persistent_fnc_addMissionWin;
    ["TaskSucceeded",["","Island captured!"]] call bis_fnc_showNotification;
    capture_island_obj setTaskState "Succeeded";
    sleep 3;
    ["island_captured_win",true,true] call BIS_fnc_endMission;
  };
};

//Cleanup unused players.
for[{_x = 2},{_x <= 12},{_x = _x + 1}] do
{
	_thePlayer = missionNamespace getVariable format["player%1", _x];
	if(!isNil("_thePlayer")) then
	{
		if(!isPlayer _thePlayer) then
		{
			deleteVehicle _thePlayer;
		};
	};
};

waitUntil {!isNil "hq_blu1"};

BOMBCODE1 = [];
[] call compile preprocessfilelinenumbers "Scripts\protectofficer.sqf";
[] call compile preprocessfilelinenumbers "missions\missions\roulette\deathhint.sqf";


waitUntil {!isNil "protect_officer"};
hq_blu1 addeventhandler ["firednear", {_this call protect_officer}];
[] spawn Recurring_fnc_grenadeStop;

_satcom1 = [] execVM "pxs_satcom_a3\init_satellite.sqf";

////////////////INIT NO MOVING WITH FASTTRAVEL///////////////////////////////////////
fn_enableSimulation = {(_this select 0) enableSimulation (_this select 1)};

////////////////////////////////////////////////////////////////////////////////////
