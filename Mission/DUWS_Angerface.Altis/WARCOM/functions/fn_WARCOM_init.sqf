player globalchat "Initializing WARCOM...";

_array_of_zones_total =_this select 0;
_blu_hq_pos =_this select 1;
_op_hq_pos =_this select 2;
_blufor_ap =_this select 3;
_opfor_ap =_this select 4;
_blu_ai_skill_range =_this select 5;
_opfor_ai_skill = _this select 6;

// INIT VARIABLES
WARCOM_blu_hq_pos = [_blu_hq_pos select 0, (_blu_hq_pos select 1) + 16];
WARCOM_op_hq_pos = _op_hq_pos;
WARCOM_blufor_ap = _blufor_ap;    
WARCOM_opfor_ap = _opfor_ap;
WARCOM_marker_num = 0;
WARCOM_qrf_ready = true;
WARCOM_qrf_zones_ready = true;
WARCOM_blu_ai_skill_range = _blu_ai_skill_range;  // !! IS USING blufor_ai_skill INSTEAD
WARCOM_opf_ai_skill_range = _opfor_ai_skill;
publicVariable "WARCOM_blufor_ap";
publicVariable "WARCOM_opfor_ap";

// SORT ARRAY OF OPFOR ZONES ACCORDING TO DISTANCE FROM BLUHQ 
WARCOM_createdZones = [_array_of_zones_total,[WARCOM_blu_hq_pos],{_input0 distance _x},"ASCEND"] call BIS_fnc_sortBy;

// ARRAY OF ZONES UNDER BLUFOR CONTROL
WARCOM_zones_controled_by_BLUFOR = [];

// ARRAY OF ZONES UNDER OPFOR CONTROL 
// make sure it's not a reference
_WARCOM_zones_controled_by_OPFOR = WARCOM_createdZones;
WARCOM_zones_controled_by_OPFOR = [] + _WARCOM_zones_controled_by_OPFOR;
publicvariable "WARCOM_zones_controled_by_OPFOR";

// Init BLU patrols
_blu_patrol = [] execVM "WARCOM\functions\WARCOM_blu_patrol.sqf";
waitUntil {scriptDone _blu_patrol};

// Init OPF patrols
_opf_patrol = [] execVM "WARCOM\functions\WARCOM_opf_patrol.sqf";
waitUntil {scriptDone _opf_patrol};

// Initialize the BLU attack waves
_blu_assault = [] execVM "WARCOM\functions\WARCOM_blu_assault.sqf";
waitUntil {scriptDone _blu_assault};

// Init the OPF attack waves
_opf_assault = [] execVM "WARCOM\functions\WARCOM_opf_assault.sqf";
waitUntil {scriptDone _opf_assault};

// Init the OPF town Patrols
_opf_town = [] execVM "WARCOM\functions\WARCOM_opf_townpatrol.sqf";
waitUntil {scriptDone _opf_town};

player globalchat "WARCOM initialized !";