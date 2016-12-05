class DefaultEventhandlers;
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
			"Blufor_Soldier_13", 
			"Blufor_Soldier_14", 
			"Blufor_Soldier_15", 
			"Blufor_Soldier_16", 
			"Blufor_Soldier_17",
			"Blufor_Soldier_18", 
			"Blufor_Soldier_19", 
			"Blufor_Soldier_20", 
			"Blufor_Soldier_21", 
			"Blufor_Soldier_22",
			"Blufor_Soldier_23",
			"Blufor_Soldier_24",
			"Blufor_TeamLeader_1", 
			"Blufor_TeamLeader_2", 
			"Blufor_TeamLeader_3", 
			"Blufor_TeamLeader_4",
			"Blufor_Diver_1", 
			"Blufor_Diver_exp_1", 
			"Blufor_Diver_Teamleader_1", 
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
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Data_F", 
			"A3_Characters_F", 
			"A3_Characters_F_BLUFOR", 
			"A3_Characters_F_OPFOR", 
			"A3_Characters_F_Civil", 
			"A3_Characters_F_INDEP", 
			"a3_characters_f_beta",
			"Custom_DUWS_Core",
			"Custom_DUWS_Weapons"
			};
		version="1";
		projectName="Custom_DUWS_Blu";
		author="TeorgeGakei";
	};
};

