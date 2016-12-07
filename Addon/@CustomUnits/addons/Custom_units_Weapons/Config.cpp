class DefaultEventhandlers;
class CfgPatches {
	class Custom_DUWS_Weapons {
		units[] = {};
		weapons[] = {
			"rhs_weap_svdp_wd_scoped",
			"hlc_rifle_aks74u_scoped",
			"hlc_rifle_M14_Rail_Oldscope",
			"rhs_weap_m14ebrri_sighted",
			"CUP_srifle_M14_DMR_sighted",
			"RH_Hk416_sighted",
			"RH_usp_suppressed",
			"rhs_weap_m4_pmag_Jayme",
			"rhs_weap_m4_carryhandle_sighted",
			"rhs_weap_m4_carryhandle_pmag_sighted",
			"rhs_weap_m16a4_carryhandle_sighted",
			"rhs_weap_m16a4_carryhandle_pmag_sighted",
			"hlc_m249_pip1_sighted",
			"RH_M27IAR_sighted",
			"rhs_weap_m240G_sighted",
			"hlc_smg_mp5a4_sighted",
			"hlc_rifle_m14sopmod_sighted",
			"CUP_srifle_M24_des_sighted",
			"RH_hb_b_sighted",
			"bg21_famas_FS_tan_sighted",
			"RH_hk416_des_sighted",
			"rhs_weap_hk416d145_m320_sighted"
			};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Weapons_F",
			"hlcweapons_core",
			"hlcweapons_aks",
			"hlcweapons_ar15",
			"hlcweapons_AUG",
			"hlcweapons_FHAWCovert",
			"hlcweapons_falpocalypse",
			"hlcweapons_g3",
			"hlcweapons_G36",
			"hlcweapons_m14",
			"hlcweapons_m60e4",
			"hlcweapons_mp5",
			"hlcweapons_SAW",
			"rhs_c_weapons",
			"rhsusf_c_weapons",
			"RH_m4_cfg",
			"bg21_famas_prplredux",
			"CUP_Weapons_AK",
			"CUP_Weapons_Saiga12k",
			"CUP_Weapons_CZ805",
			"CUP_Weapons_FNFAL",
			"CUP_Weapons_G36",
			"CUP_Weapons_L85",
			"CUP_weapons_L110",
			"CUP_Weapons_L129",
			"CUP_Weapons_MP5",
			"CUP_Weapons_M14",
			"CUP_Weapons_M14_DMR",
			"CUP_Weapons_M16",
			"CUP_Weapons_M240",
			"CUP_Weapons_M249",
			"CUP_Weapons_SCAR",
			"CUP_Weapons_XM8",
			"CUP_Weapons_GrenadeLaunchers"
			};
		version="1";
		projectName="Custom_DUWS_Weapons";
		author="TeorgeGakei";
	};
};

class CfgWeapons
{
class rhs_weap_svdp_wd;

	class rhs_weap_svdp_wd_scoped : rhs_weap_svdp_wd
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhs_acc_pso1m2";
			};
			
		};
	};
	
class hlc_rifle_aks74u;

	class hlc_rifle_aks74u_scoped : hlc_rifle_aks74u
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhs_acc_pso1m21";
			};
			
		};
	};
	
class hlc_rifle_M14_Rail;

	class hlc_rifle_M14_Rail_Oldscope : hlc_rifle_M14_Rail
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_KHS_old";
			};
			
		};
	};	
	
class rhs_weap_m14ebrri;

	class rhs_weap_m14ebrri_sighted : rhs_weap_m14ebrri
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "CUP_optic_LeupoldMk4_10x40_LRT_Woodland";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsBipod
			{
				slot = "BipodSlot";
				item = "bipod_03_F_blk";
			};
		};
	};		
	
