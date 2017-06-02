_soldiernumber = [
"Opfor_TeamLeader_1", 
"Opfor_TeamLeader_2", 
"Opfor_TeamLeader_3", 
"Opfor_TeamLeader_4", 
"Opfor_TeamLeader_5", 
"Opfor_TeamLeader_6", 
"Opfor_TeamLeader_7", 
"Opfor_TeamLeader_8",
"Opfor_TeamLeader_9", 
"Opfor_TeamLeader_10"
];

_returnedsoldier = _soldiernumber call BIS_fnc_selectRandom;

_returnedsoldier;