#include "script_macros.hpp"
#include "script_config.hpp"

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
		_generalMacro = "B_DUWS_base_F";
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
		#include "Blu_Light_AntiTank.hpp"//This and the following on had to be swapped because I accidentally made something in the grenadier units depend on one of these units. Fix that later.
		#include "Blu_Grenadier.hpp"
		#include "Blu_Medic.hpp"
		#include "Blu_soldiers.hpp"
		#include "Blu_TeamLeader.hpp"
		
		//Group Units
		#include "Blu_divers.hpp"
		#include "Blu_recon.hpp"
		
		//Players
		#include "Blu_Players.hpp"
		
		
		
		//Blufor General
		
		class Blufor_General : B_DUWS_base_F  {
		_generalMacro = "Blufor_General"; 
		scope = 2;
		displayName = "General Moreau"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		genericNames = "DUWS_General_Name";
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = ""; // Backpack Class
		linkedItems[] = {"SP_Beret2_Green", "TRYK_V_PlateCarrier_ACU", "G_Aviator"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_Beret2_Green", "TRYK_V_PlateCarrier_ACU", "G_Aviator"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {}; // Weapons added to the unit.
		respawnweapons[] = {}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {}; //Magazines added to the unit.
		Respawnmagazines[] = {}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Pilot (only used in rescue mission)
		
		class Blufor_Pilot_Mission : B_DUWS_base_F  {
		_generalMacro = "Blufor_Pilot_Mission"; 
		scope = 2;
		displayName = "Hawk"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		genericNames = "DUWS_Pilot_Name";
		uniformClass = "TRYK_U_B_AOR2_OD_CombatUniform";  // Uniform Class
		backpack = "B_Parachute"; // Backpack Class
		linkedItems[] = {"rhs_tsh4", "G_Aviator", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhs_tsh4", "G_Aviator", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hgun_PDW2000_F", "RH_fn57"}; // Weapons added to the unit.
		respawnweapons[] = {"hgun_PDW2000_F", "RH_fn57"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		};
		
		//Blufor Ammo Bearer
		
		class Blufor_Ammobearer_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Ammobearer_1"; 
		scope = 2;
		displayName = "Marine AmmoBearer"; // In-game name of unit
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "hlc_200rnd_556x45_M_SAW", "hlc_200rnd_556x45_M_SAW"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "hlc_200rnd_556x45_M_SAW", "hlc_200rnd_556x45_M_SAW"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Squad Leader
		
		class Blufor_SquadLeader_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_SquadLeader_1"; 
		scope = 2;
		displayName = "Marine Squad Leader"; // In-game name of unit
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "SP_Beret4_Green", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "SP_Beret4_Green", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Assistant Autorifleman
		
		class Blufor_Assistant_Autorifleman_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Assistant_Autorifleman_1"; 
		scope = 2;
		displayName = "Marine Assistant Autorifleman"; // In-game name of unit
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "hlc_200rnd_556x45_M_SAW", "hlc_200rnd_556x45_M_SAW"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "hlc_200rnd_556x45_M_SAW", "hlc_200rnd_556x45_M_SAW"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Assistant Missile Specialist (AT)
		
		class Blufor_Assistant_AntiTank_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Assistant_AntiTank_1"; 
		scope = 2;
		displayName = "Marine Asst. Missile Specialist"; // In-game name of unit
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "rhs_mag_smaw_HEAA", "rhs_mag_smaw_HEAA"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "rhs_mag_smaw_HEAA", "rhs_mag_smaw_HEAA"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Missile Specialist (AA)
		
		class Blufor_AntiAir_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_AntiAir_1"; 
		scope = 2;
		displayName = "Marine Missile Specialist (AA)"; // In-game name of unit
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9", "rhs_weap_fim92"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9", "rhs_weap_fim92"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "rhs_fim92_mag", "rhs_fim92_mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "rhs_fim92_mag", "rhs_fim92_mag"}; //Magazines added to the unit upon respawn, should be the same as above.	
		};
		
		//Blufor Assistant Missile Specialist (AA)
		
		class Blufor_Assistant_AntiAir_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Assistant_AntiAir_1"; 
		scope = 2;
		displayName = "Marine Asst. Missile Specialist (AA)"; // In-game name of unit
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "rhs_fim92_mag", "rhs_fim92_mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "rhs_fim92_mag", "rhs_fim92_mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Repair Specialist
		
		class Blufor_Repair_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Repair_1"; 
		scope = 2;
		displayName = "Marine Repair Specialist"; // In-game name of unit
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_smg_mp5a4_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_smg_mp5a4_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_EntrenchingTool", "ACE_DefusalKit", "MineDetector", "ToolKit", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_packingBandage", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot" , "ACE_packingBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_morphine", "ACE_atropine", "ACE_epinephrine"};
		respawnItems[] = {"ACE_EntrenchingTool", "ACE_DefusalKit", "MineDetector", "ToolKit", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_packingBandage", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot" , "ACE_packingBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_morphine", "ACE_atropine", "ACE_epinephrine"};
		};
		
		//Blufor Marksman
		
		class Blufor_Marksman_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Marksman_1"; 
		scope = 2;
		displayName = "Marine Marksman"; // In-game name of unit
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_m14sopmod_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_m14sopmod_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"CUP_20Rnd_762x51_DMR", "CUP_20Rnd_762x51_DMR", "CUP_20Rnd_762x51_DMR", "CUP_20Rnd_762x51_DMR", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit.
		Respawnmagazines[] = {"CUP_20Rnd_762x51_DMR", "CUP_20Rnd_762x51_DMR", "CUP_20Rnd_762x51_DMR", "CUP_20Rnd_762x51_DMR", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Sniper
		
		class Blufor_Sniper_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Sniper_1"; 
		scope = 2;
		displayName = "Marine Sniper"; // In-game name of unit
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "TRYK_R_CAP_OD_US", "G_Shades_Blue", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "TRYK_R_CAP_OD_US", "G_Shades_Blue", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"CUP_srifle_M24_des_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"CUP_srifle_M24_des_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"CUP_5Rnd_762x51_M24", "CUP_5Rnd_762x51_M24", "CUP_5Rnd_762x51_M24", "CUP_5Rnd_762x51_M24", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit.
		Respawnmagazines[] = {"CUP_5Rnd_762x51_M24", "CUP_5Rnd_762x51_M24", "CUP_5Rnd_762x51_M24", "CUP_5Rnd_762x51_M24", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit upon respawn, should be the same as above.
		}
		
		//Blufor Spotter
		
		class Blufor_Spotter_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Spotter_1"; 
		scope = 2;
		displayName = "Marine Spotter"; // In-game name of unit
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "TRYK_r_cap_blk_Glasses", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "TRYK_r_cap_blk_Glasses", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"RH_hb_b_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_hb_b_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"RH_30Rnd_762x35_FMJ", "RH_30Rnd_762x35_FMJ", "RH_30Rnd_762x35_FMJ", "RH_30Rnd_762x35_FMJ", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit.
		Respawnmagazines[] = {"RH_30Rnd_762x35_FMJ", "RH_30Rnd_762x35_FMJ", "RH_30Rnd_762x35_FMJ", "RH_30Rnd_762x35_FMJ", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit upon respawn, should be the same as above.
		}
		
		//Blufor Explosive Specialist
		
		class Blufor_Explosives_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Explosives_1"; 
		scope = 2;
		displayName = "Marine Explosive Specialist"; // In-game name of unit
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_smg_mp5a4_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_smg_mp5a4_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "CUP_PipeBomb_M", "CUP_PipeBomb_M", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", Standard_Grenades_Blu, "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "CUP_PipeBomb_M", "CUP_PipeBomb_M", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_wirecutter", "ACE_DefusalKit", "ACE_Clacker", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_packingBandage", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot" , "ACE_packingBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_morphine", "ACE_atropine", "ACE_epinephrine"};
		respawnItems[] = {"ACE_wirecutter", "ACE_DefusalKit", "ACE_Clacker", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_packingBandage", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot" , "ACE_packingBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_morphine", "ACE_atropine", "ACE_epinephrine"};
		};
		
		//Blufor Helo Pilot
		
		class Blufor_Pilot_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Pilot_1"; 
		scope = 2;
		displayName = "Marine Helo Pilot"; // In-game name of unit
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "B_Parachute"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "TRYK_H_TACEARMUFF_H", Standard_Equipment_Blu}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "TRYK_H_TACEARMUFF_H", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit.
		Respawnmagazines[] = {"RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		};
		
		//Blufor Vehicles
		
		/*extern*/ class CUP_B_MCV80_GB_D_SLAT;
		
		class CUP_B_MCV80_GB_D_SLAT_custom : CUP_B_MCV80_GB_D_SLAT {
		crew = "Blufor_Soldier_1";
		};
		
		/*extern*/ class RHS_M2A2_BUSKI;
		
		class RHS_M2A2_BUSKI_custom : RHS_M2A2_BUSKI {
		crew = "Blufor_Soldier_1";
		};
		
		/*extern*/ class CUP_B_HMMWV_M2_GPK_USA;
		
		class CUP_B_HMMWV_M2_GPK_USA_custom : CUP_B_HMMWV_M2_GPK_USA {
		crew = "Blufor_Soldier_1";
		};
		
		/*extern*/ class rhsusf_m1a2sep1tuskid_usarmy;
		
		class rhsusf_m1a2sep1tuskid_usarmy_custom : rhsusf_m1a2sep1tuskid_usarmy {
		crew = "Blufor_Soldier_1";
		};
		
		/*extern*/ class I_mas_cars_LR_soft_Stinger;
		
		class I_mas_cars_LR_soft_Stinger_custom : I_mas_cars_LR_soft_Stinger {
		crew = "Blufor_Soldier_1";
		};
};