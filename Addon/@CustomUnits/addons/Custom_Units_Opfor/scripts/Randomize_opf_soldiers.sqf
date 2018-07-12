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

_BasicPrimary = [
["hlc_rifle_ak47","hlc_30Rnd_762x39_b_ak"],
["rhs_weap_akm","hlc_30Rnd_762x39_b_ak"],
["rhs_weap_akms","hlc_30Rnd_762x39_b_ak"],
["hlc_rifle_ak74","hlc_30Rnd_545x39_B_AK"],
["hlc_rifle_ak74_dirty","hlc_30Rnd_545x39_B_AK"],
["hlc_rifle_ak74_dirty2","hlc_30Rnd_545x39_B_AK"]
]; //Basic rifles.

_BasicSecondary = [
["RH_mak","RH_8Rnd_9x18_Mak"],
["rhs_weap_pya","rhs_mag_9x19_17"]
]; //Basic pistols.

_LeaderPrimary = [
["hlc_rifle_ak74m","hlc_30Rnd_545x39_B_AK"],
["hlc_rifle_aks74","hlc_30Rnd_545x39_B_AK"],
["RH_hk416s_des","RH_30Rnd_556x45_M855A1"],
["hlc_rifle_akm","hlc_30Rnd_762x39_b_ak"]
]; //Rifles unique to Squad/Team leaders

_CompactPrimary = [
["hlc_rifle_aks74u","hlc_30Rnd_545x39_B_AK"],
["hlc_rifle_aks74","hlc_30Rnd_545x39_B_AK"]
]; //Compact weapons for tank crew and such.

_RifleDMR = [
["rhs_weap_svdp_wd_scoped","rhs_10Rnd_762x54mmR_7N1"],
["rhs_weap_m38","rhsgref_5Rnd_762x54_m38"],
["rhs_weap_kar98k","rhsgref_5Rnd_792x57_kar98k"],
["hlc_rifle_M14_Rail_Oldscope","hlc_20Rnd_762x51_B_M14"]
]; //Marksman weapons.

_RifleGrenades = [
["hlc_rifle_aks74_GL","hlc_30Rnd_545x39_B_AK","hlc_VOG25_AK"],
["hlc_rifle_akmgl","hlc_30Rnd_762x39_b_ak","hlc_VOG25_AK"]
]; //Rifles with under barrel launchers.

_Launchers = [
["rhs_weap_rpg7","rhs_rpg7_PG7VL_mag"]
]; //Full sized launchers.

_AALaunchers = [
["CUP_launch_9K32Strela","CUP_Igla_M"]
]; //Anti Air Launchers

_Machineguns = [
["CUP_lmg_PKM","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"],
["CUP_lmg_Pecheneg","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"],
["hlc_rifle_rpk","hlc_45Rnd_762x39_m_rpk"],
["hlc_rifle_rpk74n","hlc_45Rnd_545x39_t_rpk"]
]; //LMGs/MGs.

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
	_WeaponPrimary = selectRandom _BasicPrimary; [_unit, (_WeaponPrimary select 0), 3, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
	_WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    }; 
	case "aa": //Anti Air
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
	_WeaponPrimary = selectRandom _BasicPrimary; [_unit, (_WeaponPrimary select 0), 3, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
	_WeaponLauncher = selectRandom _AALaunchers; [_unit, (_WeaponLauncher select 0), 1, (_WeaponLauncher select 1)] call BIS_fnc_addWeapon;
    };
	case "ar": //Autorifleman
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
	_WeaponLMG = selectRandom _Machineguns; [_unit, (_WeaponLMG select 0), 2, (_WeaponLMG select 1)] call BIS_fnc_addWeapon;
    }; 
	case "aat": //Assistant Anti Tank
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
	_WeaponPrimary = selectRandom _BasicPrimary; [_unit, (_WeaponPrimary select 0), 3, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
    }; 
	case "at": //Anti Tank
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
	_WeaponPrimary = selectRandom _CompactPrimary; [_unit, (_WeaponPrimary select 0), 2, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
	_WeaponLauncher = selectRandom _Launchers; [_unit, (_WeaponLauncher select 0), 2, (_WeaponLauncher select 1)] call BIS_fnc_addWeapon;
    }; 
	case "ammo": //Ammo Holder
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest);
	_WeaponPrimary = selectRandom _BasicPrimary; _unit addWeapon (_WeaponPrimary select 0);
	_WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    }; 
	case "grenade": //Grenadier
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
	_WeaponRifleGrenade = selectRandom _RifleGrenades; [_unit, (_WeaponRifleGrenade select 0), 3, (_WeaponRifleGrenade select 1)] call BIS_fnc_addWeapon; _unit addMagazines [(_WeaponRifleGrenade select 2), 3];
    }; 
	case "lat": //Light Anti Tank
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
	_WeaponPrimary = selectRandom _CompactPrimary; [_unit, (_WeaponPrimary select 0), 3, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
	_WeaponLauncher = selectRandom _Launchers; [_unit, (_WeaponLauncher select 0), 1, (_WeaponLauncher select 1)] call BIS_fnc_addWeapon;
    }; 
	case "marks": //Marksman
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
	_WeaponDMR = selectRandom _RifleDMR; [_unit, (_WeaponDMR select 0), 3, (_WeaponDMR select 1)] call BIS_fnc_addWeapon;
	_WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    }; 
	case "medic": //Medic
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest);
	_WeaponPrimary = selectRandom _BasicPrimary; [_unit, (_WeaponPrimary select 0), 3, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
	_WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    }; 
	case "leader": //Squad/Team Leader
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _LeaderVest); 
	_WeaponPrimary = selectRandom _LeaderPrimary; [_unit, (_WeaponPrimary select 0), 3, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
	_WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    }; 
	case "sniper": //Sniper
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
    _WeaponDMR = selectRandom _RifleDMR; [_unit, (_WeaponDMR select 0), 3, (_WeaponDMR select 1)] call BIS_fnc_addWeapon;
	_WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    }; 
	case "spotter": //Spotter
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
	_WeaponPrimary = selectRandom _CompactPrimary; [_unit, (_WeaponPrimary select 0), 3, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
	_WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    }; 
	case "officer": //Officer
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _LeaderVest); 
	_WeaponPrimary = selectRandom _LeaderPrimary; [_unit, (_WeaponPrimary select 0), 3, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
	_WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    }; 
}; 

//readd the items we took from them.
{_unit addMagazine _x} forEach _magazines; 
{_unit additem _x} forEach _items; 
{_unit linkItem _x} forEach _assitems; 
_unit setvariable ["Opf_invset", true,true]  