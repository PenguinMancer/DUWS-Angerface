class CfgPatches {
	class Custom_DUWS_Blu {
		units[] = {
			"Blufor_AntiTank_1", 
			"Blufor_AntiTank_2", 
			"Blufor_AntiTank_3", 
			"Blufor_AntiTank_4", 
			"Blufor_Autorifleman_1", 
			"Blufor_Autorifleman_2", 
			"Blufor_Autorifleman_3", 
			"Blufor_Autorifleman_4", 
			"Blufor_Autorifleman_5",
			"Blufor_Autorifleman_6",
			"Blufor_Grenadier_1", 
			"Blufor_Grenadier_2", 
			"Blufor_Grenadier_3", 
			"Blufor_Light_AntiTank_1", 
			"Blufor_Light_AntiTank_2", 
			"Blufor_Light_AntiTank_3", 
			"Blufor_Light_AntiTank_4", 
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
			"Blufor_Medic_12", 
			"Blufor_Soldier_1", 
			"Blufor_Soldier_2", 
			"Blufor_Soldier_3", 
			"Blufor_Soldier_4", 
			"Blufor_Soldier_5",
			"Blufor_Soldier_6", 
			"Blufor_Soldier_7", 
			"Blufor_Soldier_8", 
			"Blufor_Soldier_9", 
			"Blufor_Soldier_10",
			"Blufor_Soldier_11",
			"Blufor_Soldier_12",
			"Blufor_TeamLeader_1", 
			"Blufor_TeamLeader_2", 
			"Blufor_TeamLeader_3", 
			"Blufor_TeamLeader_4",
			"Blufor_TeamLeader_5", 
			"Blufor_TeamLeader_6", 
			"Blufor_TeamLeader_7", 
			"Blufor_TeamLeader_8",
			"Blufor_TeamLeader_9", 
			"Blufor_TeamLeader_10", 
			"Blufor_TeamLeader_11", 
			"Blufor_TeamLeader_12",
			"Blufor_Recon_1", 
			"Blufor_Recon_Marksman_1", 
			"Blufor_Recon_LAT_1", 
			"Blufor_Recon_Exp_1", 
			"Blufor_Recon_Medic_1",
			"Blufor_Recon_JTAC_1", 
			"Blufor_Recon_TL_1", 
			"Blufor_General", 
			"Blufor_Pilot_Mission", 
			"Blufor_Ammobearer_1", 
			"Blufor_SquadLeader_1", 
			"Blufor_Assistant_Autorifleman_1",
			"Blufor_Assistant_AntiTank_1", 
			"Blufor_AntiAir_1", 
			"Blufor_Assistant_AntiAir_1", 
			"Blufor_Repair_1", 
			"Blufor_Marksman_1",
			"Blufor_Sniper_1",
			"Blufor_Spotter_1",
			"Blufor_Explosives_1", 
			"Blufor_Pilot_1", 
			"Blufor_Sebby_1", 
			"Blufor_Jayme_1", 
			"Blufor_Kevin_1",
			"Blufor_Hunter_1", 
			"Blufor_Jacob_1"
			};
		weapons[] = {
			"TFA_H_HelmetIA_TRI_Blu_Soldier",
			"rhsusf_mich_bare_norotos_arc_tan_Blu_Soldier",
			
			};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Data_F", 
			"A3_Characters_F", 
			"A3_Characters_F_BLUFOR", 
			"A3_Characters_F_OPFOR", 
			"A3_Characters_F_Civil", 
			"A3_Characters_F_INDEP", 
			"a3_characters_f_beta",
			"A3_Weapons_F",
			"rhsusf_c_weapons", 
			"rhsusf_c_troops", 
			"rhsusf_c_m1a1", 
			"rhsusf_c_m1a2", 
			"RHS_US_A2_AirImport", 
			"rhsusf_c_m109", 
			"rhsusf_c_hmmwv", 
			"rhsusf_c_rg33", 
			"rhsusf_c_fmtv", 
			"rhsusf_c_m113", 
			"RHS_US_A2Port_Armor",
			"tfa_units",
			"TRYK_Uniform",
			"US_ESS_Glasses_tryk",
			"Shemaghs",
			"Custom_DUWS_Core",
			"Custom_DUWS_Weapons",
			"cba_xeh"
			};
		version="1";
		projectName="Custom_DUWS_Blu";
		author="TeorgeGakei";
	};
};

