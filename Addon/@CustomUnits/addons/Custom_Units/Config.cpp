/*extern*/ class DefaultEventhandlers;

class CfgPatches {
	class unit_config {
		units[] = {"Blufor_General", "Blufor_Soldier_1", "Blufor_Soldier_2", "Blufor_Soldier_3", "Blufor_Soldier_4", "Blufor_TeamLeader_1", "Blufor_TeamLeader_2", "Blufor_SquadLeader_1", "Blufor_Light_AntiTank_1", "Blufor_Light_AntiTank_2", "Blufor_Grenadier_1", "Blufor_Grenadier_2", "Blufor_Autorifleman_1", "Blufor_Assistant_Autorifleman_1", "Blufor_Medic_1", "Blufor_Ammobearer_1", "Blufor_AntiTank_1", "Blufor_Assistant_AntiTank_1", "Blufor_AntiAir_1", "Blufor_Assistant_AntiAir_1", "Blufor_Repair_1"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F", "A3_Characters_F", "A3_Characters_F_BLUFOR", "A3_Characters_F_OPFOR", "A3_Characters_F_Civil", "A3_Characters_F_INDEP", "a3_characters_f_beta"};
	};
};

class CfgWorlds {
	class GenericNames {
		class DUWS_Blu_Names {
			class FirstNames {
				Noah = "Noah";
				Liam = "Liam";
				Patrick = "Patrick";
				Matt = "Matt";
				Woolsworth = "Woolsworth";
				Michael = "Michael";
				Jacob = "Jacob";
				James = "James";
				John = "John";
				Brian = "Brian";
				Eric = "Eric";
				Explodafucker = "Explodafucker";
				Daniel = "Daniel";
				Cedric = "Cedric";
				Max = "Max";
				Thomas = "Thomas";
				Richard = "Richard";
				Adam = "Adam";
				Chance = "Chance";
				Aaron = "Aaron";
				Jeff = "Jeff";
				Steven = "Steven";
				Kennith = "Kennith";
				Donald = "Donald";
				Corey = "Corey";
				Quinton = "Quinton";
				Billy = "Billy";
				Louis = "Louis";
				Seth = "Seth";
				Lucas = "Lucas";
				Dennis = "Dennis";
				Larry = "Larry";
				Shane = "Shane";
				Raymond = "Raymond";
				Keith = "Keith";
				Lee = "Lee";
				Jason = "Jason";
				Negan = "Negan";
				Rick = "Rick";
				Shaun = "Shaun";
			};
			class LastNames {
				Smith = "Smith";
				Johnson = "Johnson";
				Williams = "Williams";
				Jackson = "Jackson";
				Pierce = "Pierce";
				Fightmaster = "Fightmaster";
				Anderson = "Anderson";
				Reeves = "Reeves";
				White = "White";
				Garcia = "Garcia";
				Thompson = "Thompson";
				Taylor = "Taylor";
				Robinson = "Robinson";
				Harris = "Harris";
				Lee = "Lee";
				Walker = "Walker";
				Paul = "Paul";
				Pinkman = "Pinkman";
				Nelson = "Nelson";
				Edwards = "Edwards";
				Sanchez = "Sanchez";
				Morris = "Morris";
				Reed = "Reed";
				Evans = "Evans";
				Morgan = "Morgan";
				Wayne = "Wayne";
				Cook = "Cook";
				Cox = "Cox";
				Wood = "Wood";
				Jenkins = "Jenkins";
				Perry = "Perry";
				Hayes = "Hayes";
				Bryant = "Bryant";
				Alexander = "Alexander";
				Powell = "Powell";
				Foster = "Foster";
				Sanders = "Sanders";
				Russel = "Russel";
				Parker = "Parker";
				Murphy = "Murphy";
			};
		};
		class DUWS_Opfor_Names {
			class FirstNames {
				Nothing = "";
			};
			class LastNames {
				Nothing = "";
			};
		};
		class DUWS_General_Name {
			class FirstNames {
				General = "General";
			};
			class LastNames {
				Moreau = "Moreau";
			};
		};
		class DUWS_Sabbers_Name {
			class FirstNames {
				Codename = "Codename";
			};
			class LastNames {
				Penguin = "Penguin";
			};
		};
		class DUWS_Jayme_Name {
			class FirstNames {
				Codename = "Codename";
			};
			class LastNames {
				Fox = "Fox";
			};
		};
		class DUWS_Hunter_Name {
			class FirstNames {
				Codename = "Codename";
			};
			class LastNames {
				Eagle = "Eagle";
			};
		};
		class DUWS_Kevin_Name {
			class FirstNames {
				Codename = "Codename";
			};
			class LastNames {
				Wolf = "Wolf";
			};
		};
		class DUWS_Jacob_Name {
			class FirstNames {
				Codename = "Codename";
			};
			class LastNames {
				Panda = "Panda";
			};
		};
		class DUWS_Pilot_Name {
			class FirstNames {
				Hawk = "Hawk";
			};
			class LastNames {
				Nothing = "";
			};
		};
		class DUWS_Sniper_Name {
			class FirstNames {
				The = "The";
			};
			class LastNames {
				Finger = "Finger";
			};
		};
		class DUWS_Spotter_Name {
			class FirstNames {
				The = "The";
			};
			class LastNames {
				Eye = "Eye";
			};
		};
	};
};


class cfgFactionClasses
{
	class BLU_DUWS //Faction Calling Name
	{
		displayName = "BLU_DUWS"; //Faction name in-game
		priority = 3; //How far down it is on the menu
		side = 1; // 1 Blufor 0 opfor 3 independant i think.
		icon = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
	};
	class OPFOR_DUWS //Faction Calling Name
	{
		displayName = "OPFOR_DUWS"; //Faction name in-game
		priority = 3; //How far down it is on the menu
		side = 0; // 1 Blufor 0 opfor 3 independant i think.
		icon = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
	};
};

class CfgVehicleClasses
{
	class Men_Additional
	{
		displayName = "Men (DUWS)"; // Name of the Group of Units
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
		_generalMacro = "B_DUWS_base_F";
		expansion = 1;
		faceType = "Man_A3";
		side = 1;
		faction = "BLU_DUWS";
		genericNames = "DUWS_Blu_Names";
		vehicleClass = "Men_Additional";
		editorSubcategory = "EdSubcat_Personnel";
		portrait = "";
		picture = "";
		icon = "iconMan";
		accuracy = 2.300000;
		camouflage = 1.400000;
		minFireTime = 7;
		cost = 100000;
		canCarryBackPack = 1;
		scope = 0;
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_packingBandage", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot" , "ACE_packingBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_morphine", "ACE_atropine", "ACE_epinephrine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_packingBandage", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot" , "ACE_packingBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_morphine", "ACE_atropine", "ACE_epinephrine"};
		};
		
		
		//Blufor General
		
		class Blufor_General : B_DUWS_base_F  {
		_generalMacro = "Blufor_General"; 
		scope = 2;
		displayName = "General Moreau"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		genericNames = "DUWS_General_Name";
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
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
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_AOR2_OD_CombatUniform";  // Uniform Class
		backpack = "B_Parachute"; // Backpack Class
		linkedItems[] = {"rhs_tsh4", "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhs_tsh4", "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hgun_PDW2000_F", "RH_fn57"}; // Weapons added to the unit.
		respawnweapons[] = {"hgun_PDW2000_F", "RH_fn57"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		};
		
		//Blufor Soldier
		
