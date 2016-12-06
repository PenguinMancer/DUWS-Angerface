_facewear = [
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

_headgear = [
"TFA_H_HelmetIA_TRI",
"rhsusf_mich_bare_norotos_arc_tan",
"H_HelmetB_light_sand",
"TRYK_H_woolhat_tan",
"TRYK_r_cap_tan_Glasses"
];

_facechosen = _facewear call BIS_fnc_selectRandom;
_headchosen = _headgear call BIS_fnc_selectRandom;

Removeheadgear _this;
removeGoggles _this;

_this addGoggles _facechosen;
_this addheadgear _headchosen;