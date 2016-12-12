class CfgPatches {
	class Custom_DUWS_Opf {
		units[] = {
			"Opfor_AntiAir_1",
			"Opfor_AntiAir_2",
			"Opfor_AntiAir_3",
			"Opfor_AntiAir_4",
			"Opfor_AntiAir_5",
			"Opfor_AntiAir_6",
			"Opfor_AntiTank_1",
			"Opfor_AntiTank_2",
			"Opfor_AntiTank_3",
			"Opfor_AntiTank_4",
			"Opfor_AntiTank_5",
			"Opfor_AntiTank_6",
			"Opfor_Autorifleman_1",
			"Opfor_Autorifleman_2",
			"Opfor_Autorifleman_3",
			"Opfor_Autorifleman_4",
			"Opfor_Grenadier_1",
			"Opfor_Grenadier_2",
			"Opfor_Light_AntiTank_1",
			"Opfor_Light_AntiTank_2",
			"Opfor_Marksman_1",
			"Opfor_Marksman_2",
			"Opfor_Marksman_3",
			"Opfor_Marksman_4",
			"Opfor_Soldier_1",
			"Opfor_Soldier_2",
			"Opfor_Soldier_3",
			"Opfor_Soldier_4",
			"Opfor_Soldier_5",
			"Opfor_Soldier_6",
			"Opfor_Soldier_7",
			"Opfor_Soldier_8",
			"Opfor_Soldier_9",
			"Opfor_Soldier_10",
			"Opfor_Soldier_11",
			"Opfor_Soldier_12",
			"Opfor_SquadLeader_1",
			"Opfor_SquadLeader_2",
			"Opfor_SquadLeader_3",
			"Opfor_SquadLeader_4",
			"Opfor_SquadLeader_5",
			"Opfor_SquadLeader_6",
			"Opfor_SquadLeader_7",
			"Opfor_SquadLeader_8",
			"Opfor_SquadLeader_9",
			"Opfor_SquadLeader_10",
			"Opfor_TeamLeader_1",
			"Opfor_TeamLeader_2",
			"Opfor_TeamLeader_3",
			"Opfor_TeamLeader_4",
			"Opfor_TeamLeader_5",
			"Opfor_TeamLeader_6",
			"Opfor_TeamLeader_7",
			"Opfor_TeamLeader_8",
			"Opfor_TeamLeader_9",
			"Opfor_TeamLeader_10",
			"Opfor_Ammoholder_1",
			"Opfor_Medic_1",
			"Opfor_Assistant_AntiTank_1"
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
			"tfa_units",
			"TRYK_Uniform",
			"US_ESS_Glasses_tryk",
			"Shemaghs",
			"Custom_DUWS_Core",
			"Custom_DUWS_Weapons",
			"cba_xeh"
			};
		version="1";
		projectName="Custom_DUWS_Opf";
		author="TeorgeGakei";
	};
};

#include "script_macros.hpp"
#include "script_config.hpp"

class CfgFunctions {
	class OPF {
		class OPFcommon {
			class OPFInitUnit {
				file = "\Custom_DUWS_Opf\scripts\InitOpfUnit.sqf";
			};
		};
	};
};

class CfgVehicles {
		/*extern*/ class SoldierEB;

		class O_Soldier_base_F: SoldierEB {
		};
		
		//Declaring the base soldier class
		class O_DUWS_base_F: O_Soldier_base_F {
		author = "Sabrina Penguin";
		_generalMacro = "O_DUWS_base_F";
		expansion = 1;
		faceType = "Man_A3";
		side = 0;
		faction = "OPFOR_DUWS";
		genericNames = "DUWS_Opfor_Names";
		vehicleClass = "Men_Additional";
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
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing"};
		};

		//Randomized Units
		#include "Opf_AntiAir.hpp"
		#include "Opf_AntiTank.hpp"
		#include "Opf_Autorifleman.hpp"
		#include "Opf_Grenadier.hpp"
		#include "Opf_LightAntiTank.hpp"
		#include "Opf_Marksman.hpp"
		#include "Opf_Soldiers.hpp"
		#include "Opf_SquadLeader.hpp"
		#include "Opf_TeamLeader.hpp"
		
		#include "Opf_SingleUse.hpp"
		#include "Opf_missionunits.hpp"

		//Opfor Vehicles
		
		class CUP_C_Ural_Open_Civ_01;
		class CUP_C_Ural_Open_Civ_DUWS : CUP_C_Ural_Open_Civ_01 {
		crew = "Opfor_Soldier_1";
		typicalCargo[] = {"Opfor_Soldier_1"};
		unloadInCombat = true;
		};
		
		class CUP_C_LR_Transport_CTK;
		class CUP_C_LR_Transport_CTK_DUWS : CUP_C_LR_Transport_CTK {
		crew = "Opfor_Soldier_1";
		typicalCargo[] = {"Opfor_Soldier_1"};
		unloadInCombat = true;
		};
		
		class CUP_I_BTR40_TKG;
		class CUP_I_BTR40_TKG_DUWS : CUP_I_BTR40_TKG {
		crew = "Opfor_Soldier_1";
		typicalCargo[] = {"Opfor_Soldier_1"};
		unloadInCombat = true;
		};
		
		class CUP_I_BTR40_MG_TKG;
		class CUP_I_BTR40_MG_TKG_DUWS : CUP_I_BTR40_MG_TKG {
		crew = "Opfor_Soldier_1";
		typicalCargo[] = {"Opfor_Soldier_1"};
		unloadInCombat = false;
		};
		
		class rhs_gaz66_zu23_vmf;
		class rhs_gaz66_zu23_vmf_DUWS : rhs_gaz66_zu23_vmf {
		crew = "Opfor_Soldier_1";
		typicalCargo[] = {"Opfor_Soldier_1"};
		unloadInCombat = false;
		};
		
		class CUP_I_Datsun_PK_TK_Random;
		class CUP_I_Datsun_PK_TK_Random_DUWS : CUP_I_Datsun_PK_TK_Random {
		crew = "Opfor_Soldier_1";
		typicalCargo[] = {"Opfor_Soldier_1"};
		unloadInCombat = false;
		};
};

class Extended_Init_Eventhandlers {
	#include "Extendedinit.hpp"
};