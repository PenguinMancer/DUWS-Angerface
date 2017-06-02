_soldiernumber = [
"Blufor_Medic_1", 
"Blufor_Medic_2", 
"Blufor_Medic_3",
"Blufor_Medic_4", 
"Blufor_Medic_5", 
"Blufor_Medic_6",
"Blufor_Medic_7", 
"Blufor_Medic_8", 
"Blufor_Medic_9",
"Blufor_Medic_10", 
"Blufor_Medic_11", 
"Blufor_Medic_12"
];

_returnedsoldier = _soldiernumber call BIS_fnc_selectRandom;

_returnedsoldier;