///////////////////////////////////////////////////////
// initialise variables
//////////////////////////////////////////////////////
// MOST OF THE VALUES ARE BEING OVERWRITTEN BY PLAYER INPUT AT THE BEGINNING
//////////////////////////////////////////////////////
if (isNil "weather_type") then {weather_type = "varied";};     // choose between multiple weather types, varied default.
if (isNil "opfor_ai_skill") then {opfor_ai_skill = [0.3,0.5];};    // set the skill range of enemy AI, from 0 to 1 (0 being completely dumb)
if (isNil "blufor_ai_skill") then {blufor_ai_skill = [0.4,0.7];};    // set the skill range of friendly AI, from 0 to 1 (0 being completely dumb)
zones_max_dist_from_hq = 7500;
dynamic_weather_enable = true;publicVariable "dynamic_weather_enable";
advanced_chosen = false;
manually_chosen = false;
Attack = false;
PlayerMrkrs = true;

//Time of Day
 if (time < 10) then {
setDate [2019, 7, 23, (paramsArray select 2), 1];
};

/////////////////////////////////////////////////////////////
/// ------------- VALUES UNDER THIS ARE OVERWRITTEN ----- ///
zones_number = 4; // Number of capturables zones to create
zones_spacing = 1200; // minimum space between 2 zones (in meters)
zones_max_radius = 1000;   // Determine the maximum radius a generated zone can have.
zones_min_radius = 200; // Determine the minium radius a generated zone can have. SHOULD NOT BE UNDER 200.
zone_fortified = false; // Only used for advanced zone generation, allows you to turn fortification on and off.
zone_compound = false; //Only used for advanced zone generation. Compounds have twice as many prefabs as normal.
/////////////////////////////////////////////////////////////

///////////////////////////////////////////////////
/// ------------- DEBUG VARIABLES ------------- ///
debugmode = true;publicVariable "debugmode";
enemy_marker_num = 0;publicVariable "enemy_marker_num";
enemy_waypoint_num = 0;publicVariable "enemy_waypoint_num";
///////////////////////////////////////////////////

// number of mission successes (DONT TOUCH!)
missions_success = 0;publicVariable "missions_success";


zones_created = false;publicVariable "zones_created";
failsafe_zones_not_found = false;publicVariable "failsafe_zones_not_found";
createcenter sideLogic;
LogicGroup = createGroup SideLogic;publicVariable "LogicGroup";
PAPABEAR=[West,"HQ"];publicVariable "PAPABEAR";
player_is_choosing_hqpos = false;publicVariable "player_is_choosing_hqpos";
game_master = ["player1"];publicVariable "game_master";

//enable ZBE units caching
ZbeCacheStatus = paramsArray select 8;

if (ZbeCacheStatus == 1) then {
	//unit caching seems to break super badly on dedicated, so this is making sure that if you're on dedicated, it doesn't screw you.
	if (!isDedicated) then {[1000,-1,false,100,1000,1000]execvm "zbe_cache\main.sqf"};
};

// Get the variables from the parameters lobby
DUWSMP_CP_death_cost = paramsArray select 0;
AttackHeli = paramsArray select 3; //disable/enable attack choppers
UseSiren = paramsArray select 5;
Timescale = paramsArray select 7;


publicVariable "DUWSMP_CP_death_cost";
if (AttackHeli == 0) then {Attack = false} else {Attack = true};
publicVariable "Attack";
publicVariable "UseSiren";
setTimeMultiplier Timescale;