#include "script_macros.hpp"
#include "script_config.hpp"

class CfgFunctions {
	class BLU {
		class BLUcommon {
			class BLUInitUnit {
				file = "\Custom_DUWS_Blu\scripts\InitBluUnit.sqf";
			};
		};
	};
};

class CfgVehicles {
		
		/*extern*/ class SoldierGB;

		class SoldierWB: SoldierGB {
		};
		
		class B_Soldier_base_F: SoldierWB {
		/*extern*/ class EventHandlers;
		};
		
		//Declaring the base soldier class
		class B_DUWS_base_F: B_Soldier_base_F {
		author = "Sabrina Penguin";
		expansion = 1;
		faceType = "Man_A3";
		side = 1;
		faction = "BLU_DUWS"; // Puts unit under new faction
		genericNames = "DUWS_Blu_Names";
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		editorSubcategory = "EdSubcat_Personnel";
		portrait = "";
		picture = "";
		icon = "iconMan";
		nakedUniform = "U_BasicBody";  // Do not change
		accuracy = 2.300000;
		camouflage = 1.400000;
		minFireTime = 7;
		cost = 100000;
		canCarryBackPack = 1;
		scope = 0;
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_packingBandage" , "ACE_packingBandage", "ACE_morphine", "ACE_morphine", "ACE_atropine", "ACE_epinephrine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_packingBandage" , "ACE_packingBandage", "ACE_morphine", "ACE_morphine", "ACE_atropine", "ACE_epinephrine"};
		};
		
		//Randomized Units
		#include "Blu_Antitank.hpp"
		#include "Blu_Autorifleman.hpp"
		#include "Blu_Grenadier.hpp"
		#include "Blu_Light_AntiTank.hpp"
		#include "Blu_Medic.hpp"
		#include "Blu_soldiers.hpp"
		#include "Blu_TeamLeader.hpp"
		//All units done before here

		//Group Units
		#include "Blu_recon.hpp"
		
		//Players
		#include "Blu_Players.hpp"
		
		//Blufor General
		
