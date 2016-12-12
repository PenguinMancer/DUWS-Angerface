_Uniforms = [
"U_BG_Guerilla1_1",
"U_BG_Guerilla2_1",
"U_BG_Guerilla2_2",
"U_BG_Guerilla2_3",
"CUP_U_C_Citizen_01",
"CUP_U_C_Citizen_02",
"CUP_U_C_Citizen_03",
"CUP_U_C_Citizen_04",
"CUP_U_O_CHDKZ_Lopotev",
"U_I_C_Soldier_Bandit_2_F",
"U_I_C_Soldier_Bandit_3_F",
"CUP_U_C_Villager_03",
"AFG_1980DuckHunter_TacticalUniform_TS",
"CUP_O_TKI_Khet_Partug_01",
"CUP_O_TKI_Khet_Partug_02",
"CUP_O_TKI_Khet_Partug_03",
"CUP_O_TKI_Khet_Partug_04"
];

_soldiervest = [
"TRYK_LOC_AK_chestrig_TAN",
"TRYK_LOC_AK_chestrig_OD",
"TRYK_V_harnes_blk_L",
"TRYK_V_harnes_od_L",
"TRYK_V_harnes_TAN_L",
"CUP_V_RUS_Smersh_1",
"CUP_V_CDF_CrewBelt",
"V_TacChestrig_cbr_F",
"V_TacChestrig_grn_F",
"V_TacChestrig_oli_F"
];

_LeaderVest = [
"CUP_V_B_RRV_DA1",
"CUP_V_B_MTV_Patrol",
"SP_PlateCarrier1_Tan"
];

_soldierfacewear = [
"SFG_Tac_smallBeardD"
];

_soldierheadgear = [
"SP_Shemagh_Black",
"SP_Shemagh_CheckBlack",
"SP_Shemagh_CheckBlue",
"SP_Shemagh_CheckGreen",
"SP_Shemagh_CheckRed",
"SP_Shemagh_CheckTan",
"SP_Shemagh_CheckWhite",
"SP_Shemagh_Green",
"SP_Shemagh_Grey",
"SP_Shemagh_Tan",
"SP_Shemagh_White",
"SP_Hood_Black",
"SP_Hood_Green",
"SP_Hood_Tan"
];

// lets strip them down
_magazines = magazines _unit; 
_items = items _unit; // Medkits, ToolKits etc. 
_assitems = assignedItems _unit; // NVG's, GPS etc. 

{_unit removemagazine _x} foreach _magazines; 
removeAllItems _unit;     

switch (_typeofUnit) do 
{
    case "basic": 
    { 
	removeUniform _unit; _unit forceAddUniform (_Uniforms call BIS_fnc_selectRandom); 
	removeGoggles _unit; _unit addGoggles (_soldierfacewear call BIS_fnc_selectRandom); 
    removeHeadgear _unit; _unit addHeadgear (_soldierheadgear call BIS_fnc_selectRandom); 
    removeVest _unit; _unit addVest (_soldiervest call BIS_fnc_selectRandom); 
    }; 
	case "Leader": 
    { 
	removeUniform _unit; _unit forceAddUniform (_Uniforms call BIS_fnc_selectRandom); 
	removeGoggles _unit; _unit addGoggles (_soldierfacewear call BIS_fnc_selectRandom); 
    removeHeadgear _unit; _unit addHeadgear (_soldierheadgear call BIS_fnc_selectRandom); 
    removeVest _unit; _unit addVest (_LeaderVest call BIS_fnc_selectRandom); 
    }; 
	
}; 

{_unit addMagazine _x} forEach _magazines; 
{_unit additem _x} forEach _items; 
{_unit assignitem _x} forEach _assitems; 
_unit setvariable ["Opf_invset", true,true]  