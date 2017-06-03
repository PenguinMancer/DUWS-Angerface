_Uniforms = [
"Niko_USA_R_DCUTan",
"Niko_USA_R_DCU",
"Niko_USA_DCUTan",
"Niko_USA_DCU"
];

_soldiervest = [
"lbt_light_coy",
"lbt_operator_coy",
"lbt_fast_coy",
"lbt_pouchless_coy"
];

_ATvest = [
"TRYK_V_PlateCarrier_coyo",
"TRYK_V_PlateCarrier_coyo_L",
"TAC_V_Sheriff_BA_TCL7",
"rhsusf_iotv_ocp_Grenadier"
];

_ARvest = [
"lbt_operator_coy",
"lbt_operator_mc",
"TRYK_V_ArmorVest_cbr2",
"TAC_V_tacv1L_CY"
];

_GrenadierVest = [
"lbt_weapons_mc",
"lbt_weapons_coy",
"CUP_V_B_Eagle_SPC_GL",
"CUP_V_BAF_Osprey_Mk2_DDPM_Grenadier"
];

_MedicVest = [
"CUP_V_BAF_Osprey_Mk2_DDPM_Medic",
"lbt_medical_mc",
"lbt_medical_coy"
];

_LeaderVest = [
"lbt_tl_coy",
"lbt_tl_mc",
"rhsusf_iotv_ocp_Squadleader"
];

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
];

_soldierheadgear = [
"CUP_H_USMC_LWH_DES",
"rhsusf_mich_bare_norotos_arc_tan",
"H_HelmetB_light_sand",
"TRYK_H_woolhat_tan",
"TRYK_r_cap_tan_Glasses"
];

_leaderheadgear = [
"TRYK_H_Booniehat_MARPAT_Desert",
"SP_Beret_Tan"
];

//strip units of items that would be inside the vests and backpacks we're about to remove
_magazines = magazines _unit; 
_items = items _unit; // Medkits, ToolKits etc. 
_assitems = assignedItems _unit; // NVG's, GPS etc. 

{_unit removemagazine _x} foreach _magazines; 
removeAllItems _unit;     

//figure out type of unit, then add appropriate gear
switch (_typeofUnit) do 
{
    case "basic": 
    { 
	removeUniform _unit; _unit forceAddUniform (_Uniforms call BIS_fnc_selectRandom); 
	removeGoggles _unit; _unit addGoggles (_soldierfacewear call BIS_fnc_selectRandom); 
    removeHeadgear _unit; _unit addHeadgear (_soldierheadgear call BIS_fnc_selectRandom); 
    removeVest _unit; _unit addVest (_soldiervest call BIS_fnc_selectRandom); 
    }; 
	case "at": 
    { 
	removeUniform _unit; _unit forceAddUniform (_Uniforms call BIS_fnc_selectRandom); 
	removeGoggles _unit; _unit addGoggles (_soldierfacewear call BIS_fnc_selectRandom); 
    removeHeadgear _unit; _unit addHeadgear (_soldierheadgear call BIS_fnc_selectRandom); 
    removeVest _unit; _unit addVest (_ATvest call BIS_fnc_selectRandom); 
    }; 
	case "ar": 
    { 
	removeUniform _unit; _unit forceAddUniform (_Uniforms call BIS_fnc_selectRandom); 
	removeGoggles _unit; _unit addGoggles (_soldierfacewear call BIS_fnc_selectRandom); 
    removeHeadgear _unit; _unit addHeadgear (_soldierheadgear call BIS_fnc_selectRandom); 
    removeVest _unit; _unit addVest (_ARvest call BIS_fnc_selectRandom); 
    }; 
	case "grenadier": 
    { 
	removeUniform _unit; _unit forceAddUniform (_Uniforms call BIS_fnc_selectRandom); 
	removeGoggles _unit; _unit addGoggles (_soldierfacewear call BIS_fnc_selectRandom); 
    removeHeadgear _unit; _unit addHeadgear (_soldierheadgear call BIS_fnc_selectRandom); 
    removeVest _unit; _unit addVest (_GrenadierVest call BIS_fnc_selectRandom); 
    }; 
	case "medic": 
    { 
	removeUniform _unit; _unit forceAddUniform (_Uniforms call BIS_fnc_selectRandom); 
	removeGoggles _unit; _unit addGoggles (_soldierfacewear call BIS_fnc_selectRandom); 
    removeHeadgear _unit; _unit addHeadgear (_soldierheadgear call BIS_fnc_selectRandom); 
    removeVest _unit; _unit addVest (_MedicVest call BIS_fnc_selectRandom); 
    }; 
	case "Leader": 
    { 
	removeUniform _unit; _unit forceAddUniform (_Uniforms call BIS_fnc_selectRandom); 
	removeGoggles _unit; _unit addGoggles (_soldierfacewear call BIS_fnc_selectRandom); 
    removeHeadgear _unit; _unit addHeadgear (_leaderheadgear call BIS_fnc_selectRandom); 
    removeVest _unit; _unit addVest (_LeaderVest call BIS_fnc_selectRandom); 
    }; 
	case "general": 
    {
	removeAllWeapons _unit;
	_magazines = magazines _unit; 
	_items = items _unit; // Medkits, ToolKits etc. 
	_assitems = assignedItems _unit; // NVG's, GPS etc.  //We don't want the general to have any items whatsoever.
	};
	case "pilot": 
    {};
}; 

//readd the items we took from them.
{_unit addMagazine _x} forEach _magazines; 
{_unit additem _x} forEach _items; 
{_unit linkItem _x} forEach _assitems; 
_unit setvariable ["BLU_invset", true,true]  