		class Blufor_General : B_DUWS_base_F  {
		scope = 2;
		displayName = "General Toutain"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		genericNames = "DUWS_General_Name";
		uniformClass = "CUP_U_B_USMC_FROG1_DMARPAT";  // Uniform Class
		backpack = ""; // Backpack Class
		linkedItems[] = {"H_Bandanna_sgg", "CUP_V_B_MTV_noCB", "G_Aviator"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"H_Bandanna_sgg", "CUP_V_B_MTV_noCB", "G_Aviator"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {}; // Weapons added to the unit.
		respawnweapons[] = {}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {}; //Magazines added to the unit.
		Respawnmagazines[] = {}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Pilot (only used in rescue mission)
		
		class Blufor_Pilot_Mission : B_DUWS_base_F  {
		scope = 2;
		displayName = "Hawk"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		genericNames = "DUWS_Pilot_Name";
		uniformClass = "TRYK_U_B_AOR2_OD_CombatUniform";  // Uniform Class
		backpack = "B_Parachute"; // Backpack Class
		linkedItems[] = {"rhs_tsh4", "G_Aviator", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhs_tsh4", "G_Aviator", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hgun_PDW2000_F", "RH_fn57", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hgun_PDW2000_F", "RH_fn57", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		};
		
		//Blufor Ammo Bearer
		
		class Blufor_Ammobearer_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French AmmoBearer"; // In-game name of unit
		uniformClass = "Niko_USA_DCUTan";  // Uniform Class
		backpack = "VSM_OGA_carryall"; // Backpack Class
		linkedItems[] = {"lbt_operator_coy", "TFA_H_HelmetIA_TRI", "LBG_Shemagh_Tan", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_operator_coy", "TFA_H_HelmetIA_TRI", "LBG_Shemagh_Tan", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"bg21_famas_FS_tan_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"bg21_famas_FS_tan_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {Famas_Mags_Blu, M416_Mags_Blu, Standard_Grenades_Blu, M9_Mags_Blu, "hlc_200rnd_556x45_M_SAW"}; //Magazines added to the unit.
		Respawnmagazines[] = {Famas_Mags_Blu, M416_Mags_Blu, Standard_Grenades_Blu, M9_Mags_Blu, "hlc_200rnd_556x45_M_SAW"}; //Magazines added to the unit upon respawn, should be the same as above.
		};

		//Blufor Squad Leader
		
		class Blufor_SquadLeader_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French Squad Leader"; // In-game name of unit
		uniformClass = "Niko_USA_DCUTan";  // Uniform Class
		backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
		linkedItems[] = {"lbt_tl_coy", "SP_Beret_Tan", "LBG_Shemagh_Tan", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_tl_coy", "SP_Beret_Tan", "LBG_Shemagh_Tan", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"CUP_arifle_Mk16_STD_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"CUP_arifle_Mk16_STD_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {M416_Mags_Blu, Standard_Grenades_Blu, M9_Mags_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {M416_Mags_Blu, Standard_Grenades_Blu, M9_Mags_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		};

		//Blufor Assistant Autorifleman
		
		class Blufor_Assistant_Autorifleman_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French Assistant Autorifleman"; // In-game name of unit
		uniformClass = "Niko_USA_DCUTan";  // Uniform Class
		backpack = "VSM_OGA_carryall"; // Backpack Class
		linkedItems[] = {"lbt_light_coy", "TFA_H_HelmetIA_TRI", "LBG_Shemagh_Tan", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_light_coy", "TFA_H_HelmetIA_TRI", "LBG_Shemagh_Tan", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"bg21_famas_FS_tan_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"bg21_famas_FS_tan_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {Famas_Mags_Blu, Standard_Grenades_Blu, M9_Mags_Blu, "hlc_200rnd_556x45_M_SAW", "hlc_200rnd_556x45_M_SAW"}; //Magazines added to the unit.
		Respawnmagazines[] = {Famas_Mags_Blu, Standard_Grenades_Blu, M9_Mags_Blu, "hlc_200rnd_556x45_M_SAW", "hlc_200rnd_556x45_M_SAW"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Assistant Missile Specialist (AT)
		
		class Blufor_Assistant_AntiTank_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French Asst. Missile Specialist"; // In-game name of unit
		uniformClass = "Niko_USA_DCUTan";  // Uniform Class
		backpack = "VSM_OGA_carryall"; // Backpack Class
		linkedItems[] = {"lbt_light_coy", "TFA_H_HelmetIA_TRI", "LBG_Shemagh_Tan", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_light_coy", "TFA_H_HelmetIA_TRI", "LBG_Shemagh_Tan", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"bg21_famas_FS_tan_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"bg21_famas_FS_tan_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {Famas_Mags_Blu, Standard_Grenades_Blu, M9_Mags_Blu, "CUP_Javelin_M"}; //Magazines added to the unit.
		Respawnmagazines[] = {Famas_Mags_Blu, Standard_Grenades_Blu, M9_Mags_Blu, "CUP_Javelin_M"}; //Magazines added to the unit upon respawn, should be the same as above.
		};

		//Blufor Missile Specialist (AA)
		
		class Blufor_AntiAir_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French Missile Specialist (AA)"; // In-game name of unit
		uniformClass = "Niko_USA_DCUTan";  // Uniform Class
		backpack = "VSM_OGA_carryall"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_coyo", "TRYK_H_woolhat_tan", "rhs_googles_black", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_coyo", "TRYK_H_woolhat_tan", "rhs_googles_black", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"bg21_famas_FS_tan_sighted", "CUP_launch_Javelin", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"bg21_famas_FS_tan_sighted", "CUP_launch_Javelin", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {Famas_Mags_Blu, Standard_Grenades_Blu, "CUP_Javelin_M"}; //Magazines added to the unit.
		Respawnmagazines[] = {Famas_Mags_Blu, Standard_Grenades_Blu, "CUP_Javelin_M"}; //Magazines added to the unit upon respawn, should be the same as above.	
		};
		
		//Blufor Assistant Missile Specialist (AA)
		
		class Blufor_Assistant_AntiAir_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French Asst. Missile Specialist (AA)"; // In-game name of unit
		uniformClass = "Niko_USA_DCUTan";  // Uniform Class
		backpack = "VSM_OGA_carryall"; // Backpack Class
		linkedItems[] = {"lbt_light_coy", "TFA_H_HelmetIA_TRI", "LBG_Shemagh_Tan", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_light_coy", "TFA_H_HelmetIA_TRI", "LBG_Shemagh_Tan", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"bg21_famas_FS_tan_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"bg21_famas_FS_tan_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {Famas_Mags_Blu, Standard_Grenades_Blu, M9_Mags_Blu, "CUP_Javelin_M"}; //Magazines added to the unit.
		Respawnmagazines[] = {Famas_Mags_Blu, Standard_Grenades_Blu, M9_Mags_Blu, "CUP_Javelin_M"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Repair Specialist
		
		class Blufor_Repair_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French Repair Specialist"; // In-game name of unit
		uniformClass = "Niko_USA_DCUTan";  // Uniform Class
		backpack = "VSM_OGA_carryall"; // Backpack Class
		linkedItems[] = {"lbt_light_coy", "TFA_H_HelmetIA_TRI", "LBG_Shemagh_Tan", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_light_coy", "TFA_H_HelmetIA_TRI", "LBG_Shemagh_Tan", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"SMG_03C_khaki", "RH_m9", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"SMG_03C_khaki", "RH_m9", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", Standard_Grenades_Blu, M9_Mags_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {"50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", "50Rnd_570x28_SMG_03", Standard_Grenades_Blu, M9_Mags_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_EntrenchingTool", "ACE_DefusalKit", "MineDetector", "ToolKit", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_packingBandage", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot" , "ACE_packingBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_morphine", "ACE_atropine", "ACE_epinephrine"};
		respawnItems[] = {"ACE_EntrenchingTool", "ACE_DefusalKit", "MineDetector", "ToolKit", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_packingBandage", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot" , "ACE_packingBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_morphine", "ACE_atropine", "ACE_epinephrine"};
		};
		
		//Blufor Marksman
		
		class Blufor_Marksman_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French Marksman"; // In-game name of unit
		uniformClass = "Niko_USA_DCUTan";  // Uniform Class
		backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
		linkedItems[] = {"lbt_light_coy", "TFA_H_HelmetIA_TRI", "LBG_Shemagh_Tan", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_light_coy", "TFA_H_HelmetIA_TRI", "LBG_Shemagh_Tan", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_psg1", "RH_m9", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_psg1", "RH_m9", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3", Standard_Grenades_Blu, M9_Mags_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3", Standard_Grenades_Blu, M9_Mags_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Sniper
		
		class Blufor_Sniper_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French Sniper"; // In-game name of unit
		uniformClass = "CUP_U_O_TK_Ghillie_Top";  // Uniform Class
		backpack = "VSM_OGA_Backpack_Kitbag"; // Backpack Class
		linkedItems[] = {"lbt_light_aor1", "TRYK_H_TACEARMUFF_H", "LBG_Shemagh_Tan", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_light_aor1", "TRYK_H_TACEARMUFF_H", "LBG_Shemagh_Tan", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_psg1", "RH_m9", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_psg1", "RH_m9", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3", Standard_Grenades_Blu, M9_Mags_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3", Standard_Grenades_Blu, M9_Mags_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		}
		
		//Blufor Spotter
		
		class Blufor_Spotter_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French Spotter"; // In-game name of unit
		uniformClass = "CUP_U_O_TK_Ghillie_Top";  // Uniform Class
		backpack = "VSM_OGA_Backpack_Kitbag"; // Backpack Class
		linkedItems[] = {"lbt_light_aor1", "TRYK_H_TACEARMUFF_H", "LBG_Shemagh_Tan", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_light_aor1", "TRYK_H_TACEARMUFF_H", "LBG_Shemagh_Tan", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_smg_mp5a4_sighted", "RH_m9", "Rangefinder", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_smg_mp5a4_sighted", "RH_m9", "Rangefinder", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", Standard_Grenades_Blu, M9_Mags_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", Standard_Grenades_Blu, M9_Mags_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		}
		
		//Blufor Explosive Specialist
		
		class Blufor_Explosives_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French Explosive Specialist"; // In-game name of unit
		uniformClass = "Niko_USA_DCUTan";  // Uniform Class
		backpack = "VSM_OGA_carryall"; // Backpack Class
		linkedItems[] = {"lbt_weapons_mc", "rhsusf_mich_bare_norotos_arc_tan", "rhs_googles_clear", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_weapons_mc", "rhsusf_mich_bare_norotos_arc_tan", "rhs_googles_clear", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_smg_mp5a4_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_smg_mp5a4_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", Standard_Grenades_Blu, M9_Mags_Blu, "CUP_PipeBomb_M", "CUP_PipeBomb_M", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", Standard_Grenades_Blu, M9_Mags_Blu, "CUP_PipeBomb_M", "CUP_PipeBomb_M", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_wirecutter", "ACE_DefusalKit", "ACE_Clacker", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_packingBandage", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot" , "ACE_packingBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_morphine", "ACE_atropine", "ACE_epinephrine"};
		respawnItems[] = {"ACE_wirecutter", "ACE_DefusalKit", "ACE_Clacker", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_packingBandage", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot" , "ACE_packingBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_morphine", "ACE_atropine", "ACE_epinephrine"};
		};
		
		//Blufor Helo Pilot
		
		class Blufor_Pilot_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French Helo Pilot"; // In-game name of unit
		uniformClass = "Niko_USA_DCUTan";  // Uniform Class
		backpack = "B_Parachute"; // Backpack Class
		linkedItems[] = {"lbt_pouchless_coy", "TRYK_H_TACEARMUFF_H", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_pouchless_coy", "TRYK_H_TACEARMUFF_H", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"RH_m9", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_m9", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {M9_Mags_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {M9_Mags_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		};
		
		//Blufor Vehicles
		
		class rhsusf_m1025_d;
		class rhsusf_m1025_d_DUWS : rhsusf_m1025_d {
		crew = "Blufor_Soldier_1";
		typicalCargo[] = {"Blufor_Soldier_1"};
		unloadInCombat = true;
		};
		
		class rhsusf_m1025_d_m2;
		class rhsusf_m1025_d_m2_DUWS : rhsusf_m1025_d_m2 {
		crew = "Blufor_Soldier_1";
		typicalCargo[] = {"Blufor_Soldier_1"};
		unloadInCombat = false;
		};
		
		class CUP_B_M1128_MGS_Desert;
		class CUP_B_M1128_MGS_Desert_DUWS : CUP_B_M1128_MGS_Desert {
		crew = "Blufor_Soldier_1";
		typicalCargo[] = {"Blufor_Soldier_1"};
		unloadInCombat = false;
		};
		
		class CUP_B_Ridgback_HMG_GB_D;
		class CUP_B_Ridgback_HMG_GB_D_DUWS : CUP_B_Ridgback_HMG_GB_D {
		crew = "Blufor_Soldier_1";
		typicalCargo[] = {"Blufor_Soldier_1"};
		unloadInCombat = false;
		};
		
		class CUP_B_FV432_Bulldog_GB_D_RWS;
		class CUP_B_FV432_Bulldog_GB_D_RWS_DUWS : CUP_B_FV432_Bulldog_GB_D_RWS {
		crew = "Blufor_Soldier_1";
		typicalCargo[] = {"Blufor_Soldier_1"};
		unloadInCombat = false;
		};
		
		class CUP_B_M1A1_DES_USMC;
		class CUP_B_M1A1_DES_USMC_DUWS : CUP_B_M1A1_DES_USMC {
		crew = "Blufor_Soldier_1";
		typicalCargo[] = {"Blufor_Soldier_1"};
		unloadInCombat = false;
		};
		
		class RHS_M2A3_BUSKIII;
		class RHS_M2A3_BUSKIII_DUWS : RHS_M2A3_BUSKIII {
		crew = "Blufor_Soldier_1";
		typicalCargo[] = {"Blufor_Soldier_1"};
		unloadInCombat = false;
		};
};

class Extended_Init_Eventhandlers {
	#include "Extendedinit.hpp"
};