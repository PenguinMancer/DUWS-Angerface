class CfgPatches {
	class Custom_DUWS_Opf {
		units[] = {
			"Opfor_AntiAir_1",
			"Opfor_AntiTank_1",
			"Opfor_Autorifleman_1",
			"Opfor_Grenadier_1",
			"Opfor_Light_AntiTank_1",
			"Opfor_Marksman_1",
			"Opfor_Soldier_1",
			"Opfor_SquadLeader_1",
			"Opfor_TeamLeader_1",
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
			class InitOpfUnit {
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
		
		//Single Use Units (Randomized)
		#include "Opf_SingleUse.hpp"
		#include "Opf_missionunits.hpp"

		//Opfor Vehicles
		#include "Opf_Vehicles.hpp"
};

//Groups
#include "Groups_Opf.hpp"

class Extended_Init_Eventhandlers {
	#include "Extendedinit.hpp"
};