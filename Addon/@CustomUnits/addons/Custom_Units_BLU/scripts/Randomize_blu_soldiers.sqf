//Uniforms and other worn gear start here.
_Uniforms = [
"rhs_uniform_cu_ucp",
"rhs_uniform_acu_ucp",
"rhs_uniform_cu_ocp"
]; //All unit uniforms.

_soldiervest = [
"rhsusf_mbav_light",
"TRYK_V_PlateCarrier_coyo_L",
"rhsusf_spc_crewman",
"rhsusf_spc"
]; //Vest for basic soldiers

_ATvest = [
"TRYK_V_PlateCarrier_coyo",
"TRYK_V_PlateCarrier_coyo_L",
"TAC_V_Sheriff_BA_TCL7",
"rhsusf_iotv_ocp_Grenadier"
]; //Vests for units that need to take heavy hits, such as AT units.

_ARvest = [
"TRYK_V_PlateCarrier_coyo_L",
"rhsusf_mbav_mg",
"TRYK_V_ArmorVest_cbr2",
"TAC_V_tacv1L_CY"
]; //Vests for units that need to carry a lot, like autorifleman.

_GrenadierVest = [
"rhsusf_mbav_grenadier",
"rhsusf_iotv_ocp_Grenadier",
"CUP_V_B_Eagle_SPC_GL",
"CUP_V_BAF_Osprey_Mk2_DDPM_Grenadier"
]; //Vests for Grenadier units, often have flak protection.

_MedicVest = [
"CUP_V_BAF_Osprey_Mk2_DDPM_Medic",
"rhsusf_mbav_medic",
"rhsusf_iotv_ocp_Medic"
]; //Vest for combat medics.

_LeaderVest = [
"rhsusf_spcs_ocp_rifleman",
"rhsusf_iotv_ocp_Teamleader",
"rhsusf_iotv_ocp_Squadleader"
]; //Vest for squad and team leader.

_soldierfacewear = [
"LBG_Shemagh_Tan",
"L_Shemagh_Tan",
"LOG_Shemagh_Tan",
"NeckTight_Tan",
"NeckTight_Dmaripat",
"NeckTight_DMBLK",
"NeckTight_DMCLR",
"NeckTight_DMO",
"rhs_googles_black",
"rhs_googles_yellow",
"rhs_googles_orange",
"rhs_googles_clear"
]; //Misc facewear such as glasses.

_soldierheadgear = [
"CUP_H_USMC_LWH_DES",
"rhsusf_mich_bare_norotos_arc_tan",
"H_HelmetB_light_sand",
"TRYK_H_woolhat_tan",
"TRYK_r_cap_tan_Glasses"
]; //Units helmets and other headgear.

_leaderheadgear = [
"TRYK_H_Booniehat_MARPAT_Desert",
"SP_Beret_Tan"
]; //Headgear unique to Squad/Team leaders.

//Weapons start here.

_BasicPrimary = [
["RH_hk416_des","RH_30Rnd_556x45_M855A1"],
["RH_hk416_des_sighted","RH_30Rnd_556x45_M855A1"]
]; //Basic service rifles.

_BasicSecondary = [
["RH_m9","RH_15Rnd_9x19_M9"],
["RH_m9c","RH_15Rnd_9x19_M9"],
["RH_g17","RH_17Rnd_9x19_g17"]
]; //Basic backup pistols.

_LeaderPrimary = [
["CUP_arifle_Mk16_STD","RH_30Rnd_556x45_M855A1"],
["CUP_arifle_Mk16_STD_sighted","RH_30Rnd_556x45_M855A1"],
["RH_hk416_des","RH_30Rnd_556x45_M855A1"],
["RH_hk416_des_sighted","RH_30Rnd_556x45_M855A1"]
]; //Rifles unique to Squad/Team leaders

_CompactPrimary = [
["hlc_smg_mp5a4","hlc_30Rnd_9x19_B_MP5"],
["hlc_smg_mp5a4_sighted","hlc_30Rnd_9x19_B_MP5"],
["SMG_03C_khaki","50Rnd_570x28_SMG_03"]
]; //Compact weapons for tank crew and such.

_RifleDMR = [
["hlc_rifle_psg1","hlc_20rnd_762x51_b_G3"]
]; //Marksman weapons.

_RifleGrenades = [
["rhs_weap_hk416d145_m320","RH_30Rnd_556x45_M855A1","rhs_mag_M441_HE"],
["rhs_weap_hk416d145_m320_sighted","RH_30Rnd_556x45_M855A1","rhs_mag_M441_HE"]
]; //Rifles with under barrel launchers.

_Launchers = [
["CUP_launch_Javelin","CUP_Javelin_M"]
]; //Full sized launchers.

_LightLaunchers = [
["rhs_weap_M136","rhs_m136_mag"]
]; //Single Used Disposable launchers.

