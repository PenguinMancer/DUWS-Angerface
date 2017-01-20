diag_log format ["------------------ DUWS Angerface START ----v1.00 based on Unofficial ------ player: %1", profileName];

	if (isNil "weather_type") then {weather_type = "varied";};     // choose between multiple weather types, varied default.
	if (isNil "opfor_ai_skill") then {opfor_ai_skill = [0.3,0.5];};    // set the skill range of enemy AI, from 0 to 1 (0 being completely dumb)
	if (isNil "blufor_ai_skill") then {blufor_ai_skill = [0.4,0.7];};    // set the skill range of friendly AI, from 0 to 1 (0 being completely dumb)
	zones_max_dist_from_hq = 7500;
	dynamic_weather_enable = true;
	advanced_chosen = false;
	manually_chosen = false;
	Attack = false;
	PlayerMrkrs = true;
	zoneFound = false;

	if (isNil "enable_fast_travel") then {
	enable_fast_travel = true; 									// allow fast travel or not
	};
	if (isNil "enableChopperFastTravel") then {
	enableChopperFastTravel = true;  							// chopper taxi (support) will fast travel (teleport) or not
	};
	if (isNil "commandpointsblu1") then {
	commandpointsblu1 = 20;            							// Starting CP
	};
	if (isNil "USDbudget") then {
	USDbudget = 500;            									// Starting USD
	};
    if (isNil "blufor_ap") then {
	blufor_ap = 0;												// Starting Blu AP
	};         
	if (isNil "opfor_ap") then {
	opfor_ap = 0;												// Starting Opfor AP
	};      
///////////////////////////////////////////////////////
// initialise variables
//////////////////////////////////////////////////////
// MOST OF THE VALUES ARE BEING OVERWRITTEN BY PLAYER INPUT AT THE BEGINNING
//////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////
/// ------------- VALUES UNDER THIS ARE OVERWRITTEN
zones_number = 4; // Number of capturables zones to create
zones_spacing = 1200; // minimum space between 2 zones (in meters)
zones_max_radius = 1000;   // Determine the maximum radius a generated zone can have.
zones_min_radius = 200; // Determine the minium radius a generated zone can have. SHOULD NOT BE UNDER 200.
zone_fortified = false; // Only used for advanced zone generation, allows you to turn fortification on and off.
zone_compound = false; //Only used for advanced zone generation. Compounds have twice as many prefabs as normal.
/////////////////////////////////////////////////////////////

//initialize various scripts
QRF = compile preprocessFile "WARCOM\WARCOM_opf_qrf.sqf";
QRF_zone = compile preprocessFile "WARCOM\WARCOM_opf_qrf_zone.sqf";
QRF_WP = compile preprocessFile "WARCOM\WARCOM_wp_opf_qrf.sqf";
[] call compile preprocessFile "Scripts\kndr_unit_markers.sqf";

///////////////////////////////////////////////////
/// ------------- DEBUG VARIABLES ------------- ///
debugmode = true;
enemy_marker_num = 0;
enemy_waypoint_num = 0;
///////////////////////////////////////////////////

missions_success = 0; // number of missions succeeded (!!dont touch!!)
zones_created = false;
failsafe_zones_not_found = false;
createcenter sideLogic;
LogicGroup = createGroup SideLogic;
PAPABEAR=[West,"HQ"];
fobSwitch = false;
player_is_choosing_hqpos = false;


if (isNil "amount_zones_created") then
{
amount_zones_created = 0;
};

if (isNil "HQ_pos_found") then
{
HQ_pos_found = false;
};

if (isNil "chosen_settings") then
{
chosen_settings = false;
};

if (isNil "chosen_hq_placement") then
{
chosen_hq_placement = false;
};

if (isNil "zoneundercontrolblu") then
{
zoneundercontrolblu = 0;
};