		class Blufor_Soldier_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Soldier_1"; 
		scope = 2;
		displayName = "Marine Soldier"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Blufor_Soldier_2 : Blufor_Soldier_1  {
		_generalMacro = "Blufor_Soldier_2"; 
		scope = 2;
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_ucp_norotos", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_ucp_norotos", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Blufor_Soldier_3 : Blufor_Soldier_1  {
		_generalMacro = "Blufor_Soldier_3"; 
		scope = 2;
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "usaf_cap_tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "usaf_cap_tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Blufor_Soldier_4 : Blufor_Soldier_1  {
		_generalMacro = "Blufor_Soldier_4"; 
		scope = 2;
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Blufor_Soldier_5 : Blufor_Soldier_1  {
		_generalMacro = "Blufor_Soldier_5"; 
		scope = 2;
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_ESS_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_ESS_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Blufor_Soldier_6 : Blufor_Soldier_1  {
		_generalMacro = "Blufor_Soldier_6"; 
		scope = 2;
		weapons[] = {"rhs_weap_m4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Soldier_7 : Blufor_Soldier_2  {
		_generalMacro = "Blufor_Soldier_7"; 
		scope = 2;
		weapons[] = {"rhs_weap_m4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Soldier_8 : Blufor_Soldier_3  {
		_generalMacro = "Blufor_Soldier_8"; 
		scope = 2;
		weapons[] = {"rhs_weap_m4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Soldier_9 : Blufor_Soldier_4  {
		_generalMacro = "Blufor_Soldier_9"; 
		scope = 2;
		weapons[] = {"rhs_weap_m4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Soldier_10 : Blufor_Soldier_5  {
		_generalMacro = "Blufor_Soldier_10"; 
		scope = 2;
		weapons[] = {"rhs_weap_m4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Soldier_11 : Blufor_Soldier_1  {
		_generalMacro = "Blufor_Soldier_11"; 
		scope = 2;
		weapons[] = {"rhs_weap_m16a4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m16a4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Soldier_12 : Blufor_Soldier_2  {
		_generalMacro = "Blufor_Soldier_12"; 
		scope = 2;
		weapons[] = {"rhs_weap_m16a4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m16a4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Soldier_13 : Blufor_Soldier_3  {
		_generalMacro = "Blufor_Soldier_13"; 
		scope = 2;
		weapons[] = {"rhs_weap_m16a4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m16a4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Soldier_14 : Blufor_Soldier_4  {
		_generalMacro = "Blufor_Soldier_14"; 
		scope = 2;
		weapons[] = {"rhs_weap_m16a4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m16a4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Soldier_15 : Blufor_Soldier_5  {
		_generalMacro = "Blufor_Soldier_15"; 
		scope = 2;
		weapons[] = {"rhs_weap_m16a4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m16a4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Soldier_16 : Blufor_Soldier_1  {
		_generalMacro = "Blufor_Soldier_16"; 
		scope = 2;
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m16a4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Soldier_17 : Blufor_Soldier_2  {
		_generalMacro = "Blufor_Soldier_17"; 
		scope = 2;
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m16a4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Soldier_18 : Blufor_Soldier_3  {
		_generalMacro = "Blufor_Soldier_18"; 
		scope = 2;
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m16a4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Soldier_19 : Blufor_Soldier_4  {
		_generalMacro = "Blufor_Soldier_19"; 
		scope = 2;
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m16a4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Soldier_20 : Blufor_Soldier_5  {
		_generalMacro = "Blufor_Soldier_20"; 
		scope = 2;
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m16a4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		//Blufor Team Leader
		
		class Blufor_TeamLeader_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_TeamLeader_1"; 
		scope = 2;
		displayName = "Marine Team Leader"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "SP_Beret4_Green", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "SP_Beret4_Green", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Blufor_TeamLeader_2 : Blufor_TeamLeader_1  {
		_generalMacro = "Blufor_TeamLeader_2"; 
		scope = 2;
		weapons[] = {"rhs_weap_m4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_TeamLeader_3 : Blufor_TeamLeader_1  {
		_generalMacro = "Blufor_TeamLeader_3"; 
		scope = 2;
		weapons[] = {"rhs_weap_m16a4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m16a4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_TeamLeader_4 : Blufor_TeamLeader_1  {
		_generalMacro = "Blufor_TeamLeader_4"; 
		scope = 2;
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m16a4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		//Blufor Squad Leader
		
		class Blufor_SquadLeader_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_SquadLeader_1"; 
		scope = 2;
		displayName = "Marine Squad Leader"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "SP_Beret4_Green", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "SP_Beret4_Green", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Anti Tank Rifleman
		
		class Blufor_Light_AntiTank_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Light_AntiTank_1"; 
		scope = 2;
		displayName = "Marine Anti Tank Rifleman"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9", "rhs_weap_M136_hp"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9", "rhs_weap_M136_hp"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "rhs_m136_hp_mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "rhs_m136_hp_mag"}; //Magazines added to the unit upon respawn, should be the same as above.	
		};
		
		class Blufor_Light_AntiTank_2 : Blufor_Light_AntiTank_1  {
		_generalMacro = "Blufor_Light_AntiTank_2"; 
		scope = 2;
		weapons[] = {"rhs_weap_m4_carryhandle_pmag_sighted", "RH_m9", "rhs_weap_M136_hp"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_pmag_sighted", "RH_m9", "rhs_weap_M136_hp"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Light_AntiTank_3 : Blufor_Light_AntiTank_1  {
		_generalMacro = "Blufor_Light_AntiTank_3"; 
		scope = 2;
		weapons[] = {"rhs_weap_m16a4_carryhandle_sighted", "RH_m9", "rhs_weap_M136_hp"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m16a4_carryhandle_sighted", "RH_m9", "rhs_weap_M136_hp"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Light_AntiTank_4 : Blufor_Light_AntiTank_1  {
		_generalMacro = "Blufor_Light_AntiTank_4"; 
		scope = 2;
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag_sighted", "RH_m9", "rhs_weap_M136_hp"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m16a4_carryhandle_pmag_sighted", "RH_m9", "rhs_weap_M136_hp"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		//Blufor Grenadier
		
		class Blufor_Grenadier_1 : Blufor_Light_AntiTank_1  {
		_generalMacro = "Blufor_Grenadier_1"; 
		scope = 2;
		displayName = "Marine Grenadier"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"RH_M4A1_ris_M203s_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_M4A1_ris_M203s_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell"}; //Magazines added to the unit upon respawn, should be the same as above.		
		};
		
		class Blufor_Grenadier_2 : Blufor_Grenadier_1  {
		_generalMacro = "Blufor_Grenadier_2"; 
		scope = 2;
		weapons[] = {"rhs_weap_m4a1_blockII_M203_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4a1_blockII_M203_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Grenadier_3 : Blufor_Grenadier_1  {
		_generalMacro = "Blufor_Grenadier_3"; 
		scope = 2;
		weapons[] = {"rhs_weap_m4a1_carryhandle_m203_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4a1_carryhandle_m203_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		//Blufor Autorifleman
		
		class Blufor_Autorifleman_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Autorifleman_1"; 
		scope = 2;
		displayName = "Marine Autorifleman"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhs_googles_black", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhs_googles_black", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_lmg_m249para", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_lmg_m249para", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_200rnd_556x45_M_SAW", "hlc_200rnd_556x45_M_SAW", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_200rnd_556x45_M_SAW", "hlc_200rnd_556x45_M_SAW", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Blufor_Autorifleman_2 : Blufor_Autorifleman_1  {
		_generalMacro = "Blufor_Autorifleman_2"; 
		scope = 2;
		weapons[] = {"hlc_lmg_M249E2", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_lmg_M249E2", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Autorifleman_3 : Blufor_Autorifleman_1  {
		_generalMacro = "Blufor_Autorifleman_3"; 
		scope = 2;
		weapons[] = {"hlc_m249_pip1_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_m249_pip1_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Autorifleman_4 : Blufor_Autorifleman_1  {
		_generalMacro = "Blufor_Autorifleman_4"; 
		scope = 2;
		weapons[] = {"RH_M27IAR_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_M27IAR_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"RH_60Rnd_556x45_M855A1", "RH_60Rnd_556x45_M855A1", "RH_60Rnd_556x45_M855A1", "RH_60Rnd_556x45_M855A1",  "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit.
		Respawnmagazines[] = {"RH_60Rnd_556x45_M855A1", "RH_60Rnd_556x45_M855A1", "RH_60Rnd_556x45_M855A1", "RH_60Rnd_556x45_M855A1",  "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Blufor_Autorifleman_5 : Blufor_Autorifleman_1  {
		_generalMacro = "Blufor_Autorifleman_5"; 
		scope = 2;
		weapons[] = {"rhs_weap_m240B_CAP_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m240B_CAP_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhsusf_100Rnd_762x51_m993", "rhsusf_100Rnd_762x51_m993", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhsusf_100Rnd_762x51_m993", "rhsusf_100Rnd_762x51_m993", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Assistant Autorifleman
		
		class Blufor_Assistant_Autorifleman_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Assistant_Autorifleman_1"; 
		scope = 2;
		displayName = "Marine Assistant Autorifleman"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "hlc_200rnd_556x45_M_SAW", "hlc_200rnd_556x45_M_SAW"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "hlc_200rnd_556x45_M_SAW", "hlc_200rnd_556x45_M_SAW"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Medic
		
		class Blufor_Medic_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Medic_1"; 
		scope = 2;
		displayName = "Marine Medic"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "TRYK_B_Medbag_ucp"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "G_Spectacles", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "G_Spectacles", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "rhs_mag_m18_red", "rhs_mag_m18_red", "rhs_mag_m18_red"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "rhs_mag_m18_red", "rhs_mag_m18_red", "rhs_mag_m18_red"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_epinephrine", "ACE_epinephrine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_packingBandage", "ACE_packingBandage", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_salineIV_250", "ACE_salineIV_250", "ACE_plasmaIV_250", "ACE_plasmaIV_250", "ACE_surgicalKit"};
		respawnItems[] = {"ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_epinephrine", "ACE_epinephrine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_packingBandage", "ACE_packingBandage", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_salineIV_250", "ACE_salineIV_250", "ACE_plasmaIV_250", "ACE_plasmaIV_250", "ACE_surgicalKit"};
		};
		
		class Blufor_Medic_2 : Blufor_Medic_1  {
		_generalMacro = "Blufor_Medic_3"; 
		scope = 2;
		weapons[] = {"rhs_weap_m4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Medic_3 : Blufor_Medic_1  {
		_generalMacro = "Blufor_Medic_3"; 
		scope = 2;
		weapons[] = {"rhs_weap_m16a4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m16a4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Blufor_Medic_4 : Blufor_Medic_1  {
		_generalMacro = "Blufor_Medic_4"; 
		scope = 2;
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m16a4_carryhandle_pmag_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		//Blufor Ammo Bearer
		
		class Blufor_Ammobearer_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Ammobearer_1"; 
		scope = 2;
		displayName = "Marine AmmoBearer"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "hlc_200rnd_556x45_M_SAW", "hlc_200rnd_556x45_M_SAW"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "hlc_200rnd_556x45_M_SAW", "hlc_200rnd_556x45_M_SAW"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Missile Specialist (AT)
		
		class Blufor_AntiTank_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_AntiTank_1"; 
		scope = 2;
		displayName = "Marine Missile Specialist"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9", "rhs_weap_smaw_green"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9", "rhs_weap_smaw_green"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "rhs_mag_smaw_HEAA", "rhs_mag_smaw_HEAA"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "rhs_mag_smaw_HEAA", "rhs_mag_smaw_HEAA"}; //Magazines added to the unit upon respawn, should be the same as above.	
		};
		
		class Blufor_AntiTank_2 : Blufor_AntiTank_1  {
		_generalMacro = "Blufor_AntiTank_2"; 
		scope = 2;
		weapons[] = {"rhs_weap_m4_carryhandle_pmag_sighted", "RH_m9", "rhs_weap_smaw_green"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_pmag_sighted", "RH_m9", "rhs_weap_smaw_green"}; // Weapons added to the unit. Should be identical to the linkedItems section	
		};
		
		class Blufor_AntiTank_3 : Blufor_AntiTank_1  {
		_generalMacro = "Blufor_AntiTank_3"; 
		scope = 2;
		weapons[] = {"rhs_weap_m16a4_carryhandle_sighted", "RH_m9", "rhs_weap_smaw_green"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m16a4_carryhandle_sighted", "RH_m9", "rhs_weap_smaw_green"}; // Weapons added to the unit. Should be identical to the linkedItems section	
		};
		
		class Blufor_AntiTank_4 : Blufor_AntiTank_1  {
		_generalMacro = "Blufor_AntiTank_4"; 
		scope = 2;
		weapons[] = {"rhs_weap_m16a4_carryhandle_pmag_sighted", "RH_m9", "rhs_weap_smaw_green"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m16a4_carryhandle_pmag_sighted", "RH_m9", "rhs_weap_smaw_green"}; // Weapons added to the unit. Should be identical to the linkedItems section	
		};
		
		//Blufor Assistant Missile Specialist (AT)
		
		class Blufor_Assistant_AntiTank_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Assistant_AntiTank_1"; 
		scope = 2;
		displayName = "Marine Asst. Missile Specialist"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "rhs_mag_smaw_HEAA", "rhs_mag_smaw_HEAA"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "rhs_mag_smaw_HEAA", "rhs_mag_smaw_HEAA"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Missile Specialist (AA)
		
		class Blufor_AntiAir_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_AntiAir_1"; 
		scope = 2;
		displayName = "Marine Missile Specialist (AA)"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9", "rhs_weap_fim92"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9", "rhs_weap_fim92"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "rhs_fim92_mag", "rhs_fim92_mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "rhs_fim92_mag", "rhs_fim92_mag"}; //Magazines added to the unit upon respawn, should be the same as above.	
		};
		
		//Blufor Assistant Missile Specialist (AA)
		
		class Blufor_Assistant_AntiAir_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Assistant_AntiAir_1"; 
		scope = 2;
		displayName = "Marine Asst. Missile Specialist (AA)"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_carryhandle_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "rhs_fim92_mag", "rhs_fim92_mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "rhs_fim92_mag", "rhs_fim92_mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Repair Specialist
		
		class Blufor_Repair_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Repair_1"; 
		scope = 2;
		displayName = "Marine Repair Specialist"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_smg_mp5a4_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_smg_mp5a4_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_EntrenchingTool", "ACE_DefusalKit", "MineDetector", "ToolKit", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_packingBandage", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot" , "ACE_packingBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_morphine", "ACE_atropine", "ACE_epinephrine"};
		respawnItems[] = {"ACE_EntrenchingTool", "ACE_DefusalKit", "MineDetector", "ToolKit", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_packingBandage", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot" , "ACE_packingBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_morphine", "ACE_atropine", "ACE_epinephrine"};
		};
		
		//Blufor Marksman
		
		class Blufor_Marksman_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Marksman_1"; 
		scope = 2;
		displayName = "Marine Marksman"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_m14sopmod_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_m14sopmod_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"CUP_20Rnd_762x51_DMR", "CUP_20Rnd_762x51_DMR", "CUP_20Rnd_762x51_DMR", "CUP_20Rnd_762x51_DMR", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit.
		Respawnmagazines[] = {"CUP_20Rnd_762x51_DMR", "CUP_20Rnd_762x51_DMR", "CUP_20Rnd_762x51_DMR", "CUP_20Rnd_762x51_DMR", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Sniper
		
		class Blufor_Sniper_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Sniper_1"; 
		scope = 2;
		displayName = "Marine Sniper"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "TRYK_R_CAP_OD_US", "G_Shades_Blue", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "TRYK_R_CAP_OD_US", "G_Shades_Blue", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"CUP_srifle_M24_des_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"CUP_srifle_M24_des_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"CUP_5Rnd_762x51_M24", "CUP_5Rnd_762x51_M24", "CUP_5Rnd_762x51_M24", "CUP_5Rnd_762x51_M24", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit.
		Respawnmagazines[] = {"CUP_5Rnd_762x51_M24", "CUP_5Rnd_762x51_M24", "CUP_5Rnd_762x51_M24", "CUP_5Rnd_762x51_M24", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit upon respawn, should be the same as above.
		}
		
		//Blufor Spotter
		
		class Blufor_Spotter_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Spotter_1"; 
		scope = 2;
		displayName = "Marine Spotter"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "TRYK_r_cap_blk_Glasses", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "TRYK_r_cap_blk_Glasses", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"RH_hb_b_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_hb_b_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"RH_30Rnd_762x35_FMJ", "RH_30Rnd_762x35_FMJ", "RH_30Rnd_762x35_FMJ", "RH_30Rnd_762x35_FMJ", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit.
		Respawnmagazines[] = {"RH_30Rnd_762x35_FMJ", "RH_30Rnd_762x35_FMJ", "RH_30Rnd_762x35_FMJ", "RH_30Rnd_762x35_FMJ", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit upon respawn, should be the same as above.
		}
		
		//Blufor Explosive Specialist
		
		class Blufor_Explosives_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Explosives_1"; 
		scope = 2;
		displayName = "Marine Explosive Specialist"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_smg_mp5a4_sighted", "RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_smg_mp5a4_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "CUP_PipeBomb_M", "CUP_PipeBomb_M", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "HandGrenade", "HandGrenade", "rhs_mag_m18_red", "rhs_mag_m18_red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "CUP_PipeBomb_M", "CUP_PipeBomb_M", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_wirecutter", "ACE_DefusalKit", "ACE_Clacker", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_packingBandage", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot" , "ACE_packingBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_morphine", "ACE_atropine", "ACE_epinephrine"};
		respawnItems[] = {"ACE_wirecutter", "ACE_DefusalKit", "ACE_Clacker", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_packingBandage", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot" , "ACE_packingBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_morphine", "ACE_atropine", "ACE_epinephrine"};
		};
		
		//Blufor Diver
		
		class Blufor_Diver_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Diver_1"; 
		scope = 2;
		displayName = "G4S Diver"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "U_B_Wetsuit";  // Uniform Class
		backpack = "SP_Camelbak_Black"; // Backpack Class
		linkedItems[] = {"IP_V_RebreatherIR_ST", "SP_Goggles_Green", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"IP_V_RebreatherIR_ST", "SP_Goggles_Green", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"arifle_mas_asval_ds", "RH_fn57"}; // Weapons added to the unit.
		respawnweapons[] = {"arifle_mas_asval_ds", "RH_fn57"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		};
		
		//Blufor Diver Exp Specialist
		
		class Blufor_Diver_exp_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Diver_exp_1"; 
		scope = 2;
		displayName = "G4S Diver Explosive Specialist"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "U_O_Wetsuit";  // Uniform Class
		backpack = "B_mas_AssaultPack_black"; // Backpack Class
		linkedItems[] = {"TRYK_ESS_BLKBLK_NV", "IP_V_RebreatherIR_ST", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_ESS_BLKBLK_NV", "IP_V_RebreatherIR_ST", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"arifle_mas_asval_ds", "RH_fn57"}; // Weapons added to the unit.
		respawnweapons[] = {"arifle_mas_asval_ds", "RH_fn57"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhsusf_m112_mag", "rhsusf_m112_mag", "rhsusf_m112_mag", "30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhsusf_m112_mag", "rhsusf_m112_mag", "rhsusf_m112_mag", "30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine", "ACE_DefusalKit", "MineDetector"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine", "ACE_DefusalKit", "MineDetector"};
		};
		
		//Blufor Diver Team Leader
		
		class Blufor_Diver_Teamleader_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Diver_Teamleader_1"; 
		scope = 2;
		displayName = "G4S Diver Team Leader"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "U_I_Wetsuit";  // Uniform Class
		backpack = "SP_Camelbak_Black"; // Backpack Class
		linkedItems[] = {"IP_V_RebreatherIR_ST", "Mask_M40", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"IP_V_RebreatherIR_ST", "Mask_M40", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"arifle_mas_asval_ds", "RH_fn57"}; // Weapons added to the unit.
		respawnweapons[] = {"arifle_mas_asval_ds", "RH_fn57"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "30Rnd_mas_9x39_mag", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		};
		
		//Blufor Recon Scout
		
		class Blufor_Recon_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Recon_1"; 
		scope = 2;
		displayName = "Marine Recon Scout"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "U_I_G_resistanceLeader_F";  // Uniform Class
		backpack = "IP_B_AssaultPack_SnowTiger"; // Backpack Class
		linkedItems[] = {"TFA_boon_dou", "SP_Balaclava_NodUrban", "IP_V_PlateCarrierSpec_rgrSnowHex", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TFA_boon_dou", "SP_Balaclava_NodUrban", "IP_V_PlateCarrierSpec_rgrSnowHex", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_ak74m_2mag", "RH_mak"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_ak74m_2mag", "RH_mak"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "MiniGrenade", "ACE_HandFlare_Red", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "MiniGrenade", "ACE_HandFlare_Red", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak"};  //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		};
		
		//Blufor Recon Marksman
		
		class Blufor_Recon_Marksman_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Recon_Marksman_1"; 
		scope = 2;
		displayName =  "Marine Recon Marksman"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "Niko_USA_TPAT";  // Uniform Class
		backpack = "TRYK_B_Carryall_wh"; // Backpack Class
		linkedItems[] = {"SP_Bandolier1_Grey", "SP_Shemagh_White", "G_Shades_Black", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_Bandolier1_Grey", "SP_Shemagh_White", "G_Shades_Black", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_svdp_scoped", "RH_g17"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_svdp_scoped", "RH_g17"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "ACE_HandFlare_Red", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "ACE_HandFlare_Red", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17"};  //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		};
		
		//Recon Scout (AT)
		
		class Blufor_Recon_LAT_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Recon_LAT_1"; 
		scope = 2;
		displayName = "Marine Recon scout (AT)"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "Niko_USA_Yeti";  // Uniform Class
		backpack = "TRYK_B_Carryall_wh"; // Backpack Class
		linkedItems[] = {"SP_JackEllis1_Grey", "TRYK_H_headset2", "SP_Balaclava_NodUrban", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_JackEllis1_Grey", "TRYK_H_headset2", "SP_Balaclava_NodUrban", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"arifle_mas_ak74", "RH_gsh18", "launch_RPG32_F"}; // Weapons added to the unit.
		respawnweapons[] = {"arifle_mas_ak74", "RH_gsh18", "launch_RPG32_F"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RPG32_F"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RPG32_F"};  //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		};
		
		//Blufor Recon Explosives Expert
		
		class Blufor_Recon_Exp_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Recon_Exp_1"; 
		scope = 2;
		displayName = "Marine Recon Explosive Specialist"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "Niko_USA_aobalpine";  // Uniform Class
		backpack = "TRYK_B_Carryall_wh"; // Backpack Class
		linkedItems[] = {"SP_JackEllis1_White", "TRYK_H_Helmet_Snow", "TRYK_Beard_Gr2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_JackEllis1_White", "TRYK_H_Helmet_Snow", "TRYK_Beard_Gr2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_ak103", "RH_mak"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_ak103", "RH_mak"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "MiniGrenade", "MiniGrenade", "MiniGrenade", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "ACE_HandFlare_Red", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "MiniGrenade", "MiniGrenade", "MiniGrenade", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "ACE_HandFlare_Red", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak"};  //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine", "ATMine_Range_Mag", "SatchelCharge_Remote_Mag", "APERSBoundingMine_Range_Mag"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine", "ATMine_Range_Mag", "SatchelCharge_Remote_Mag", "APERSBoundingMine_Range_Mag"};
		};
		
		//Blufor Recon Medic
		
		class Blufor_Recon_Medic_1 : Blufor_Medic_1  {
		_generalMacro = "Blufor_Recon_Medic_1"; 
		scope = 2;
		displayName = "Marine Recon Medic"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "Niko_USA_SnowMARPAT";  // Uniform Class
		backpack = "TRYK_B_Coyotebackpack_WH"; // Backpack Class
		linkedItems[] = {"SP_JackEllis1_Grey", "SP_SSh68NetHelmet_White1", "G_mas_wpn_bala_gog", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_JackEllis1_Grey", "SP_SSh68NetHelmet_White1", "G_mas_wpn_bala_gog", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_aku12", "RH_mak"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aku12", "RH_mak"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "ACE_HandFlare_Red", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "ACE_HandFlare_Red", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak"};  //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Recon JTAC
		
		class Blufor_Recon_JTAC_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Recon_JTAC_1"; 
		scope = 2;
		displayName = "Marine Recon JTAC"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_Snow_CombatUniform";  // Uniform Class
		backpack = "IP_B_Kitbag_SnowHex"; // Backpack Class
		linkedItems[] = {"SP_Harness1_Grey", "TRYK_H_wig", "G_mas_wpn_wrap_gog_t", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_Harness1_Grey", "TRYK_H_wig", "G_mas_wpn_wrap_gog_t", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_ak74m_folded", "RH_gsh18", "Laserdesignator_mas_h"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_ak74m_folded", "RH_gsh18", "Laserdesignator_mas_h"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"};  //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine", "ACE_SpottingScope", "ACE_Tripod"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine", "ACE_SpottingScope", "ACE_Tripod"};
		};
		
		//Blufor Recon Team Leader
		
		class Blufor_Recon_TL_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Recon_TL_1"; 
		scope = 2;
		displayName = "Marine Recon Team Leader"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "Niko_USA_aobalpinepcu";  // Uniform Class
		backpack = "IP_B_FieldPack_SnowTiger"; // Backpack Class
		linkedItems[] = {"SP_Tactical1_Grey", "SP_Bandana_NodUrban", "G_Bandanna_beast", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_Tactical1_Grey", "SP_Bandana_NodUrban", "G_Bandanna_beast", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_aks74", "RH_g17", "Rangefinder_mas_h"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74", "RH_g17", "Rangefinder_mas_h"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "ACE_HandFlare_Red", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "ACE_HandFlare_Red", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17"};  //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		};
		
		//Blufor Helo Pilot
		
		class Blufor_Pilot_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Pilot_1"; 
		scope = 2;
		displayName = "Marine Helo Pilot"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "B_Parachute"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "TRYK_H_TACEARMUFF_H", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "TRYK_H_TACEARMUFF_H", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"RH_m9"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit.
		Respawnmagazines[] = {"RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		};
		
		//Player Units
		
		//Sab Unit
		class Blufor_Sebby_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Sebby_1"; 
		scope = 2;
		displayName = "Codename Penguin"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		genericNames = "DUWS_Sabbers_Name";
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_NATO_UCP_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"RH_M27IAR_des_sighted", "RH_m9c"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_M27IAR_des_sighted", "RH_m9c"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"RH_60Rnd_556x45_M855A1", "RH_60Rnd_556x45_M855A1", "RH_60Rnd_556x45_M855A1", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit.
		Respawnmagazines[] = {"RH_60Rnd_556x45_M855A1", "RH_60Rnd_556x45_M855A1", "RH_60Rnd_556x45_M855A1", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_morphine", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_morphine", "ACE_morphine"};
		};
		
		//Jayme Unit
		class Blufor_Jayme_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Jayme_1"; 
		scope = 2;
		displayName = "Codename Fox"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		genericNames = "DUWS_Jayme_Name";
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_m4_pmag_Jayme", "RH_m9", "Binocular"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_pmag_Jayme", "RH_m9", "Binocular"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "rhs_mag_m18_red", "rhs_mag_m18_red", "rhs_mag_m18_red"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "rhs_mag_m18_red", "rhs_mag_m18_red", "rhs_mag_m18_red"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_epinephrine", "ACE_epinephrine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_packingBandage", "ACE_packingBandage", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_salineIV_250", "ACE_salineIV_250", "ACE_plasmaIV_250", "ACE_plasmaIV_250", "ACE_surgicalKit"};
		respawnItems[] = {"ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_epinephrine", "ACE_epinephrine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_packingBandage", "ACE_packingBandage", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_salineIV_250", "ACE_salineIV_250", "ACE_plasmaIV_250", "ACE_plasmaIV_250", "ACE_surgicalKit"};
		};
		
		//Kevin Unit
		class Blufor_Kevin_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Kevin_1"; 
		scope = 2;
		displayName = "Codename Wolf"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		genericNames = "DUWS_Kevin_Name";
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_m14ebrri_sighted", "RH_g19", "Binocular"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m14ebrri_sighted", "RH_g19", "Binocular"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Hunter Unit
		class Blufor_Hunter_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Hunter_1"; 
		scope = 2;
		displayName = "Codename Eagle"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		genericNames = "DUWS_Hunter_Name";
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"CUP_srifle_M14_DMR_sighted", "RH_usp_suppressed", "Binocular"}; // Weapons added to the unit.
		respawnweapons[] = {"CUP_srifle_M14_DMR_sighted", "RH_usp_suppressed", "Binocular"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "RH_12Rnd_45cal_usp", "RH_12Rnd_45cal_usp", "RH_12Rnd_45cal_usp", "CUP_HandGrenade_M67", "CUP_HandGrenade_M67", "CUP_HandGrenade_M67"}; //Magazines added to the unit.
		Respawnmagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "RH_12Rnd_45cal_usp", "RH_12Rnd_45cal_usp", "RH_12Rnd_45cal_usp", "CUP_HandGrenade_M67", "CUP_HandGrenade_M67", "CUP_HandGrenade_M67"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Jacob Unit
		class Blufor_Jacob_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Jacob_1"; 
		scope = 2;
		displayName = "Codename Panda"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		genericNames = "DUWS_Jacob_Name";
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "CUP_U_O_SLA_Desert";  // Uniform Class
		backpack = "B_AssaultPack_ocamo"; // Backpack Class
		linkedItems[] = {"rhsusf_spc", "H_HelmetSpecO_ocamo", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "TRYK_Shemagh_TAN_NV"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhsusf_spc", "H_HelmetSpecO_ocamo", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "TRYK_Shemagh_TAN_NV"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"RH_Hk416_sighted", "RH_bullb", "Binocular"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_Hk416_sighted", "RH_bullb", "Binocular"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "CUP_HandGrenade_RGD5", "CUP_HandGrenade_RGD5", "RH_6Rnd_454_Mag", "RH_6Rnd_454_Mag", "RH_6Rnd_454_Mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "CUP_HandGrenade_RGD5", "CUP_HandGrenade_RGD5", "RH_6Rnd_454_Mag", "RH_6Rnd_454_Mag", "RH_6Rnd_454_Mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Oh boy, time for the Opfor units.
		
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
		accuracy = 2.300000;
		camouflage = 1.400000;
		minFireTime = 7;
		cost = 100000;
		canCarryBackPack = 1;
		scope = 0;
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing"};
		};
		
		//Opfor Sniper and Spotter (Mission)
		
		class Opfor_Sniper_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Sniper_1"; 
		scope = 2;
		displayName = "Taliban Sniper"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		genericNames = "DUWS_Opfor_Names";
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "AFG_2002FourColorWoodland_FieldUniform_SS";  // Uniform Class
		backpack = "B_AssaultPack_cbr"; // Backpack Class
		linkedItems[] = {"TRYK_R_CAP_OD_US", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_R_CAP_OD_US", "G_Bandanna_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_svdp_wd_scoped"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_svdp_wd_scoped"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShellRed", "SmokeShell", "SmokeShell", "rhs_mag_m18_red"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "SmokeShell", "SmokeShell", "SmokeShell", "rhs_mag_m18_red"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {};
		respawnItems[] = {};
		};
		
		class Opfor_Spotter_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Spotter_1"; 
		scope = 2;
		displayName = "Taliban Spotter"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		genericNames = "DUWS_Opfor_Names";
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "AFG_2002Woodland_TacticalUniform_TS";  // Uniform Class
		backpack = "B_AssaultPack_cbr"; // Backpack Class
		linkedItems[] = {"TRYK_H_pakol2", "TRYK_Beard_BK", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMap"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_H_pakol2", "TRYK_Beard_BK", "ItemCompass", "ItemWatch", "ItemRadio", "ItemMap"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_aks74u_scoped"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74u_scoped"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "SmokeShellRed", "SmokeShell", "SmokeShell", "rhs_mag_m18_red"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "SmokeShell", "SmokeShell", "SmokeShell", "rhs_mag_m18_red"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {};
		respawnItems[] = {};
		};
		
		//Opfor Officer (mission)
		
		class Opfor_Officer_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Officer_1"; 
		scope = 2;
		displayName = "Taliban Officer"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "U_BG_Guerilla2_2";  // Uniform Class
		backpack = "RHS_Podnos_Gun_Bag"; // Backpack Class
		linkedItems[] = {"H_Bandanna_cbr", "TRYK_Beard_BK2", "SP_Modular1_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"H_Bandanna_cbr", "TRYK_Beard_BK2", "SP_Modular1_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_ak74_dirty"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_dirty"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing"};
		};
		
		//OPFOR Soldier
		
		class Opfor_Soldier_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Soldier_1"; 
		scope = 2;
		displayName = "Taliban Soldier"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_ZARATAKI2";  // Uniform Class
		backpack = "rhs_sidor"; // Backpack Class
		linkedItems[] = {"H_Bandanna_sgg", "PU_shemagh_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"H_Bandanna_sgg", "PU_shemagh_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_akms", "RH_mak"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_akms", "RH_mak"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "IEDLandSmall_Remote_Mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "IEDLandSmall_Remote_Mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Soldier_2 : Opfor_Soldier_1  {
		_generalMacro = "Opfor_Soldier_2"; 
		scope = 2;
		weapons[] = {"rhs_weap_akm", "RH_mak"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_akm", "RH_mak"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Soldier_3 : Opfor_Soldier_1  {
		_generalMacro = "Opfor_Soldier_3"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak47", "RH_mak"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak47", "RH_mak"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Soldier_4 : Opfor_Soldier_1  {
		_generalMacro = "Opfor_Soldier_4"; 
		scope = 2;
		uniformClass = "TRYK_ZARATAKI3";  // Uniform Class
		backpack = "B_FieldPack_cbr"; // Backpack Class
		linkedItems[] = {"G_Balaclava_oli","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"G_Balaclava_oli","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_Soldier_5 : Opfor_Soldier_2  {
		_generalMacro = "Opfor_Soldier_5"; 
		scope = 2;
		uniformClass = "TRYK_ZARATAKI3";  // Uniform Class
		backpack = "B_FieldPack_cbr"; // Backpack Class
		linkedItems[] = {"G_Balaclava_oli","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"G_Balaclava_oli","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_Soldier_6 : Opfor_Soldier_3  {
		_generalMacro = "Opfor_Soldier_6"; 
		scope = 2;
		uniformClass = "TRYK_ZARATAKI3";  // Uniform Class
		backpack = "B_FieldPack_cbr"; // Backpack Class
		linkedItems[] = {"G_Balaclava_oli","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"G_Balaclava_oli","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_Soldier_7 : Opfor_Soldier_1  {
		_generalMacro = "Opfor_Soldier_7"; 
		scope = 2;
		uniformClass = "TRYK_ZARATAKI";  // Uniform Class
		backpack = "B_FieldPack_cbr"; // Backpack Class
		linkedItems[] = {"T_HoodMD","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"T_HoodMD","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_Soldier_8 : Opfor_Soldier_2  {
		_generalMacro = "Opfor_Soldier_8"; 
		scope = 2;
		uniformClass = "TRYK_ZARATAKI";  // Uniform Class
		backpack = "B_FieldPack_cbr"; // Backpack Class
		linkedItems[] = {"T_HoodMD","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"T_HoodMD","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_Soldier_9 : Opfor_Soldier_3  {
		_generalMacro = "Opfor_Soldier_9"; 
		scope = 2;
		uniformClass = "TRYK_ZARATAKI";  // Uniform Class
		backpack = "B_FieldPack_cbr"; // Backpack Class
		linkedItems[] = {"T_HoodMD","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"T_HoodMD","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_Soldier_10 : Opfor_Soldier_1  {
		_generalMacro = "Opfor_Soldier_10"; 
		scope = 2;
		uniformClass = "U_BG_Guerilla3_1";  // Uniform Class
		backpack = "B_FieldPack_cbr"; // Backpack Class
		linkedItems[] = {"TRYK_Beard_BK","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_Beard_BK","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_Soldier_11 : Opfor_Soldier_2  {
		_generalMacro = "Opfor_Soldier_11"; 
		scope = 2;
		uniformClass = "U_BG_Guerilla3_1";  // Uniform Class
		backpack = "B_FieldPack_cbr"; // Backpack Class
		linkedItems[] = {"TRYK_Beard_BK","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_Beard_BK","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_Soldier_12 : Opfor_Soldier_3  {
		_generalMacro = "Opfor_Soldier_12"; 
		scope = 2;
		uniformClass = "U_BG_Guerilla3_1";  // Uniform Class
		backpack = "B_FieldPack_cbr"; // Backpack Class
		linkedItems[] = {"TRYK_Beard_BK","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_Beard_BK","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_Soldier_13 : Opfor_Soldier_1  {
		_generalMacro = "Opfor_Soldier_13"; 
		scope = 2;
		weapons[] = {"hlc_rifle_aks74u"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74u"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "IEDLandSmall_Remote_Mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "IEDLandSmall_Remote_Mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Soldier_14 : Opfor_Soldier_4  {
		_generalMacro = "Opfor_Soldier_14"; 
		scope = 2;
		weapons[] = {"hlc_rifle_aks74u"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74u"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "IEDLandSmall_Remote_Mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "IEDLandSmall_Remote_Mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Soldier_15 : Opfor_Soldier_7  {
		_generalMacro = "Opfor_Soldier_15"; 
		scope = 2;
		weapons[] = {"hlc_rifle_aks74u"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74u"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "IEDLandSmall_Remote_Mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "IEDLandSmall_Remote_Mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Soldier_16 : Opfor_Soldier_10  {
		_generalMacro = "Opfor_Soldier_16"; 
		scope = 2;
		weapons[] = {"hlc_rifle_aks74u"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74u"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "IEDLandSmall_Remote_Mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "IEDLandSmall_Remote_Mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		
		//Opfor Ammo Bearer
		
		class Opfor_Ammoholder_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Ammoholder_1"; 
		scope = 2;
		displayName = "Taliban Ammo Bearer"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_T_camo_tan";  // Uniform Class
		backpack = "B_FieldPack_cbr"; // Backpack Class
		linkedItems[] = {"SP_Shemagh_CheckBlack", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_Shemagh_CheckBlack", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_aks74u"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74u"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_100Rnd_762x54mmR"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_100Rnd_762x54mmR"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Ammoholder_2 : Opfor_Ammoholder_1  {
		_generalMacro = "Opfor_Ammoholder_2"; 
		scope = 2;
		weapons[] = {"hlc_rifle_aks74"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Ammoholder_3 : Opfor_Ammoholder_1  {
		_generalMacro = "Opfor_Ammoholder_3"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak74"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Ammoholder_4 : Opfor_Ammoholder_1  {
		_generalMacro = "Opfor_Ammoholder_4"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak74_dirty"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_dirty"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Ammoholder_5 : Opfor_Ammoholder_1  {
		_generalMacro = "Opfor_Ammoholder_5"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak74_dirty2"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_dirty2"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		//Opfor Medic
		
		class Opfor_Medic_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Medic_1"; 
		scope = 2;
		displayName = "Taliban Medic"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_ZARATAKI2";  // Uniform Class
		backpack = "B_AssaultPack_rgr"; // Backpack Class
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_aks74u", "Binocular"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74u", "Binocular"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_atropine", "ACE_atropine", "ACE_adenosine", "ACE_adenosine", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_morphine", "ACE_morphine", "ACE_surgicalKit"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_atropine", "ACE_atropine", "ACE_adenosine", "ACE_adenosine", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_morphine", "ACE_morphine", "ACE_surgicalKit"};
		};
		
		class Opfor_Medic_2 : Opfor_Medic_1  {
		_generalMacro = "Opfor_Medic_2"; 
		scope = 2;
		displayName = "Taliban Medic"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_Denim_T_BK";  // Uniform Class
		backpack = "B_AssaultPack_rgr"; // Backpack Class
		linkedItems[] = {"SP_Shemagh_CheckWhite", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_Shemagh_CheckWhite", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_aks74", "Binocular"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74", "Binocular"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		//Opfor Squad Leader
		
		class Opfor_SquadLeader_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_SquadLeader_1"; 
		scope = 2;
		displayName = "Taliban Squad Leader"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "U_BG_Guerilla2_3";  // Uniform Class
		backpack = "B_Kitbag_sgg"; // Backpack Class
		linkedItems[] = {"SP_JackEllis1_PressBlue1", "SP_Bandana_Black", "TRYK_Beard_BK", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_JackEllis1_PressBlue1", "SP_Bandana_Black", "TRYK_Beard_BK", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"RH_M16A4"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_M16A4"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"RH_30Rnd_556x45_M855A1", "RH_30Rnd_556x45_M855A1", "RH_30Rnd_556x45_M855A1", "RH_30Rnd_556x45_M855A1"}; //Magazines added to the unit.
		Respawnmagazines[] = {"RH_30Rnd_556x45_M855A1", "RH_30Rnd_556x45_M855A1", "RH_30Rnd_556x45_M855A1", "RH_30Rnd_556x45_M855A1"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_SquadLeader_2 : Opfor_SquadLeader_1  {
		_generalMacro = "Opfor_SquadLeader_2"; 
		scope = 2;
		uniformClass = "U_C_Journalist";  // Uniform Class
		backpack = "TFA_Kitbag_NWU2"; // Backpack Class
		linkedItems[] = {"TRYK_V_Bulletproof_BLK", "AFG_Beret_ArmyGreen", "TRYK_Beard_BK", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_Bulletproof_BLK", "AFG_Beret_ArmyGreen", "TRYK_Beard_BK", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_SquadLeader_3 : Opfor_SquadLeader_1  {
		_generalMacro = "Opfor_SquadLeader_3"; 
		scope = 2;
		weapons[] = {"RH_m4_des"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_m4_des"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_SquadLeader_4 : Opfor_SquadLeader_2  {
		_generalMacro = "Opfor_SquadLeader_4"; 
		scope = 2;
		weapons[] = {"RH_m4_des"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_m4_des"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		//Opfor Team Leader
		
		class Opfor_TeamLeader_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_TeamLeader_1"; 
		scope = 2;
		displayName = "Taliban Squad Leader"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "U_BG_Guerilla3_1";  // Uniform Class
		backpack = "TFA_Kitbag_NWU2"; // Backpack Class
		linkedItems[] = {"TRYK_V_Bulletproof_BLK", "rhs_6b27m_ml", "rhs_scarf", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_Bulletproof_BLK", "rhs_6b27m_ml", "rhs_scarf", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_ak74_dirty"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_dirty"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_TeamLeader_2 : Opfor_TeamLeader_1  {
		_generalMacro = "Opfor_TeamLeader_2"; 
		scope = 2;
		uniformClass = "U_C_Journalist";  // Uniform Class
		backpack = "TFA_Kitbag_NWU2"; // Backpack Class
		linkedItems[] = {"TRYK_V_Bulletproof_BLK", "rhsusf_cvc_helmet", "T_HoodMW", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_Bulletproof_BLK", "rhsusf_cvc_helmet", "T_HoodMW", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_TeamLeader_3 : Opfor_TeamLeader_1  {
		_generalMacro = "Opfor_TeamLeader_3"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak74_dirty2"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_dirty2"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_TeamLeader_4 : Opfor_TeamLeader_2  {
		_generalMacro = "Opfor_TeamLeader_4"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak74_dirty2"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_dirty2"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_TeamLeader_5 : Opfor_TeamLeader_1  {
		_generalMacro = "Opfor_TeamLeader_5"; 
		scope = 2;
		weapons[] = {"hlc_rifle_akm"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_akm"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_TeamLeader_6 : Opfor_TeamLeader_2  {
		_generalMacro = "Opfor_TeamLeader_6"; 
		scope = 2;
		weapons[] = {"hlc_rifle_akm"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_akm"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_TeamLeader_7 : Opfor_TeamLeader_5  {
		_generalMacro = "Opfor_TeamLeader_7"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak47"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak47"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_TeamLeader_8 : Opfor_TeamLeader_6  {
		_generalMacro = "Opfor_TeamLeader_8"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak47"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak47"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		//Opfor Anti Tank Rifleman
		
		class Opfor_Light_AntiTank_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Light_AntiTank_1"; 
		scope = 2;
		displayName = "Taliban Anti Tank Rifleman"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_ZARATAKI2";  // Uniform Class
		backpack = "SP_Carryall_Green"; // Backpack Class
		linkedItems[] = {"TRYK_H_Booniehat_WOOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_H_Booniehat_WOOD", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_M590_5RD"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_M590_5RD"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_00Buck"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_00Buck"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "IEDLandSmall_Remote_Mag", "IEDUrbanSmall_Remote_Mag"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "IEDLandSmall_Remote_Mag", "IEDUrbanSmall_Remote_Mag"};
		};
		
		class Opfor_Light_AntiTank_2 : Opfor_Light_AntiTank_1  {
		_generalMacro = "Opfor_Light_AntiTank_2"; 
		scope = 2;
		uniformClass = "U_B_CombatUniform_mcam_tshirt";  // Uniform Class
		linkedItems[] = {"rhs_6b23_vydra_3m", "Balaclava_Black", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhs_6b23_vydra_3m", "Balaclava_Black", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_Light_AntiTank_3 : Opfor_Light_AntiTank_1  {
		_generalMacro = "Opfor_Light_AntiTank_3"; 
		scope = 2;
		weapons[] = {"RH_vz61"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_vz61"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"RH_20Rnd_32cal_vz61", "RH_20Rnd_32cal_vz61", "RH_20Rnd_32cal_vz61"}; //Magazines added to the unit.
		Respawnmagazines[] = {"RH_20Rnd_32cal_vz61", "RH_20Rnd_32cal_vz61", "RH_20Rnd_32cal_vz61"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Light_AntiTank_4 : Opfor_Light_AntiTank_2  {
		_generalMacro = "Opfor_Light_AntiTank_4"; 
		scope = 2;
		weapons[] = {"RH_vz61"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_vz61"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"RH_20Rnd_32cal_vz61", "RH_20Rnd_32cal_vz61", "RH_20Rnd_32cal_vz61"}; //Magazines added to the unit.
		Respawnmagazines[] = {"RH_20Rnd_32cal_vz61", "RH_20Rnd_32cal_vz61", "RH_20Rnd_32cal_vz61"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Opfor Missile Specialist (AT)
		
		class Opfor_AntiTank_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_AntiTank_1"; 
		scope = 2;
		displayName = "Taliban Missile Specialist (AT)"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "AFG_1996Woodland_PulloverUniform";  // Uniform Class
		backpack = "B_AssaultPack_rgr"; // Backpack Class
		linkedItems[] = {"rhs_6b23_vydra_3m", "usaf_cap_mc", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhs_6b23_vydra_3m", "usaf_cap_mc", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_aks74u", "rhs_weap_rpg7"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74u", "rhs_weap_rpg7"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_rpg7_PG7VL_mag", "rhs_rpg7_PG7VL_mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_rpg7_PG7VL_mag", "rhs_rpg7_PG7VL_mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_AntiTank_2 : Opfor_AntiTank_1  {
		_generalMacro = "Opfor_AntiTank_2"; 
		scope = 2;
		uniformClass = "AFG_1980DuckHunter_FieldUniform_SS";  // Uniform Class
		linkedItems[] = {"SP_BaseballCap_TweedCheckedGreen", "rhs_googles_clear", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_BaseballCap_TweedCheckedGreen", "rhs_googles_clear", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_AntiTank_3 : Opfor_AntiTank_1  {
		_generalMacro = "Opfor_AntiTank_2"; 
		scope = 2;
		weapons[] = {"hlc_rifle_aks74", "rhs_weap_rpg7"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74", "rhs_weap_rpg7"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_AntiTank_4 : Opfor_AntiTank_2  {
		_generalMacro = "Opfor_AntiTank_2"; 
		scope = 2;
		weapons[] = {"hlc_rifle_aks74", "rhs_weap_rpg7"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74", "rhs_weap_rpg7"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_AntiTank_5 : Opfor_AntiTank_1  {
		_generalMacro = "Opfor_AntiTank_2"; 
		scope = 2;
		weapons[] = {"RH_deagle", "rhs_weap_rpg7"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_deagle", "rhs_weap_rpg7"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "rhs_rpg7_PG7VL_mag", "rhs_rpg7_PG7VL_mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "rhs_rpg7_PG7VL_mag", "rhs_rpg7_PG7VL_mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_AntiTank_6 : Opfor_AntiTank_2  {
		_generalMacro = "Opfor_AntiTank_2"; 
		scope = 2;
		weapons[] = {"RH_deagle", "rhs_weap_rpg7"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_deagle","rhs_weap_rpg7"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "rhs_rpg7_PG7VL_mag", "rhs_rpg7_PG7VL_mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "rhs_rpg7_PG7VL_mag", "rhs_rpg7_PG7VL_mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Opfor Missile Specialist (AT) Assistant
		
		class Opfor_Assistant_AntiTank_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Assistant_AntiTank_1"; 
		scope = 2;
		displayName = "Taliban Asst. Missile Specialist (AT)"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_ZARATAKI3";  // Uniform Class
		backpack = "SP_Carryall_Green"; // Backpack Class
		linkedItems[] = {"G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_M590_5RD"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_M590_5RD"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_00Buck", "rhs_rpg7_PG7VL_mag", "rhs_rpg7_PG7VL_mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_00Buck", "rhs_rpg7_PG7VL_mag", "rhs_rpg7_PG7VL_mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Opfor Missile Specialist (AA)
		
		class Opfor_AntiAir_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_AntiAir_1"; 
		scope = 2;
		displayName = "Taliban Missile Specialist (AA)"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_ZARATAKI3";  // Uniform Class
		backpack = "SP_Carryall_Green"; // Backpack Class
		linkedItems[] = {"H_Shemag_olive", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"H_Shemag_olive", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_aks74u", "CUP_launch_Igla"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74u", "CUP_launch_Igla"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "CUP_Igla_M"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "CUP_Igla_M"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_AntiAir_2 : Opfor_AntiAir_1  {
		_generalMacro = "Opfor_AntiAir_2"; 
		scope = 2;
		weapons[] = {"hlc_rifle_aks74", "CUP_launch_Igla"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74", "CUP_launch_Igla"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_AntiAir_3 : Opfor_AntiAir_1  {
		_generalMacro = "Opfor_AntiAir_3"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak74m", "CUP_launch_Igla"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74m", "CUP_launch_Igla"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		//Opfor Autorifleman
		
		class Opfor_Autorifleman_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Autorifleman_1"; 
		scope = 2;
		displayName = "Taliban Autorifleman"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "U_BG_leader";  // Uniform Class
		backpack = "rhsusf_falconii_coy"; // Backpack Class
		linkedItems[] = {"rhs_6b23_6sh116_od", "usaf_boonie_mc", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "PU_shemagh_OD"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhs_6b23_6sh116_od", "usaf_boonie_mc", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "PU_shemagh_OD"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_pkp"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_pkp"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Autorifleman_2 : Opfor_Autorifleman_1  {
		_generalMacro = "Opfor_Autorifleman_2"; 
		scope = 2;
		uniformClass = "U_BG_Guerilla1_1";  // Uniform Class
		backpack = "rhsusf_assault_eagleaiii_ucp"; // Backpack Class
		linkedItems[] = {"rhs_6b23_digi_crew", "rhs_balaclava", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhs_6b23_digi_crew", "rhs_balaclava", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_Autorifleman_3 : Opfor_Autorifleman_1  {
		_generalMacro = "Opfor_Autorifleman_3"; 
		scope = 2;
		uniformClass = "U_BG_Guerrilla_6_1";  // Uniform Class
		backpack = "rhsusf_assault_eagleaiii_ucp"; // Backpack Class
		linkedItems[] = {"rhs_6sh92_vog_headset", "TRYK_Beard_BK", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhs_6sh92_vog_headset", "TRYK_Beard_BK", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_Autorifleman_4 : Opfor_Autorifleman_1  {
		_generalMacro = "Opfor_Autorifleman_4"; 
		scope = 2;
		weapons[] = {"rhs_weap_pkm"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_pkm"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Autorifleman_5 : Opfor_Autorifleman_2  {
		_generalMacro = "Opfor_Autorifleman_5"; 
		scope = 2;
		weapons[] = {"rhs_weap_pkm"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_pkm"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Autorifleman_6 : Opfor_Autorifleman_3  {
		_generalMacro = "Opfor_Autorifleman_6"; 
		scope = 2;
		weapons[] = {"rhs_weap_pkm"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_pkm"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Autorifleman_7 : Opfor_Autorifleman_1  {
		_generalMacro = "Opfor_Autorifleman_7"; 
		scope = 2;
		weapons[] = {"hlc_lmg_m60"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_lmg_m60"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_100Rnd_762x51_M_M60E4", "hlc_100Rnd_762x51_M_M60E4"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_100Rnd_762x51_M_M60E4", "hlc_100Rnd_762x51_M_M60E4"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Autorifleman_8 : Opfor_Autorifleman_2  {
		_generalMacro = "Opfor_Autorifleman_8"; 
		scope = 2;
		weapons[] = {"hlc_lmg_m60"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_lmg_m60"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_100Rnd_762x51_M_M60E4", "hlc_100Rnd_762x51_M_M60E4"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_100Rnd_762x51_M_M60E4", "hlc_100Rnd_762x51_M_M60E4"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Autorifleman_9 : Opfor_Autorifleman_3  {
		_generalMacro = "Opfor_Autorifleman_9"; 
		scope = 2;
		weapons[] = {"hlc_lmg_m60"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_lmg_m60"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_100Rnd_762x51_M_M60E4", "hlc_100Rnd_762x51_M_M60E4"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_100Rnd_762x51_M_M60E4", "hlc_100Rnd_762x51_M_M60E4"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Opfor Grenadier
		
		class Opfor_Grenadier_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Grenadier_1"; 
		scope = 2;
		displayName = "Taliban Grenadier"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "U_BG_Guerilla2_1";  // Uniform Class
		backpack = "B_AssaultPack_blk"; // Backpack Class
		linkedItems[] = {"rhs_fieldcap_digi2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhs_fieldcap_digi2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_aks74_GL"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74_GL"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "hlc_VOG25_AK", "hlc_VOG25_AK", "hlc_VOG25_AK"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "hlc_VOG25_AK", "hlc_VOG25_AK", "hlc_VOG25_AK"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Grenadier_2 : Opfor_Grenadier_1  {
		_generalMacro = "Opfor_Grenadier_2"; 
		scope = 2;
		uniformClass = "U_C_HunterBody_grn";  // Uniform Class
		backpack = "B_AssaultPack_blk"; // Backpack Class
		linkedItems[] = {"SP_Beret3_Brown", "TRYK_Beard_BK4", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_Beret3_Brown", "TRYK_Beard_BK4", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_Grenadier_3 : Opfor_Grenadier_1  {
		_generalMacro = "Opfor_Grenadier_3"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak74m_gl"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74m_gl"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Grenadier_4 : Opfor_Grenadier_2  {
		_generalMacro = "Opfor_Grenadier_4"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak74m_gl"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74m_gl"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		//Opfor Designated Marksman
		
		class Opfor_Marksman_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Marksman_1"; 
		scope = 2;
		displayName = "Taliban Designated Marksman"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "Niko_USA_R_DesertTiger";  // Uniform Class
		backpack = "B_AssaultPack_dgtl"; // Backpack Class
		linkedItems[] = {"SP_Shemagh_CheckTan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_Shemagh_CheckTan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_m38"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m38"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhsgref_5Rnd_762x54_m38", "rhsgref_5Rnd_762x54_m38", "rhsgref_5Rnd_762x54_m38", "rhsgref_5Rnd_762x54_m38", "rhsgref_5Rnd_762x54_m38"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhsgref_5Rnd_762x54_m38", "rhsgref_5Rnd_762x54_m38", "rhsgref_5Rnd_762x54_m38", "rhsgref_5Rnd_762x54_m38", "rhsgref_5Rnd_762x54_m38"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Marksman_2 : Opfor_Marksman_1  {
		_generalMacro = "Opfor_Marksman_2"; 
		scope = 2;
		uniformClass = "U_BG_Guerilla3_1";  // Uniform Class
		backpack = "B_AssaultPack_dgtl"; // Backpack Class
		linkedItems[] = {"SP_Hood_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_Hood_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		};
		
		class Opfor_Marksman_3 : Opfor_Marksman_1  {
		_generalMacro = "Opfor_Marksman_3"; 
		scope = 2;
		weapons[] = {"hlc_rifle_M14_Rail_Oldscope"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_M14_Rail_Oldscope"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_20Rnd_762x51_B_M14", "hlc_20Rnd_762x51_B_M14", "hlc_20Rnd_762x51_B_M14"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_20Rnd_762x51_B_M14", "hlc_20Rnd_762x51_B_M14", "hlc_20Rnd_762x51_B_M14"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Marksman_4 : Opfor_Marksman_2  {
		_generalMacro = "Opfor_Marksman_4"; 
		scope = 2;
		weapons[] = {"hlc_rifle_M14_Rail_Oldscope"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_M14_Rail_Oldscope"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_20Rnd_762x51_B_M14", "hlc_20Rnd_762x51_B_M14", "hlc_20Rnd_762x51_B_M14"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_20Rnd_762x51_B_M14", "hlc_20Rnd_762x51_B_M14", "hlc_20Rnd_762x51_B_M14"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Here's vehicles with crews changed to reflect the ones from the factions we made
		
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
		
		//Opfor Vehicles
		
		/*extern*/ class CUP_C_Ural_Open_Civ_01;
		
		class CUP_C_Ural_Open_Civ_custom : CUP_C_Ural_Open_Civ_01 {
		crew = "Opfor_Soldier_1";
		};
		
		/*extern*/ class CUP_C_LR_Transport_CTK;
		
		class CUP_C_LR_Transport_CTK_custom : CUP_C_LR_Transport_CTK {
		crew = "Opfor_Soldier_1";
		};
		
		/*extern*/ class CUP_I_BTR40_TKG;
		
		class CUP_I_BTR40_TKG_custom : CUP_I_BTR40_TKG {
		crew = "Opfor_Soldier_1";
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
	
class RH_M27IAR_des;

	class RH_M27IAR_des_sighted : RH_M27IAR_des
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
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
	
class RH_M4A1_ris_M203s;

	class RH_M4A1_ris_M203s_sighted : RH_M4A1_ris_M203s
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
	
class rhs_weap_m4a1_blockII_M203;

	class rhs_weap_m4a1_blockII_M203_sighted : rhs_weap_m4a1_blockII_M203
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
	
class rhs_weap_m4a1_carryhandle_m203;

	class rhs_weap_m4a1_carryhandle_m203_sighted : rhs_weap_m4a1_carryhandle_m203
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
	
class rhs_weap_m240B_CAP;

	class rhs_weap_m240B_CAP_sighted : rhs_weap_m240B_CAP
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
			class LinkedItemsBipod
			{
				slot = "MuzzleSlot";
				item = "RH_hbsd";
			};
		};
	};	
	
};


/////Groups
class CfgGroups
{
	class West {
		
		class BLU_DUWS {
			name = "BLU_DUWS";
			
			class Infantry {
				name = "Infantry";
				
				class BUS_InfSquad {
					name = "Rifle Squad";
					side = 1;
					faction = "BLU_DUWS";
					
					class Unit0
					{
						side = 1;
						vehicle = "Blufor_SquadLeader_1";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "Blufor_TeamLeader_1";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "Blufor_Autorifleman_1";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "Blufor_Autorifleman_1";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "Blufor_Assistant_Autorifleman_1";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "Blufor_AntiTank_1";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "Blufor_Medic_1";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "Blufor_Ammobearer_1";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class BUS_InfSquad_Weapons
				{
					name = "Weapons Squad";
					side = 1;
					faction = "BLU_DUWS";
					class Unit0
					{
						side = 1;
						vehicle = "Blufor_SquadLeader_1";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "Blufor_Autorifleman_1";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "Blufor_Assistant_Autorifleman_1";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "Blufor_AntiTank_1";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "Blufor_Assistant_AntiTank_1";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "Blufor_Ammobearer_1";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "Blufor_Soldier_3";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "Blufor_Medic_1";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class BUS_InfTeam
				{
					name = "Fire Team";
					side = 1;
					faction = "BLU_DUWS";
					class Unit0
					{
						side = 1;
						vehicle = "Blufor_TeamLeader_1";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "Blufor_Autorifleman_1";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "Blufor_Grenadier_1";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "Blufor_Light_AntiTank_1";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class BUS_InfTeam_AT
				{
					name = "Anti-armor Team";
					side = 1;
					faction = "BLU_DUWS";
					class Unit0
					{
						side = 1;
						vehicle = "Blufor_TeamLeader_1";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "Blufor_AntiTank_1";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "Blufor_AntiTank_1";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "Blufor_Assistant_AntiTank_1";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class BUS_InfTeam_AA
				{
					name = "Air-Defense Team";
					side = 1;
					faction = "BLU_DUWS";
					class Unit0
					{
						side = 1;
						vehicle = "Blufor_TeamLeader_1";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "Blufor_AntiAir_1";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "Blufor_AntiAir_1";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "Blufor_Assistant_AntiAir_1";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class BUS_ReconTeam
				{
					name = "Recon Team";
					side = 1;
					faction = "BLU_DUWS";
					class Unit0
					{
						side = 1;
						vehicle = "Blufor_Recon_TL_1";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "Blufor_Recon_Marksman_1";
						rank = "CORPORAL";
						position[] = {5,-2,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "Blufor_Recon_medic_1_F";
						rank = "PRIVATE";
						position[] = {-5,-2,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "Blufor_Recon_1";
						rank = "CORPORAL";
						position[] = {10,-5,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "Blufor_Recon_lat_1";
						rank = "PRIVATE";
						position[] = {-10,-5,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "Blufor_Recon_JTAC_1";
						rank = "PRIVATE";
						position[] = {15,-9,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "Blufor_Recon_TL_1";
						rank = "PRIVATE";
						position[] = {-15,-9,0};
					};
				};
				class BUS_ReconPatrol
				{
					name = "Recon Patrol";
					side = 1;
					faction = "BLU_DUWS";
					class Unit0
					{
						side = 1;
						vehicle = "Blufor_Recon_TL_1";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "Blufor_Recon_Marksman_1";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "Blufor_Recon_medic_1_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "Blufor_Recon_1";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class BUS_SniperTeam
				{
					name = "Sniper Team";
					side = 1;
					faction = "BLU_DUWS";
					class Unit1
					{
						side = 1;
						vehicle = "Blufor_Sniper_1";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "Blufor_Spotter_1";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
			};
			class SpecOps {
				name = "Special Forces";

				class BUS_DiverTeam {
					name = "Diver Team";
					side = 1;
					faction = "BLU_DUWS";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "Blufor_Diver_Teamleader_1";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1 {
						side = 1;
						vehicle = "Blufor_Diver_exp_1";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
					class Unit2 {
						side = 1;
						vehicle = "Blufor_Diver_1";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3 {
						side = 1;
						vehicle = "Blufor_Diver_1";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
				};
			};
			class Support {
				name = "Support Infantry";
				
				class BUS_Support_CLS {
					name = "Support Team (CLS)";
					side = 1;
					faction = "BLU_DUWS";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "Blufor_TeamLeader_1";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1 {
						side = 1;
						vehicle = "Blufor_Autorifleman_1";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};
					class Unit2 {
						side = 1;
						vehicle = "Blufor_Medic_1";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};
					class Unit3 {
						side = 1;
						vehicle = "Blufor_Medic_1";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
				};
			};
			class Motorized {
				name = "Motorized Infantry";

				class BUS_MotInf_Team {
					name = "Motorized Team";
					side = 1;
					faction = "BLU_DUWS";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "CUP_B_HMMWV_M2_GPK_USA_custom";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};
					class Unit1 {
						side = 1;
						vehicle = "Blufor_Autorifleman_1";
						rank = "CORPORAL";
						position[] = {-12, -12, 0};
					};
					class Unit2 {
						side = 1;
						vehicle = "Blufor_Light_AntiTank_1";
						rank = "PRIVATE";
						position[] = {14, -13, 0};
					};
				};
			};
			class Mechanized {
				name = "Mechanized Infantry";

				class BUS_MechInfSquad {
					name = "Mechanized Rifle Squad";
					side = 1;
					faction = "BLU_DUWS";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0 {
						side = 1;
						vehicle = "RHS_M2A2_BUSKI_custom";
						rank = "LIEUTENANT";
						position[] = {0, 0, 0};
					};
					class Unit1 {
						side = 1;
						vehicle = "Blufor_SquadLeader_1";
						rank = "SERGEANT";
						position[] = {-12, -12, 0};
					};
					class Unit2 {
						side = 1;
						vehicle = "Blufor_Soldier_2";
						rank = "PRIVATE";
						position[] = {13, -14, 0};
					};
					class Unit3 {
						side = 1;
						vehicle = "Blufor_Light_AntiTank_1";
						rank = "CORPORAL";
						position[] = {18, -19, -2};
					};
					class Unit4 {
						side = 1;
						vehicle = "Blufor_Marksman_1";
						rank = "PRIVATE";
						position[] = {-19, -19, -2};
					};
					class Unit5 {
						side = 1;
						vehicle = "Blufor_TeamLeader_1";
						rank = "SERGEANT";
						position[] = {23, -24, -3};
					};
					class Unit6 {
						side = 1;
						vehicle = "Blufor_Autorifleman_1";
						rank = "CORPORAL";
						position[] = {-24, -23, -2};
					};
					class Unit7 {
						side = 1;
						vehicle = "Blufor_Ammobearer_1";
						rank = "PRIVATE";
						position[] = {29, -29, -3};
					};
					class Unit8 {
						side = 1;
						vehicle = "Blufor_Medic_1";
						rank = "PRIVATE";
						position[] = {-29, -28, -2};
					};
				};
				class BUS_MechInf_AT {
					name = "Mechanized Rifle Squad";
					side = 1;
					faction = "BLU_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

					class Unit0 {
						side = 1;
						vehicle = "CUP_B_MCV80_GB_D_SLAT_custom";
						rank = "LIEUTENANT";
						position[] = {0, 0, 0};
					};

					class Unit1 {
						side = 1;
						vehicle = "Blufor_SquadLeader_1";
						rank = "SERGEANT";
						position[] = {-13, -12, 0};
					};

					class Unit2 {
						side = 1;
						vehicle = "Blufor_Autorifleman_1";
						rank = "CORPORAL";
						position[] = {13, -14, 0};
					};

					class Unit3 {
						side = 1;
						vehicle = "Blufor_AntiTank_1";
						rank = "PRIVATE";
						position[] = {18, -19, 0};
					};

					class Unit4 {
						side = 1;
						vehicle = "Blufor_AntiTank_1";
						rank = "PRIVATE";
						position[] = {-19, -18, -1};
					};

					class Unit5 {
						side = 1;
						vehicle = "Blufor_AntiTank_1";
						rank = "SERGEANT";
						position[] = {23, -24, 1};
					};

					class Unit6 {
						side = 1;
						vehicle = "Blufor_Assistant_AntiTank_1";
						rank = "CORPORAL";
						position[] = {-23, -23, 0};
					};

					class Unit7 {
						side = 1;
						vehicle = "Blufor_Assistant_AntiTank_1";
						rank = "PRIVATE";
						position[] = {28, -29, 1};
					};

					class Unit8 {
						side = 1;
						vehicle = "Blufor_Assistant_AntiTank_1";
						rank = "PRIVATE";
						position[] = {-29, -28, 0};
					};
				};
			};
			class Armored {
				name = "Armor";

				class BUS_TankSection {
					name = "Tank Section";
					side = 1;
					faction = "BLU_DUWS";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0 {
						side = 1;
						vehicle = "rhsusf_m1a2sep1tuskid_usarmy_custom";
						rank = "LIEUTENANT";
						position[] = {0, 0, 0};
					};
					class Unit1 {
						side = 1;
						vehicle = "rhsusf_m1a2sep1tuskid_usarmy_custom";
						rank = "SERGEANT";
						position[] = {20, -30, 0};
					};
				};
				class BUS_TankPlatoon_AA {
					name = "Tank Platoon (Combined)";
					side = 1;
					faction = "BLU_DUWS";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0 {
						side = 1;
						vehicle = "rhsusf_m1a2sep1tuskid_usarmy_custom";
						rank = "LIEUTENANT";
						position[] = {0, 0, 0};
					};
					class Unit1 {
						side = 1;
						vehicle = "I_mas_cars_LR_soft_Stinger_custom";
						rank = "SERGEANT";
						position[] = {20, -30, 0};
					};
					class Unit2 {
						side = 1;
						vehicle = "rhsusf_m1a2sep1tuskid_usarmy_custom";
						rank = "SERGEANT";
						position[] = {-20, -30, 0};
					};
					class Unit3 {
						side = 1;
						vehicle = "I_mas_cars_LR_soft_Stinger_custom";
						rank = "CORPORAL";
						position[] = {-40, -60, 2};
					};
				};
			};
		};
	};
	
	class East {

		class OPFOR_DUWS {
			name = "OPFOR_DUWS";

			class Infantry {
				name = "Infantry";

				class OIA_InfSquad {
					name = "Rifle Squad";
					side = 0;
					faction = "OPFOR_DUWS";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

					class Unit0 {
						side = 0;
						vehicle = "Opfor_SquadLeader_1";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};

					class Unit1 {
						side = 0;
						vehicle = "Opfor_Soldier_1";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};

					class Unit2 {
						side = 0;
						vehicle = "Opfor_Light_AntiTank_1";
						rank = "CORPORAL";
						position[] = {-5, -5, 0};
					};

					class Unit3 {
						side = 0;
						vehicle = "Opfor_Marksman_1";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};

					class Unit4 {
						side = 0;
						vehicle = "Opfor_TeamLeader_1";
						rank = "SERGEANT";
						position[] = {-10, -10, 0};
					};

					class Unit5 {
						side = 0;
						vehicle = "Opfor_Autorifleman_1";
						rank = "CORPORAL";
						position[] = {15, -15, 0};
					};

					class Unit6 {
						side = 0;
						vehicle = "Opfor_Ammoholder_1";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
					};

					class Unit7 {
						side = 0;
						vehicle = "Opfor_Medic_1";
						rank = "PRIVATE";
						position[] = {20, -20, 0};
					};
				};

				class OIA_InfSquad_Weapons {
					name = "Weapon Squad";
					side = 0;
					faction = "OPFOR_DUWS";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

					class Unit0 {
						side = 0;
						vehicle = "Opfor_SquadLeader_1";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};

					class Unit1 {
						side = 0;
						vehicle = "Opfor_Autorifleman_1";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
					};

					class Unit2 {
						side = 0;
						vehicle = "Opfor_Grenadier_1";
						rank = "CORPORAL";
						position[] = {-5, -5, 0};
					};

					class Unit3 {
						side = 0;
						vehicle = "Opfor_Marksman_1";
						rank = "SERGEANT";
						position[] = {10, -10, 0};
					};

					class Unit4 {
						side = 0;
						vehicle = "Opfor_AntiTank_1";
						rank = "CORPORAL";
						position[] = {-10, -10, 0};
					};

					class Unit6 {
						side = 0;
						vehicle = "Opfor_Assistant_AntiTank_1";
						rank = "PRIVATE";
						position[] = {15, -15, 0};
					};

					class Unit5 {
						side = 0;
						vehicle = "Opfor_Ammoholder_1";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
					};

					class Unit7 {
						side = 0;
						vehicle = "Opfor_Medic_1";
						rank = "PRIVATE";
						position[] = {20, -20, 0};
					};
				};

				class OIA_InfTeam {
					name = "Fire Team";
					side = 0;
					faction = "OPFOR_DUWS";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

					class Unit0 {
						side = 0;
						vehicle = "Opfor_TeamLeader_1";
						rank = "SERGEANT";
						position[] = {0, 0, 0};
					};

					class Unit1 {
						side = 0;
						vehicle = "Opfor_Autorifleman_1";
						rank = "CORPORAL";
						position[] = {5, -5, 0};
					};

					class Unit2 {
						side = 0;
						vehicle = "Opfor_Grenadier_1";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
					};

					class Unit3 {
						side = 0;
						vehicle = "Opfor_Light_AntiTank_1";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
					};
				};
			};
			class Mechanized {
				name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized0";

				class OIA_MechInfSquad {
					name = "Mechanized Rifle Squad";
					side = 0;
					faction = "OPFOR_DUWS";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";

					class Unit0 {
						side = 0;
						vehicle = "CUP_C_Ural_Open_Civ_custom";
						rank = "LIEUTENANT";
						position[] = {0, 0, 0};
					};

					class Unit1 {
						side = 0;
						vehicle = "Opfor_SquadLeader_1";
						rank = "SERGEANT";
						position[] = {-12, -12, 0};
					};

					class Unit2 {
						side = 0;
						vehicle = "Opfor_Soldier_1";
						rank = "PRIVATE";
						position[] = {14, -13, 0};
					};

					class Unit3 {
						side = 0;
						vehicle = "Opfor_Light_AntiTank_1";
						rank = "CORPORAL";
						position[] = {18, -18, 0};
					};

					class Unit4 {
						side = 0;
						vehicle = "Opfor_Marksman_1";
						rank = "PRIVATE";
						position[] = {-18, -18, 0};
					};

					class Unit5 {
						side = 0;
						vehicle = "Opfor_TeamLeader_1";
						rank = "SERGEANT";
						position[] = {23, -23, 0};
					};

					class Unit6 {
						side = 0;
						vehicle = "Opfor_Autorifleman_1";
						rank = "CORPORAL";
						position[] = {-23, -23, 0};
					};

					class Unit7 {
						side = 0;
						vehicle = "Opfor_Ammoholder_1";
						rank = "PRIVATE";
						position[] = {28, -28, 0};
					};

					class Unit8 {
						side = 0;
						vehicle = "Opfor_Medic_1";
						rank = "PRIVATE";
						position[] = {-28, -28, 0};
					};
				};

				class OIA_MechInf_AT {
					name = "Mechanized Rifle Squad";
					side = 0;
					faction = "OPFOR_DUWS";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";

					class Unit0 {
						side = 0;
						vehicle = "CUP_C_LR_Transport_CTK_custom";
						rank = "LIEUTENANT";
						position[] = {0, 0, 0};
					};

					class Unit1 {
						side = 0;
						vehicle = "Opfor_SquadLeader_1";
						rank = "SERGEANT";
						position[] = {-12, -17, 0};
					};

					class Unit2 {
						side = 0;
						vehicle = "Opfor_Autorifleman_1";
						rank = "CORPORAL";
						position[] = {14, -18, 0};
					};

					class Unit3 {
						side = 0;
						vehicle = "Opfor_AntiTank_1";
						rank = "PRIVATE";
						position[] = {19, -23, 0};
					};

					class Unit4 {
						side = 0;
						vehicle = "Opfor_AntiTank_1";
						rank = "PRIVATE";
						position[] = {-18, -23, 0};
					};

					class Unit5 {
						side = 0;
						vehicle = "Opfor_AntiTank_1";
						rank = "SERGEANT";
						position[] = {24, -28, 0};
					};

					class Unit6 {
						side = 0;
						vehicle = "Opfor_Assistant_AntiTank_1";
						rank = "CORPORAL";
						position[] = {-23, -28, 0};
					};

					class Unit7 {
						side = 0;
						vehicle = "Opfor_Assistant_AntiTank_1";
						rank = "PRIVATE";
						position[] = {29, -33, 0};
					};

					class Unit8 {
						side = 0;
						vehicle = "Opfor_Assistant_AntiTank_1";
						rank = "PRIVATE";
						position[] = {-28, -33, 0};
					};
				};
			};
		};
	};	
};