if (isNil "enable_fast_travel") then {
	enable_fast_travel = true;publicVariable "enable_fast_travel";					// allow fast travel or not
};
if (isNil "enableChopperFastTravel") then {
	enableChopperFastTravel = true;publicVariable "enableChopperFastTravel";		// chopper taxi (support) will fast travel (teleport) or not
};
if (isNil "commandpointsblu1") then {
	commandpointsblu1 = 20;publicVariable "commandpointsblu1";						// Starting CP
};
if (isNil "USDbudget") then {
	USDbudget = 500;publicVariable "USDbudget";										// Starting USD
};
if (isNil "blufor_ap") then {
	blufor_ap = 0;publicVariable "blufor_ap";										// Starting Blu AP
};         
if (isNil "opfor_ap") then {
	opfor_ap = 0;																	// Starting Opfor AP
};
if (isNil "HQgenerated") then {
	HQgenerated = false;publicVariable "HQgenerated";
};
if (isNil "Zonesgenerated") then {
	Zonesgenerated = false;publicVariable "Zonesgenerated";
};
if (isNil "amount_zones_created") then {
	amount_zones_created = 0;publicVariable "amount_zones_created";
};
if (isNil "HQ_pos_found") then {
	HQ_pos_found = false;publicVariable "HQ_pos_found";									
};
if (isNil "chosen_settings") then {
	chosen_settings = false;publicVariable "chosen_settings";
};
if (isNil "chosen_hq_placement") then {
	chosen_hq_placement = false;publicVariable "chosen_hq_placement";
};
if (isNil "zoneundercontrolblu") then {
	zoneundercontrolblu = 0;publicVariable "zoneundercontrolblu";
};
if (isNil "savegameNumber") then {
	savegameNumber = 0;publicVariable "savegameNumber";
};
if (isNil "capturedZonesNumber") then {
	capturedZonesNumber = 0;publicVariable "capturedZonesNumber";
};
if (isNil "finishedMissionsNumber") then {
	finishedMissionsNumber = 0;publicVariable "finishedMissionsNumber";
};
if (isNil "OvercastVar") then {
	OvercastVar = 0;publicVariable "OvercastVar";
};
if (isNil "FogVar") then {
	FogVar = 0;publicVariable "FogVar";
};
if (isNil "WindVar") then {
	WindVar = 0;publicVariable "WindVar";
};
if (isNil "Array_of_FOBS") then {
	Array_of_FOBS = [];publicVariable "Array_of_FOBS";
};
if (isNil "Array_of_FOBname") then {
	Array_of_FOBname = [];publicVariable "Array_of_FOBname";
};
if (isNil "WARCOM_zones_controled_by_BLUFOR") then {
	WARCOM_zones_controled_by_BLUFOR = [];publicVariable "WARCOM_zones_controled_by_BLUFOR";
};
if (isNil "Array_of_OPFOR_zones") then {
	Array_of_OPFOR_zones = [];publicVariable "Array_of_OPFOR_zones";
};
if (isNil "WARCOM_zones_controled_by_OPFOR") then {
	WARCOM_zones_controled_by_OPFOR = [];publicVariable "WARCOM_zones_controled_by_OPFOR";
};
if (isNil "MTV1cap") then {
	MTV1cap = false;publicVariable "MTV1cap";
};
if (isNil "MTV1") then {
	MTV1 = ObjNull;
};
if (isNil "weatherdone") then {
	weatherdone = false;publicVariable "weatherdone";
};
if (isNil "officedead") then {
	officedead = false;publicVariable "officedead";
};
if (isNil "BLD1cap") then {
	BLD1cap = 0;publicvariable "BLD1cap";
};
if (isNil "Satellite") then {
	Satellite = 0;publicvariable "Satellite";
};
if (isNil "Halojump") then {
	Halojump = 0;publicvariable "Halojump";
};
////////////////////////////////////////////////////////////////////////////////////////////////

//Warcom Init
waitUntil {sleep 1; (HQgenerated)};
waitUntil {sleep 1; (Zonesgenerated)};
sleep 1;

[] spawn Recurring_fnc_enemyAPGain;
_basepoint = [] spawn Recurring_fnc_zonesundercontrol;

// init the bonuses you get when capturing zones
_basepoint = [] spawn Recurring_fnc_zones_bonus;

_warcom_init = [Array_of_OPFOR_zones, getpos hq_blu1, [0,0,0], blufor_ap, opfor_ap,blufor_ai_skill,opfor_ai_skill] spawn Warcom_fnc_WARCOM_init;
waitUntil {scriptDone _warcom_init};

// group cleaning script
clean = [
	10*60, // seconds to delete dead bodies (0 means don't delete)
	10*60, // seconds to delete dead vehicles (0 means don't delete)
	0, // seconds to delete immobile vehicles (0 means don't delete)
	10*60, // seconds to delete dropped weapons (0 means don't delete)
	0, // seconds to deleted planted explosives (0 means don't delete)
	10*60 // seconds to delete dropped smokes/chemlights (0 means don't delete)
] spawn Recurring_fnc_repetitive_cleanup;