if (isNil "savegameNumber") then
{
savegameNumber = 0;
};
if (isNil "capturedZonesNumber") then
{
capturedZonesNumber = 0;
};
if (isNil "finishedMissionsNumber") then
{
finishedMissionsNumber = 0;
};
if (isNil "OvercastVar") then
{
OvercastVar = 0;
};
if (isNil "FogVar") then
{
FogVar = 0;
};
if (isNil "WindVar") then
{
WindVar = 0;
};
/*
*/
if (isNil "Array_of_FOBS") then // this is a special one (if/else)
{	// if the player is sp or server or no fobs have been created
Array_of_FOBS = [];
}
else /// JIP for the client
{
	{
	[_x] execVM "support\FOBactions.sqf";
	} forEach Array_of_FOBS;
};
if (isNil "Array_of_FOBname") then
{
Array_of_FOBname = [];
};
if (isNil "WARCOM_zones_controled_by_BLUFOR") then
{
WARCOM_zones_controled_by_BLUFOR = [];publicVariable "WARCOM_zones_controled_by_BLUFOR";
};
if (isNil "Array_of_OPFOR_zones") then
{
Array_of_OPFOR_zones = [];publicVariable "Array_of_OPFOR_zones";
};
if (isNil "WARCOM_zones_controled_by_OPFOR") then
{
WARCOM_zones_controled_by_OPFOR = [];publicVariable "WARCOM_zones_controled_by_OPFOR";
};
if (isNil "MTV1cap") then
{
MTV1cap = false;publicVariable "MTV1cap";
};
if (isNil "MTV1") then
{
MTV1 = ObjNull;
};
if (isNil "weatherdone") then
{
weatherdone = false;publicVariable "weatherdone";
};
if (isNil "officedead") then
{
officedead = false;publicVariable "officedead";
};
if (isNil "HQgenerated") then
{
HQgenerated = false;publicVariable "HQgenerated";
};
if (isNil "Zonesgenerated") then
{
Zonesgenerated = false;publicVariable "Zonesgenerated";
};

//MTV MARKER JIP
if (!isServer) then{
if ((MTV1cap) && (alive MTV1)) then {[MTV1, "mil_triangle", "ColorGreen", "2", "2", "MTV-1"] call kndr_assignMarker};
};

////////////////////////////////////////////////////////////////////////////////////////////////

game_master = ["player1"];
player allowDamage false;

//Time of Day
 if (time < 10) then {
setDate [2016, 8, 6, (paramsArray select 2), 1];
};

#include "dialog\supports_init.hpp"
#include "dialog\squad_number_init.hpp"

_getsize_script = [player] spawn Recurring_fnc_getMapSize;

//enable ZBE units caching
ZbeCacheStatus = paramsArray select 8;

if (ZbeCacheStatus == 1) then {
	if (isServer) then {[1000,-1,false,100,1000,1000]execvm "zbe_cache\main.sqf"};
};

// IF MP
if (isMultiplayer) then {

	// Get the variables from the parameters lobby
	DUWSMP_CP_death_cost = paramsArray select 0;
	player_fatigue = paramsArray select 1;
	AttackHeli = paramsArray select 3; //disable/enable attack choppers
	TrkAllPlayer = paramsArray select 4; //disbale/enable player markers
	UseSiren = paramsArray select 5;
	MisEndCond = paramsArray select 6;
	Timescale = paramsArray select 7;

	if (AttackHeli == 0) then {Attack = false};
	if (AttackHeli == 1) then {Attack = true};
	if (TrkAllPlayer == 0) then {PlayerMrkrs = false};
	if (player_fatigue == 0) then {[]execVM "Scripts\fatigue.sqf"};
	
	if (support_halo_available) then {hq_blu1 addAction ["<t color='#15ff00'>HALO Alone (5CP)</t>", "ATM_airdrop\atm_airdrop.sqf", "", 0, true, true, "", "_this == player"]};
	if (support_halo_available) then {hq_blu1 addAction ["<t color='#15ff00'>HALO Group (5CP)</t>", "COB_HALO\grphalo.sqf", "", 0, true, true, "", "_this == player"]};
	if (support_satcom_available) then {_hq addAction ["<t color='#ff0066'>SATCOM</t>", {call PXS_startSatellite;}, "", 0, true, true, "", "_this == player"];};

	_timemult = Timescale;
	setTimeMultiplier _timemult;
	
	PlayerKilledEH = player addEventHandler ["killed", {commandpointsblu1 = commandpointsblu1 - DUWSMP_CP_death_cost; publicVariable "commandpointsblu1"}];
	"support_specialized_training_available" addPublicVariableEventHandler {lbSetColor [2103, 11, [0, 1, 0, 1]];};
	"commandpointsblu1" addPublicVariableEventHandler {ctrlSetText [1000, format["%1",commandpointsblu1]];}; // change the shown CP for request dialog


	// each time there is a new FOB
	"Array_of_FOBS" addPublicVariableEventHandler {

		fobSwitch = false;
		//Add the FoB to the list of revive locations.
		_fobAmount = count Array_of_FOBS;
		_fobIndex = _fobAmount - 1;
		_createdFOB = Array_of_FOBS select _fobIndex;

		[missionNamespace, _createdFOB] call BIS_fnc_addRespawnPosition;
	};

	if (!isServer) then {
		"savegameNumber" addPublicVariableEventHandler { call Recurring_fnc_restClient };
		"capturedZonesNumber" addPublicVariableEventHandler { call persistent_fnc_incrementCapturedZones }; // change the shown CP for request dialog
		"finishedMissionsNumber" addPublicVariableEventHandler { call persistent_fnc_incrementCompletedMissions }; // change the shown CP for request dialog
	};

	sleep 5;
	
	if (((vehiclevarname player) in game_master)) then {
	DUWS_host_start = false;
	publicVariable "DUWS_host_start";
	waitUntil {time > 0.1};
	DUWS_host_start = true;
	publicVariable "DUWS_host_start";
	_handle = [] execVM "dialog\hc_init.sqf";
	waitUntil {scriptDone _getsize_script};
	};


};

