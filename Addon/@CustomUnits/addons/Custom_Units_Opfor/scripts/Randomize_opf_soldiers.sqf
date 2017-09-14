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
]; //All soldier uniforms

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
]; //Vests for most units

_LeaderVest = [
"CUP_V_B_RRV_DA1",
"CUP_V_B_MTV_Patrol",
"SP_PlateCarrier1_Tan"
]; //Vests, but for leader units

_soldierfacewear = [
"SFG_Tac_smallBeardD"
]; //Soldier facewear, such as glasses

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
]; //Soldier headgear, such as helmets

//Weapons begin here

//strip units of items that would be inside the vests and backpacks we're about to remove
_magazines = magazines _unit; 
_items = items _unit; // Medkits, ToolKits etc. 
_assitems = assignedItems _unit; // NVG's, GPS etc. 

{_unit removemagazine _x} foreach _magazines; 
removeAllItems _unit;     

//figure out type of unit, then add appropriate gear
switch (_typeofUnit) do 
{
    case "basic": //Soldier
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
    }; 
	case "aa": //Anti Air
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
    };
	case "ar": //Autorifleman
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
    }; 
	case "aat": //Assistant Anti Tank
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
    }; 
	case "at": //Anti Tank
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
    }; 
	case "ammo": //Ammo Holder
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
    }; 
	case "grenade": //Grenadier
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
    }; 
	case "lat": //Light Anti Tank
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
    }; 
	case "marks": //Marksman
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
    }; 
	case "medic": //Medic
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
    }; 
	case "leader": //Squad/Team Leader
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _LeaderVest); 
    }; 
	case "sniper": //Sniper
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
    }; 
	case "spotter": //Spotter
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
    }; 
	case "officer": //Officer
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _LeaderVest); 
    }; 
}; 

//readd the items we took from them.
{_unit addMagazine _x} forEach _magazines; 
{_unit additem _x} forEach _items; 
{_unit linkItem _x} forEach _assitems; 
_unit setvariable ["Opf_invset", true,true]  