class CUP_srifle_M14_DMR;

	class CUP_srifle_M14_DMR_sighted : CUP_srifle_M14_DMR
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_eotech_552";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "rhsusf_acc_eotech_552";
			};
			class LinkedItemsBipod
			{
				slot = "BipodSlot";
				item = "bipod_03_F_blk";
			};
		};
	};		

	class RH_Hk416;

	class RH_Hk416_sighted : RH_Hk416
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
			class LinkedItemsBipod
			{
				slot = "BipodSlot";
				item = "RH_TD_ACB_b";
			};
		};
	};	
	
class RH_usp;

	class RH_usp_suppressed : RH_usp
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "RH_gemtech45";
			};
		};
	};	
	
class rhs_weap_m4_pmag;

	class rhs_weap_m4_pmag_Jayme : rhs_weap_m4_pmag
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "FHQ_optic_AC12136";
			};
		};
	};	

class rhs_weap_m4_carryhandle;
	
	class rhs_weap_m4_carryhandle_sighted : rhs_weap_m4_carryhandle
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "RH_eotech553";
			};
		};
	};	
	
class rhs_weap_m4_carryhandle_pmag;

	class rhs_weap_m4_carryhandle_pmag_sighted : rhs_weap_m4_carryhandle_pmag
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "RH_eotech553";
			};
		};
	};	
	
class rhs_weap_m16a4_carryhandle;

	class rhs_weap_m16a4_carryhandle_sighted : rhs_weap_m16a4_carryhandle
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "RH_eotech553";
			};
		};
	};	
	
class rhs_weap_m16a4_carryhandle_pmag;

	class rhs_weap_m16a4_carryhandle_pmag_sighted : rhs_weap_m16a4_carryhandle_pmag
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "RH_eotech553";
			};
		};
	};	
	
class hlc_m249_pip1;

	class hlc_m249_pip1_sighted : hlc_m249_pip1
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "RH_eotech553";
			};
		};
	};
	
class RH_M27IAR;

	class RH_M27IAR_sighted : RH_M27IAR
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "RH_eotech553";
			};
		};
	};
	
class rhs_weap_m240G;

	class rhs_weap_m240G_sighted : rhs_weap_m240G
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "RH_eotech553";
			};
		};
	};
	
	class hlc_smg_mp5a4;
	class hlc_smg_mp5a4_sighted : hlc_smg_mp5a4
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "RH_eotech553";
			};
		};
	};
	
	class hlc_rifle_m14sopmod;
	class hlc_rifle_m14sopmod_sighted : hlc_rifle_m14sopmod
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "FHQ_optic_ACOG";
			};
			class LinkedItemsBipod
			{
				slot = "BipodSlot";
				item = "RH_TD_ACB_b";
			};
		};
	};	
	
	class CUP_srifle_M24_des;
	class CUP_srifle_M24_des_sighted : CUP_srifle_M24_des
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "FHQ_optic_LeupoldERT_tan";
			};
			class LinkedItemsBipod
			{
				slot = "BipodSlot";
				item = "bipod_02_F_tan";
			};
		};
	};	
	
	class RH_hb_b;
	class RH_hb_b_sighted : RH_hb_b
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "FHQ_optic_HWS";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "RH_hbsd";
			};
		};
	};	
	
	class bg21_famas_FS_tan;
	class bg21_famas_FS_tan_sighted : bg21_famas_FS_tan
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "asdg_OpticRail_Prpl_Famas";
				item = "CUP_optic_HoloDesert";
			};
		};
	};	
	
	class RH_hk416_des;
	class RH_hk416_des_sighted : RH_hk416_des
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "FHQ_optic_AIM_tan";
			};
		};
	};	
	class rhs_weap_hk416d145_m320;
	class rhs_weap_hk416d145_m320_sighted : rhs_weap_hk416d145_m320
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "RH_eotech553";
			};
		};
	};	
	class hlc_rifle_G36TAC;
	class hlc_rifle_G36TAC_sebby : hlc_rifle_G36TAC
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
			class LinkedItemsBipod
			{
				slot = "BipodSlot";
				item = "RH_TD_ACB_b";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "rhsusf_acc_SFMB556";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};	
};