_Machineguns = [
["hlc_m249_pip1","hlc_200rnd_556x45_T_SAW"],
["hlc_m249_pip1_sighted","hlc_200rnd_556x45_T_SAW"]
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
	_WeaponPrimary = selectRandom _BasicPrimary; [_unit, (_WeaponPrimary select 0), 5, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
	_WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    }; 
	case "ammo": //Ammo Bearer
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _ARvest); 
	_WeaponPrimary = selectRandom _BasicPrimary; _unit addWeapon (_WeaponPrimary select 0);
	_WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    }; 
	case "aaa": //Assistant Anti Air
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
	_WeaponPrimary = selectRandom _BasicPrimary; [_unit, (_WeaponPrimary select 0), 5, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
	_WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    }; 
	case "aa": //Anti Air
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _ATvest); 
	_WeaponPrimary = selectRandom _BasicPrimary; [_unit, (_WeaponPrimary select 0), 5, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
	_WeaponLauncher = selectRandom _Launchers; [_unit, (_WeaponLauncher select 0), 1, (_WeaponLauncher select 1)] call BIS_fnc_addWeapon;
    }; 
	case "aar": //Assistant Autorifleman
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest);
	_WeaponPrimary = selectRandom _BasicPrimary; [_unit, (_WeaponPrimary select 0), 5, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
	_WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    }; 
	case "ar": //Autorifleman
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _ARvest); 
	_WeaponLMG = selectRandom _Machineguns; [_unit, (_WeaponLMG select 0), 2, (_WeaponLMG select 1)] call BIS_fnc_addWeapon;
    }; 
	case "aat": //Assistant Anti Tank
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
	_WeaponPrimary = selectRandom _BasicPrimary; [_unit, (_WeaponPrimary select 0), 5, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
	_WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    }; 
	case "at": //Anti Tank
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _ATvest); 
	_WeaponPrimary = selectRandom _BasicPrimary; [_unit, (_WeaponPrimary select 0), 5, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
	_WeaponLauncher = selectRandom _Launchers; [_unit, (_WeaponLauncher select 0), 1, (_WeaponLauncher select 1)] call BIS_fnc_addWeapon;
    };
	case "explode": //Explosive Expert
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
	_WeaponPrimary = selectRandom _CompactPrimary; [_unit, (_WeaponPrimary select 0), 5, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
	_WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    };
	case "grenadier": //Grenadier
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _GrenadierVest); 
	_WeaponRifleGrenade = selectRandom _RifleGrenades; [_unit, (_WeaponRifleGrenade select 0), 5, (_WeaponRifleGrenade select 1)] call BIS_fnc_addWeapon; _unit addMagazines [(_WeaponRifleGrenade select 2), 3];
	_WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    }; 
	case "lat": //Light Anti Tank
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
    _WeaponPrimary = selectRandom _BasicPrimary; [_unit, (_WeaponPrimary select 0), 5, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
	_WeaponLauncher = selectRandom _LightLaunchers; [_unit, (_WeaponLauncher select 0), 1, (_WeaponLauncher select 1)] call BIS_fnc_addWeapon;
    };
	case "leader": //Team and Squad Leader
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _leaderheadgear); 
    removeVest _unit; _unit addVest (selectRandom _LeaderVest); 
	_WeaponPrimary = selectRandom _LeaderPrimary; [_unit, (_WeaponPrimary select 0), 5, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
	_WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    }; 
	case "marks": //Marksman, which is like sniper but without a ghillie
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
    removeVest _unit; _unit addVest (selectRandom _MedicVest); 
	_WeaponPrimary = selectRandom _BasicPrimary; [_unit, (_WeaponPrimary select 0), 5, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
	_WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    }; 
	case "repair": //Engineer
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
	_WeaponPrimary = selectRandom _CompactPrimary; [_unit, (_WeaponPrimary select 0), 5, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
	_WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    };
	case "snipe": //Sniper
    { 
	//Todo primary and uniform.
	_WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    };
	case "spot": //Spotter
    { 
	//Todo uniform.
	_WeaponPrimary = selectRandom _CompactPrimary; [_unit, (_WeaponPrimary select 0), 5, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
	_WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    };
	case "pilot": //Heli Pilot Unit
    {
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	_WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
	//Todo, Other gear, Probably.
	};
	case "general": //Set General unit
    {
	removeAllWeapons _unit;
	_magazines = magazines _unit; 			//Tells the game the items the general needs to receive back is what he currently has. That is, nothing. 
	_items = items _unit;					//We don't want the general to have any items whatsoever.
	_assitems = assignedItems _unit;
	};
	case "mpilot": //Mission Crashed Pilot Unit
    {
	//Todo
	};
}; 

//readd the items we took from them.
{_unit addMagazine _x} forEach _magazines; 
{_unit additem _x} forEach _items; 
{_unit linkItem _x} forEach _assitems; 
_unit setvariable ["BLU_invset", true,true]  