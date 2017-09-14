class CfgPatches {
	class Custom_DUWS_Blu {
		units[] = {
			"Blufor_AntiTank_1",
			"Blufor_Autorifleman_1",
			"Blufor_Grenadier_1",
			"Blufor_Light_AntiTank_1",
			"Blufor_Medic_1",
			"Blufor_Soldier_1",
			"Blufor_TeamLeader_1",
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
			"Blufor_Penguin_1", 
			"Blufor_Fox_1", 
			"Blufor_Wolf_1",
			"Blufor_Crow_1", 
			"Blufor_Tarrasque_1"
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
			class InitBluUnit {
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
		#include "Blu_Soldiers.hpp"
		#include "Blu_TeamLeader.hpp"
		//Single Use Units (Randomized)
		#include "Blu_Singleuse.hpp"
		//Mission Units. These units are 100% consistent in look and loadout.
		#include "Blu_Mission.hpp"
		
		//Recon units, only used in certain player request groups. Honestly debating if these guys are worth updating? They feel a bit redundant.
		#include "Blu_recon.hpp"
		
		//Players
		#include "Blu_Players.hpp"

		//Blufor Vehicles
		#include "Blu_Vehicles.hpp"
};

//Groups
#include "Groups_Blu.hpp"

class Extended_Init_Eventhandlers {
	#include "Extendedinit.hpp"
};