_null = [] execVM "dialog\startup\hq_placement\placement.sqf";
waitUntil {chosen_hq_placement};

// create random HQ
if (!player_is_choosing_hqpos) then {
    hq_create = [20, 0.015] execVM "initHQ\locatorHQ.sqf";
    waitUntil {scriptDone hq_create};	
};

// group cleaning script
if (isServer) then {
clean = [
		5*60, // seconds to delete dead bodies (0 means don't delete)
		5*60, // seconds to delete dead vehicles (0 means don't delete)
		0, // seconds to delete immobile vehicles (0 means don't delete)
		5*60, // seconds to delete dropped weapons (0 means don't delete)
		0, // seconds to deleted planted explosives (0 means don't delete)
		10*60 // seconds to delete dropped smokes/chemlights (0 means don't delete)
] execVM 'Scripts\repetitive_cleanup.sqf';
};

///////////////////////////FOR JIP////////////////////////////////////////////////////////

if (!isServer) then { // WHEN CLIENT CONNECTS INIT (might need sleep)
    waitUntil {!isnull Player};
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
	[] execVM "dialog\startup\weather_client.sqf";

};

/////////////////////////////////////////////////////////////////////////////////////////////////


if (isServer) then {
// initialise the ressources per zone bonus
_basepoint = [] execVM "Scripts\zonesundercontrol.sqf";
};

// init the bonuses you get when capturing zones
_basepoint = [] execVM "Scripts\zones_bonus.sqf";

// INIT the operative list
execVM "dialog\operative\operator_init.sqf";

// MP notification
if (isMultiplayer) then {
	[] spawn {
		waitUntil {time > 5};
		["info",["MP Mechanics","Check the manual for the specifics of the DUWS in MP"]] call bis_fnc_showNotification;
	};
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


//Warcom Init
waitUntil {sleep 1; (HQgenerated)};
waitUntil {sleep 1; (Zonesgenerated)};
sleep 1;
_warcom_init = [Array_of_OPFOR_zones, getpos hq_blu1, [0,0,0], blufor_ap, opfor_ap, 900,blufor_ai_skill,opfor_ai_skill, 900] execVM "WARCOM\WARCOM_init.sqf";

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

trk = ["player"] execVM 'Scripts\player_markers.sqf';

BOMBCODE1 = [];
[] call compile preprocessfilelinenumbers "Scripts\protectofficer.sqf";
[] call compile preprocessfilelinenumbers "missions\missions\roulette\deathhint.sqf";


waitUntil {!isNil "hq_blu1"};
waitUntil {!isNil "protect_officer"};
hq_blu1 addeventhandler ["firednear", {_this call protect_officer}];
execVM "Scripts\grenadeStop.sqf";
execVM "Scripts\EnemyAPGain.sqf";

_satcom1 = [] execVM "pxs_satcom_a3\init_satellite.sqf";

if (isServer) then {
supportreinit = addMissionEventHandler ["loaded",{[] execVM "Scripts\supports_reinit.sqf"}];
};

////////////////INIT NO MOVING WITH FASTTRAVEL///////////////////////////////////////
fn_enableSimulation = {(_this select 0) enableSimulation (_this select 1)};

////////////////////////////////////////////////////////////////////////////////////
