_vehicles = [
"rhsusf_m1025_d_DUWS", 
"rhsusf_m1025_d_m2_DUWS", 
"CUP_B_M1128_MGS_Desert_DUWS", 
"CUP_B_Ridgback_HMG_GB_D_DUWS", 
"CUP_B_FV432_Bulldog_GB_D_RWS_DUWS", 
"CUP_B_M1A1_DES_USMC_DUWS", 
"RHS_M2A3_BUSKIII_DUWS"
];

_returnedvehicle = _vehicles call BIS_fnc_selectRandom;

_returnedvehicle;