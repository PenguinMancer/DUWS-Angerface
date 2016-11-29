/*extern*/ class DefaultEventhandlers;

class CfgPatches {
	class unit_config {
		units[] = {"Blufor_General", "Blufor_Soldier_1", "Blufor_Soldier_2", "Blufor_Soldier_3", "Blufor_Soldier_4", "Blufor_TeamLeader_1", "Blufor_TeamLeader_2", "Blufor_SquadLeader_1", "Blufor_SquadLeader_2", "Blufor_Light_AntiTank_1", "Blufor_Light_AntiTank_2", "Blufor_Grenadier_1", "Blufor_Grenadier_2", "Blufor_Autorifleman_1", "Blufor_Assistant_Autorifleman_1", "Blufor_Medic_1", "Blufor_Ammobearer_1", "Blufor_AntiTank_1", "Blufor_Assistant_AntiTank_1", "Blufor_AntiAir_1", "Blufor_Assistant_AntiAir_1", "Blufor_Repair_1"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F", "A3_Characters_F", "A3_Characters_F_BLUFOR", "A3_Characters_F_OPFOR", "A3_Characters_F_Civil", "A3_Characters_F_INDEP", "a3_characters_f_beta"};
	};
};

class CfgWorlds {
	class GenericNames {
		class DUWS_Blu_Names {
			class FirstNames {
				Ivan = "Ivan";
				Yuri = "Yuri";
				Cheeki = "Cheeki";
				Artyom = "Artyom";
				Artem = "Artem";
				Alexandru = "Alexandru";
				Dmitry = "Dmitry";
				Mikhail = "Mikhail";
				Jakub = "Jakub";
				Mijai = "Mijai";
				Stefan = "Stefan";
				Bob = "Bob";
				Abram = "Abram";
				Demyan = "Demyan";
				Dima = "Dima";
				Egor = "Egor";
				Bogdan = "Bogdan";
				Ermola = "Ermola";
			};
			class LastNames {
				Kalashnik = "Kalashnik";
				Denisov = "Denisov";
				Zavyalov = "Zavyalov";
				Vavilov = "Vavilov";
				Osokin = "Osokin";
				Cherepanov = "Cherepanov";
				Titov = "Titov";
				Smirnov = "Smirnov";
				Pavlov = "Pavlov";
				Kozlov = "Kozlov";
				Nikolaev = "Nikolaev";
				Orlov = "Orlov";
				Loshchilov = "Loshchilov";
				ivanovski = "ivanovski"; //I would love for it to at least once be ivan ivanovski
				Breeki = "Breeki"; //Or be cheeki breeki
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
				Andropov = "Andropov";
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
		side = 1; // 1 Blufor 2 opfor 3 independant i think.
		icon = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
	};
	class OPFOR_DUWS //Faction Calling Name
	{
		displayName = "OPFOR_DUWS"; //Faction name in-game
		priority = 3; //How far down it is on the menu
		side = 0; // 1 Blufor 2 opfor 3 independant i think.
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
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot" , "ACE_packingBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_morphine", "ACE_atropine", "ACE_epinephrine", "ACE_Flashlight_MX991"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot" , "ACE_packingBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_morphine", "ACE_atropine", "ACE_epinephrine", "ACE_Flashlight_MX991"};
		};
		
		
		//Blufor General
		
		class Blufor_General : B_DUWS_base_F  {
		_generalMacro = "Blufor_General"; 
		scope = 2;
		displayName = "General Andropov"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		genericNames = "DUWS_General_Name";
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_OD_BLK";  // Uniform Class
		backpack = ""; // Backpack Class
		linkedItems[] = {"TRYK_V_Sheriff_BA_TBL", "H_Beret_02", "G_Aviator"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_Sheriff_BA_TBL", "H_Beret_02", "G_Aviator"}; // Item's added to the unit. Should be identical to the linkedItems section.
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
		displayName = "Spetznaz Soldier"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TFA_dou_white_rs";  // Uniform Class
		backpack = "B_mas_AssaultPack_black"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_blk", "TFA_FAST_DOU", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_blk", "TFA_FAST_DOU", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"arifle_mas_ak74", "hgun_P07_F"}; // Weapons added to the unit.
		respawnweapons[] = {"arifle_mas_ak74", "hgun_P07_F"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Blufor_Soldier_2 : Blufor_Soldier_1  {
		_generalMacro = "Blufor_Soldier_2"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak12", "hgun_P07_F"}; // Weapons added to the unit.
		respawnweapons[] = {"arifle_mas_ak74", "hgun_P07_F"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Blufor_Soldier_3 : Blufor_Soldier_1  {
		_generalMacro = "Blufor_Soldier_3"; 
		scope = 2;
		weapons[] = {"arifle_mas_ak74", "RH_gsh18"}; // Weapons added to the unit.
		respawnweapons[] = {"arifle_mas_ak74", "RH_gsh18"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit upon respawn, should be the 
		};
		
		class Blufor_Soldier_4 : Blufor_Soldier_2  {
		_generalMacro = "Blufor_Soldier_4"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak12", "RH_gsh18"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak12", "RH_gsh18"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit upon respawn, should be the 
		};
		
		//Blufor Team Leader
		
		class Blufor_TeamLeader_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_TeamLeader_1"; 
		scope = 2;
		displayName = "Spetznaz Squad Leader"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_Snowt";  // Uniform Class
		backpack = "B_mas_m_Bergen_us_b"; // Backpack Class
		linkedItems[] = {"TFA_PlateCarrierH_Black", "H_Bandanna_gry", "TRYK_Beard_Gr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS","TRYK_Shemagh_EAR_WH_NV"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TFA_PlateCarrierH_Black", "H_Bandanna_gry", "TRYK_Beard_Gr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS","TRYK_Shemagh_EAR_WH_NV"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_ak12", "RH_gsh18"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak12", "RH_gsh18"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Blufor_TeamLeader_2 : B_DUWS_base_F  {
		_generalMacro = "Blufor_TeamLeader_2"; 
		scope = 2;
		displayName = "Spetznaz Squad Leader"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_Snowt";  // Uniform Class
		backpack = "B_mas_m_Bergen_us_b"; // Backpack Class
		linkedItems[] = {"TFA_PlateCarrierH_Black", "TFA_FAST_DOU", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS","ACE_Altimeter","TRYK_Shemagh_EAR_WH_NV"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TFA_PlateCarrierH_Black", "TFA_FAST_DOU", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS","ACE_Altimeter","TRYK_Shemagh_EAR_WH_NV"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_ak12", "RH_gsh18"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak12", "RH_gsh18"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "HandGrenade", "HandGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "HandGrenade", "HandGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit upon respawn, should be the same as above.		
		};
		
		//Blufor Squad Leader
		
		class Blufor_SquadLeader_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_SquadLeader_1"; 
		scope = 2;
		displayName = "Spetznaz Squad Leader"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_Snowt";  // Uniform Class
		backpack = "B_mas_m_Bergen_us_b"; // Backpack Class
		linkedItems[] = {"TFA_PlateCarrierH_Black", "H_Bandanna_gry", "TRYK_Beard_Gr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS","TRYK_Shemagh_EAR_WH_NV"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TFA_PlateCarrierH_Black", "H_Bandanna_gry", "TRYK_Beard_Gr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS","TRYK_Shemagh_EAR_WH_NV"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_ak12", "RH_gsh18"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak12", "RH_gsh18"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Blufor_SquadLeader_2 : B_DUWS_base_F  {
		_generalMacro = "Blufor_SquadLeader_2"; 
		scope = 2;
		displayName = "Spetznaz Squad Leader"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_Snowt";  // Uniform Class
		backpack = "B_mas_m_Bergen_us_b"; // Backpack Class
		linkedItems[] = {"TFA_PlateCarrierH_Black", "TFA_FAST_DOU", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS","ACE_Altimeter","TRYK_Shemagh_EAR_WH_NV"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TFA_PlateCarrierH_Black", "TFA_FAST_DOU", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS","ACE_Altimeter","TRYK_Shemagh_EAR_WH_NV"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_ak12", "RH_gsh18"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak12", "RH_gsh18"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "HandGrenade", "HandGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "HandGrenade", "HandGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit upon respawn, should be the same as above.		
		};
		
		//Blufor Anti Tank Rifleman
		
		class Blufor_Light_AntiTank_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Light_AntiTank_1"; 
		scope = 2;
		displayName = "Spetznaz Anti Tank Rifleman"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TFA_dou_white_rs";  // Uniform Class
		backpack = "B_mas_m_Bergen_us_w"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_blk", "TRYK_H_headsetcap_blk", "TRYK_shoulder_armor_BK", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_blk", "TRYK_H_headsetcap_blk", "TRYK_shoulder_armor_BK", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_aku12", "RH_gsh18", "launch_RPG32_F"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aku12", "RH_gsh18", "launch_RPG32_F"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "RPG32_F", "HandGrenade", "HandGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "RPG32_F", "HandGrenade", "HandGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit upon respawn, should be the same as above.		
		};
		
		class Blufor_Light_AntiTank_2 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Light_AntiTank_2"; 
		scope = 2;
		displayName = "Spetznaz Anti Tank Rifleman"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TFA_dou_white_rs";  // Uniform Class
		backpack = "B_mas_m_Bergen_us_w"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_blk", "TRYK_H_headsetcap_blk", "TRYK_shoulder_armor_BK", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_blk", "TRYK_H_headsetcap_blk", "TRYK_shoulder_armor_BK", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_aku12", "hgun_Rook40_F", "launch_RPG32_F"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aku12", "hgun_Rook40_F", "launch_RPG32_F"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "RPG32_F", "HandGrenade", "HandGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "RPG32_F", "HandGrenade", "HandGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"}; //Magazines added to the unit upon respawn, should be the same as above.		
		};
		
		//Blufor Grenadier
		
		class Blufor_Grenadier_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Grenadier_1"; 
		scope = 2;
		displayName = "Spetznaz Grenadier"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TFA_dou_white_rs";  // Uniform Class
		backpack = "B_mas_AssaultPack_black"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_blk", "H_Beret_blk", "PU_shemagh_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "TRYK_Shemagh_WH_NV"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_blk", "H_Beret_blk", "PU_shemagh_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "TRYK_Shemagh_WH_NV"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_ak12GL", "hgun_Rook40_F"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak12GL", "hgun_Rook40_F"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_VOG25_AK", "hlc_VOG25_AK", "hlc_VOG25_AK", "HandGrenade", "HandGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_VOG25_AK", "hlc_VOG25_AK", "hlc_VOG25_AK", "HandGrenade", "HandGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"}; //Magazines added to the unit upon respawn, should be the same as above.		
		};
		
		class Blufor_Grenadier_2 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Grenadier_2"; 
		scope = 2;
		displayName = "Spetznaz Grenadier"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TFA_dou_white_rs";  // Uniform Class
		backpack = "B_mas_AssaultPack_black"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_blk", "H_Beret_blk", "PU_shemagh_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "TRYK_Shemagh_WH_NV"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_blk", "H_Beret_blk", "PU_shemagh_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "TRYK_Shemagh_WH_NV"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_ak12GL", "RH_cmore"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak12GL", "RH_cmore"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_VOG25_AK", "hlc_VOG25_AK", "hlc_VOG25_AK", "HandGrenade", "HandGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_VOG25_AK", "hlc_VOG25_AK", "hlc_VOG25_AK", "HandGrenade", "HandGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak"}; //Magazines added to the unit upon respawn, should be the same as above.		
		};
		
		//Blufor Autorifleman
		
		class Blufor_Autorifleman_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Autorifleman_1"; 
		scope = 2;
		displayName = "Spetznaz Autorifleman"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TFA_dou_white_rs";  // Uniform Class
		backpack = "B_mas_m_Bergen_acr_w"; // Backpack Class
		linkedItems[] = {"rhs_balaclava", "TFA_FAST_DOU", "TRYK_V_Sheriff_BA_TB", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "O_UavTerminal"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhs_balaclava", "TFA_FAST_DOU", "TRYK_V_Sheriff_BA_TB", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "O_UavTerminal"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_RPK12", "hgun_Rook40_F"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_RPK12", "hgun_Rook40_F"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_45Rnd_545x39_t_rpk", "hlc_45Rnd_545x39_t_rpk", "hlc_45Rnd_545x39_t_rpk", "HandGrenade", "HandGrenade", "Chemlight_red", "ACE_HandFlare_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_45Rnd_545x39_t_rpk", "hlc_45Rnd_545x39_t_rpk", "hlc_45Rnd_545x39_t_rpk", "HandGrenade", "HandGrenade", "Chemlight_red", "ACE_HandFlare_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Assistant Autorifleman
		
		class Blufor_Assistant_Autorifleman_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Assistant_Autorifleman_1"; 
		scope = 2;
		displayName = "Spetznaz Assistant Autorifleman"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TFA_dou_white_rs";  // Uniform Class
		backpack = "B_mas_AssaultPack_black"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_blk", "TFA_FAST_DOU", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_blk", "TFA_FAST_DOU", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"arifle_mas_ak74", "hgun_P07_F"}; // Weapons added to the unit.
		respawnweapons[] = {"arifle_mas_ak74", "hgun_P07_F"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "100Rnd_mas_762x54_T_mag", "100Rnd_mas_762x54_T_mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "100Rnd_mas_762x54_T_mag", "100Rnd_mas_762x54_T_mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Medic
		
		class Blufor_Medic_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Medic_1"; 
		scope = 2;
		displayName = "Spetznaz Medic"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "U_O_CombatUniform_oucamo";  // Uniform Class
		backpack = "TRYK_B_Carryall_wh"; // Backpack Class
		linkedItems[] = {"TRYK_V_ArmorVest_Winter", "TRYK_H_Helmet_Winter_2", "Shemagh_Face", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_Winter", "TRYK_H_Helmet_Winter_2", "Shemagh_Face", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_morphine", "ACE_morphine", "ACE_atropine", "ACE_epinephrine", "ACE_plasmaIV", "ACE_bloodIV", "ACE_salineIV", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_surgicalKit"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_morphine", "ACE_morphine", "ACE_atropine", "ACE_epinephrine", "ACE_plasmaIV", "ACE_bloodIV", "ACE_salineIV", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_surgicalKit"};
		weapons[] = {"arifle_mas_aks74u", "RH_gsh18"}; // Weapons added to the unit.
		respawnweapons[] = {"arifle_mas_aks74u", "RH_gsh18"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Ammo Bearer
		
		class Blufor_Ammobearer_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Ammobearer_1"; 
		scope = 2;
		displayName = "Spetznaz AmmoBearer"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TFA_dou_white_rs";  // Uniform Class
		backpack = "B_mas_AssaultPack_black"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_blk", "TFA_FAST_DOU", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_blk", "TFA_FAST_DOU", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"arifle_mas_ak74", "hgun_P07_F"}; // Weapons added to the unit.
		respawnweapons[] = {"arifle_mas_ak74", "hgun_P07_F"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Missile Specialist (AT)
		
		class Blufor_AntiTank_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_AntiTank_1"; 
		scope = 2;
		displayName = "Spetznaz Missile Specialist"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TFA_dou_white_rs";  // Uniform Class
		backpack = "B_mas_m_Bergen_us_w"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_blk", "TRYK_H_headsetcap_blk", "TRYK_shoulder_armor_BK", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_blk", "TRYK_H_headsetcap_blk", "TRYK_shoulder_armor_BK", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_ak12", "RH_gsh18", "launch_RPG32_F"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aku12", "RH_gsh18", "launch_RPG32_F"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "RPG32_F", "HandGrenade", "HandGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "RPG32_F", "HandGrenade", "HandGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit upon respawn, should be the same as above.		
		};
		
		class Blufor_AntiTank_2 : B_DUWS_base_F  {
		_generalMacro = "Blufor_AntiTank_2"; 
		scope = 2;
		displayName = "Spetznaz Missile Specialist"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TFA_dou_white_rs";  // Uniform Class
		backpack = "B_mas_m_Bergen_us_w"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_blk", "TRYK_H_headsetcap_blk", "TRYK_shoulder_armor_BK", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_blk", "TRYK_H_headsetcap_blk", "TRYK_shoulder_armor_BK", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_ak12", "hgun_P07_F", "launch_RPG32_F"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aku12", "hgun_P07_F", "launch_RPG32_F"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "RPG32_F", "HandGrenade", "HandGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "RPG32_F", "HandGrenade", "HandGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"}; //Magazines added to the unit upon respawn, should be the same as above.		
		};
		
		//Blufor Assistant Missile Specialist (AT)
		
		class Blufor_Assistant_AntiTank_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Assistant_AntiTank_1"; 
		scope = 2;
		displayName = "Spetznaz Asst. Missile Specialist"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TFA_dou_white_rs";  // Uniform Class
		backpack = "B_mas_AssaultPack_black"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_blk", "TFA_FAST_DOU", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_blk", "TFA_FAST_DOU", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"arifle_mas_ak74", "hgun_P07_F"}; // Weapons added to the unit.
		respawnweapons[] = {"arifle_mas_ak74", "hgun_P07_F"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "RPG32_F"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "RPG32_F"}; //Magazines added to the unit upon respawn, should be the same as above.	
		};
		
		//Blufor Missile Specialist (AA)
		
		class Blufor_AntiAir_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_AntiAir_1"; 
		scope = 2;
		displayName = "Spetznaz Missile Specialist (AA)"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TFA_dou_white_rs";  // Uniform Class
		backpack = "B_mas_m_Bergen_us_w"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_blk", "TRYK_H_headsetcap_blk", "TRYK_shoulder_armor_BK", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_blk", "TRYK_H_headsetcap_blk", "TRYK_shoulder_armor_BK", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_ak12", "RH_gsh18", "launch_RPG32_F"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aku12", "RH_gsh18", "launch_RPG32_F"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "RPG32_F", "HandGrenade", "HandGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "RPG32_F", "HandGrenade", "HandGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit upon respawn, should be the same as above.		
		};
		
		//Blufor Assistant Missile Specialist (AA)
		
		class Blufor_Assistant_AntiAir_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Assistant_AntiAir_1"; 
		scope = 2;
		displayName = "Spetznaz Asst. Missile Specialist (AA)"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TFA_dou_white_rs";  // Uniform Class
		backpack = "B_mas_AssaultPack_black"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_blk", "TFA_FAST_DOU", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_blk", "TFA_FAST_DOU", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"arifle_mas_ak74", "hgun_P07_F"}; // Weapons added to the unit.
		respawnweapons[] = {"arifle_mas_ak74", "hgun_P07_F"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "RPG32_F"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "RPG32_F"}; //Magazines added to the unit upon respawn, should be the same as above.		
		};
		
		//Blufor Repair Specialist
		
		class Blufor_Repair_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Repair_1"; 
		scope = 2;
		displayName = "Spetznaz Repair Specialist"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TFA_white_nwu3";  // Uniform Class
		backpack = "TFA_Kitbag_wte"; // Backpack Class
		linkedItems[] = {"TRYK_V_ArmorVest_Delta2", "G_mas_wpn_gog", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_Delta2", "G_mas_wpn_gog", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_saiga12k", "RH_vz61"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_saiga12k", "RH_vz61"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_10rnd_12g_buck_S12", "hlc_10rnd_12g_buck_S12", "hlc_10rnd_12g_buck_S12", "hlc_10rnd_12g_buck_S12", "hlc_10rnd_12g_buck_S12", "HandGrenade", "HandGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_20Rnd_32cal_vz61", "RH_20Rnd_32cal_vz61", "RH_20Rnd_32cal_vz61"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_10rnd_12g_buck_S12", "hlc_10rnd_12g_buck_S12", "hlc_10rnd_12g_buck_S12", "hlc_10rnd_12g_buck_S12", "hlc_10rnd_12g_buck_S12", "HandGrenade", "HandGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_20Rnd_32cal_vz61", "RH_20Rnd_32cal_vz61", "RH_20Rnd_32cal_vz61"}; //Magazines added to the unit upon respawn, should be the same as above.		
		};
		
		//Blufor Marksman
		
		class Blufor_Marksman_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Marksman_1"; 
		scope = 2;
		displayName = "Spetznaz Marksman"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_fleece_UCP";  // Uniform Class
		backpack = "B_AssaultPack_blk"; // Backpack Class
		linkedItems[] = {"H_Bandanna_sgg", "G_Shades_Blue", "TRYK_V_Sheriff_BA_TB", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"H_Bandanna_sgg", "G_Shades_Blue", "TRYK_V_Sheriff_BA_TB", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"srifle_mas_m91_l", "RH_gsh18", "Trixie_Rangefinder_Tripod"}; // Weapons added to the unit.
		respawnweapons[] = {"srifle_mas_m91_l", "RH_gsh18", "Trixie_Rangefinder_Tripod"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"10Rnd_mas_762x54_mag", "10Rnd_mas_762x54_mag", "10Rnd_mas_762x54_mag", "10Rnd_mas_762x54_mag", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit.
		Respawnmagazines[] = {"10Rnd_mas_762x54_mag", "10Rnd_mas_762x54_mag", "10Rnd_mas_762x54_mag", "10Rnd_mas_762x54_mag", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Sniper
		
		class Blufor_Sniper_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Sniper_1"; 
		scope = 2;
		displayName = "Spetznaz Sniper"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_PCUHsW5";  // Uniform Class
		backpack = "B_mas_Kitbag_wint"; // Backpack Class
		linkedItems[] = {"TRYK_V_ArmorVest_Winter", "G_mas_wpn_mask", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_Winter", "G_mas_wpn_mask", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_svds_scoped", "RH_gsh18", "Trixie_Rangefinder_Tripod"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_svds_scoped", "RH_gsh18", "Trixie_Rangefinder_Tripod"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N1", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Spotter
		
		class Blufor_Spotter_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Spotter_1"; 
		scope = 2;
		displayName = "Spetznaz Spotter"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_Snowt";  // Uniform Class
		backpack = "B_mas_AssaultPack_black"; // Backpack Class
		linkedItems[] = {"SP_Shemagh_CheckWhite", "V_PlateCarrier1_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_Shemagh_CheckWhite", "V_PlateCarrier1_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_ak12_sighted", "RH_gsh18", "Trixie_Rangefinder_Tripod"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak12_sighted", "RH_gsh18", "Trixie_Rangefinder_Tripod"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot" , "ACE_packingBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_morphine", "ACE_atropine", "ACE_epinephrine", "ACE_SpottingScope", "ACE_Tripod", "ACE_ATragMX", "ACE_DAGR", "ACE_Flashlight_MX991", "ACE_Kestrel4500"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot" , "ACE_packingBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_morphine", "ACE_atropine", "ACE_epinephrine", "ACE_SpottingScope", "ACE_Tripod", "ACE_ATragMX", "ACE_DAGR", "ACE_Flashlight_MX991", "ACE_Kestrel4500"};
		};
		
		//Blufor Explosive Specialist
		
		class Blufor_Explosives_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Explosives_1"; 
		scope = 2;
		displayName = "Spetznaz Explosive Specialist"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_PCUHsW3nh";  // Uniform Class
		backpack = "B_mas_Bergen_black"; // Backpack Class
		linkedItems[] = {"Specter_MBSS_PACA_l_BLK", "TRYK_H_woolhat", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"Specter_MBSS_PACA_l_BLK", "TRYK_H_woolhat", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_aks74", "hgun_P07_F"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74", "hgun_P07_F"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "HandGrenade", "MiniGrenade", "SmokeShellRed", "Chemlight_red", "ACE_HandFlare_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot" , "ACE_packingBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_morphine", "ACE_atropine", "ACE_epinephrine", "MineDetector", "SatchelCharge_Remote_Mag", "ClaymoreDirectionalMine_Remote_Mag", "ClaymoreDirectionalMine_Remote_Mag", "ACE_Flashlight_MX991", "ATMine_Range_Mag", "ATMine_Range_Mag", "rhs_mine_M19_mag"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot" , "ACE_packingBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_morphine", "ACE_atropine", "ACE_epinephrine", "MineDetector", "SatchelCharge_Remote_Mag", "ClaymoreDirectionalMine_Remote_Mag", "ClaymoreDirectionalMine_Remote_Mag", "ACE_Flashlight_MX991", "ATMine_Range_Mag", "ATMine_Range_Mag", "rhs_mine_M19_mag"};
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
		displayName = "Spetznaz Recon Scout"; // In-game name of unit
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
		displayName =  "Spetznaz Recon Marksman"; // In-game name of unit
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
		displayName = "Spetznaz Recon scout (AT)"; // In-game name of unit
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
		displayName = "Spetznaz Recon Explosive Specialist"; // In-game name of unit
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
		displayName = "Spetznaz Recon Medic"; // In-game name of unit
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
		magazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "ACE_HandFlare_Red", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "ACE_HandFlare_Red", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak"};  //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Recon JTAC
		
		class Blufor_Recon_JTAC_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Recon_JTAC_1"; 
		scope = 2;
		displayName = "Spetznaz Recon JTAC"; // In-game name of unit
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
		displayName = "Spetznaz Recon Team Leader"; // In-game name of unit
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
		magazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "ACE_HandFlare_Red", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "ACE_HandFlare_Red", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17"};  //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		};
		
		//Blufor Helo Pilot
		
		class Blufor_Pilot_1 : B_DUWS_base_F  {
		_generalMacro = "Blufor_Pilot_1"; 
		scope = 2;
		displayName = "Spetznaz Helo Pilot"; // In-game name of unit
		faction = "BLU_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_PCUODs";  // Uniform Class
		backpack = "B_Parachute"; // Backpack Class
		linkedItems[] = {"rhs_tsh4_ess_bala", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhs_tsh4_ess_bala", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"RH_gsh18"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_gsh18"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit.
		Respawnmagazines[] = {"RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit upon respawn, should be the same as above.
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
		uniformClass = "TRYK_U_Bts_GRYGRY_PCUs";  // Uniform Class
		backpack = "TRYK_B_Kitbag_blk"; // Backpack Class
		linkedItems[] = {"H_Watchcap_camo", "G_Bandanna_blk", "TRYK_Headset_NV", "TRYK_V_Sheriff_BA_TB", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"H_Watchcap_camo", "G_Bandanna_blk", "TRYK_Headset_NV", "TRYK_V_Sheriff_BA_TB", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_osw_GL_sight", "RH_usp", "Rangefinder"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_osw_GL_sight", "RH_usp", "Rangefinder"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_20Rnd_762x51_B_fal", "hlc_20Rnd_762x51_B_fal", "hlc_20Rnd_762x51_B_fal", "hlc_20Rnd_762x51_B_fal", "hlc_20Rnd_762x51_B_fal", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "RH_12Rnd_45cal_usp", "RH_12Rnd_45cal_usp", "RH_12Rnd_45cal_usp", "RH_12Rnd_45cal_usp", "RH_12Rnd_45cal_usp"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_20Rnd_762x51_B_fal", "hlc_20Rnd_762x51_B_fal", "hlc_20Rnd_762x51_B_fal", "hlc_20Rnd_762x51_B_fal", "hlc_20Rnd_762x51_B_fal", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "RH_12Rnd_45cal_usp", "RH_12Rnd_45cal_usp", "RH_12Rnd_45cal_usp", "RH_12Rnd_45cal_usp", "RH_12Rnd_45cal_usp"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_quikclot", "ACE_quikclot", "ACE_morphine", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_quikclot", "ACE_quikclot", "ACE_morphine", "ACE_morphine"};
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
		uniformClass = "SP_0000_Standard_PulloverUniform_NodUrban";  // Uniform Class
		backpack = "SP_Carryall_NodUrban"; // Backpack Class
		linkedItems[] = {"IP_V_PlateCarrierSpec_rgrSnowHex", "SP_Balaclava_NodUrban", "NVGoggles_mas_h", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"IP_V_PlateCarrierSpec_rgrSnowHex", "SP_Balaclava_NodUrban", "NVGoggles_mas_h", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"arifle_mas_ak12_sf_Jayme", "RH_fn57", "Rangefinder"}; // Weapons added to the unit.
		respawnweapons[] = {"arifle_mas_ak12_sf_Jayme", "RH_fn57", "Rangefinder"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "30Rnd_mas_545x39_T_mag", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN", "RH_20Rnd_57x28_FN"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_quikclot", "ACE_quikclot", "ACE_morphine", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_quikclot", "ACE_quikclot", "ACE_morphine", "ACE_morphine"};
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
		uniformClass = "TRYK_U_B_PCUHsW6";  // Uniform Class
		backpack = "B_mas_AssaultPack_wint"; // Backpack Class
		linkedItems[] = {"SP_Shemagh_White", "G_Aviator", "NVGoggles_mas_h", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_Shemagh_White", "G_Aviator", "NVGoggles_mas_h", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"Trixie_AWM338_Black_kevin", "C1987_MP7_folded_p_kevin", "Rangefinder_mas_h"}; // Weapons added to the unit.
		respawnweapons[] = {"Trixie_AWM338_Black_kevin", "C1987_MP7_folded_p_kevin", "Rangefinder_mas_h"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"Trixie_5x338_Mag", "Trixie_5x338_Mag", "Trixie_5x338_Mag", "Trixie_5x338_Mag", "Trixie_5x338_Mag", "rhs_mag_m67", "rhs_mag_m67", "C1987_40Rnd_46x30_mp7", "C1987_40Rnd_46x30_mp7", "C1987_40Rnd_46x30_mp7", "C1987_40Rnd_46x30_mp7", "C1987_40Rnd_46x30_mp7"}; //Magazines added to the unit.
		Respawnmagazines[] = {"Trixie_5x338_Mag", "Trixie_5x338_Mag", "Trixie_5x338_Mag", "Trixie_5x338_Mag", "Trixie_5x338_Mag", "rhs_mag_m67", "rhs_mag_m67", "C1987_40Rnd_46x30_mp7", "C1987_40Rnd_46x30_mp7", "C1987_40Rnd_46x30_mp7", "C1987_40Rnd_46x30_mp7", "C1987_40Rnd_46x30_mp7"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_quikclot", "ACE_quikclot", "ACE_morphine", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_quikclot", "ACE_quikclot", "ACE_morphine", "ACE_morphine"};
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
		uniformClass = "TRYK_U_B_Snowt";  // Uniform Class
		backpack = "B_mas_Kitbag_wint"; // Backpack Class
		linkedItems[] = {"SP_BaseballCap_White", "TRYK_Shemagh_ESS_WH", "TFA_NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_BaseballCap_White", "TRYK_Shemagh_ESS_WH", "TFA_NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"Trixie_AWM338_Black_hunter", "RH_usp_hunter", "Rangefinder"}; // Weapons added to the unit.
		respawnweapons[] = {"Trixie_AWM338_Black_hunter", "RH_usp_hunter", "Rangefinder"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"Trixie_5x338_Mag", "Trixie_5x338_Mag", "Trixie_5x338_Mag", "Trixie_5x338_Mag", "Trixie_5x338_Mag", "rhs_mag_m67", "rhs_mag_m67", "RH_12Rnd_45cal_usp", "RH_12Rnd_45cal_usp", "RH_12Rnd_45cal_usp", "RH_12Rnd_45cal_usp", "RH_12Rnd_45cal_usp"}; //Magazines added to the unit.
		Respawnmagazines[] = {"Trixie_5x338_Mag", "Trixie_5x338_Mag", "Trixie_5x338_Mag", "Trixie_5x338_Mag", "Trixie_5x338_Mag", "rhs_mag_m67", "rhs_mag_m67", "RH_12Rnd_45cal_usp", "RH_12Rnd_45cal_usp", "RH_12Rnd_45cal_usp", "RH_12Rnd_45cal_usp", "RH_12Rnd_45cal_usp"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_quikclot", "ACE_quikclot", "ACE_morphine", "ACE_morphine", "ToolKit"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_quikclot", "ACE_quikclot", "ACE_morphine", "ACE_morphine", "ToolKit"};
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
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_packingBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_morphine", "ACE_Flashlight_MX991"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_packingBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_morphine", "ACE_Flashlight_MX991"};
		};
		
		//Opfor Sniper and Spotter (Mission)
		
		class Opfor_Sniper_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Sniper_1"; 
		scope = 2;
		displayName = "The Finger"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		genericNames = "DUWS_Sniper_Name";
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_PCUHsW5";  // Uniform Class
		backpack = "B_FieldPack_oucamo"; // Backpack Class
		linkedItems[] = {"TRYK_G_bala_wh_NV", "TRYK_H_Booniehat_JSDF", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_G_bala_wh_NV", "TRYK_H_Booniehat_JSDF", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"Trixie_M107_Black_Scoped", "RH_mk2", "Trixie_Rangefinder_Tripod"}; // Weapons added to the unit.
		respawnweapons[] = {"Trixie_M107_Black_Scoped", "RH_mk2", "Trixie_Rangefinder_Tripod"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"Trixie_10x127_Mag", "Trixie_10x127_Mag", "Trixie_10x127_Mag", "SmokeShellRed", "SmokeShell", "SmokeShell", "RH_10Rnd_22LR_mk2", "RH_10Rnd_22LR_mk2", "RH_10Rnd_22LR_mk2"}; //Magazines added to the unit.
		Respawnmagazines[] = {"Trixie_10x127_Mag", "Trixie_10x127_Mag", "Trixie_10x127_Mag", "SmokeShell", "SmokeShell", "SmokeShell", "RH_10Rnd_22LR_mk2", "RH_10Rnd_22LR_mk2", "RH_10Rnd_22LR_mk2"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_tourniquet", "ACE_morphine", "B_mas_Kitbag_wint"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_tourniquet", "ACE_morphine", "B_mas_Kitbag_wint"};
		};
		
		class Opfor_Spotter_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Spotter_1"; 
		scope = 2;
		displayName = "The Eye"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		genericNames = "DUWS_Spotter_Name";
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_PCUHsW6";  // Uniform Class
		backpack = "TRYK_B_Coyotebackpack_WH"; // Backpack Class
		linkedItems[] = {"TRYK_G_bala_ess_NV", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_G_bala_ess_NV", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_honeybadger_custom", "RH_uspm", "Trixie_Rangefinder"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_honeybadger_custom", "RH_uspm", "Trixie_Rangefinder"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"29rnd_300BLK_STANAG", "29rnd_300BLK_STANAG", "29rnd_300BLK_STANAG", "29rnd_300BLK_STANAG", "RH_16Rnd_40cal_usp", "RH_16Rnd_40cal_usp", "RH_16Rnd_40cal_usp"}; //Magazines added to the unit.
		Respawnmagazines[] = {"29rnd_300BLK_STANAG", "29rnd_300BLK_STANAG", "29rnd_300BLK_STANAG", "29rnd_300BLK_STANAG", "RH_16Rnd_40cal_usp", "RH_16Rnd_40cal_usp", "RH_16Rnd_40cal_usp"}; //Magazines added to the unit upon respawn, 
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_Tripod", "ACE_SpottingScope", "ACE_ATragMX"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_Tripod", "ACE_SpottingScope", "ACE_ATragMX"};
		};
		
		//Opfor Officer (mission)
		
		class Opfor_Officer_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Officer_1"; 
		scope = 2;
		displayName = "Enemy Officer"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "Niko_USA_R_SnowMARPATPCU";  // Uniform Class
		backpack = "TRYK_B_Coyotebackpack_WH"; // Backpack Class
		linkedItems[] = {"TRYK_V_Bulletproof", "SP_Beret_Grey", "Mask_M40", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_Bulletproof", "SP_Beret_Grey", "Mask_M40", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_RPK12", "rhs_weap_rpg7"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_RPK12", "rhs_weap_rpg7"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_45Rnd_545x39_t_rpk", "hlc_45Rnd_545x39_t_rpk", "hlc_45Rnd_545x39_t_rpk", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "rhs_rpg7_PG7VL_mag", "rhs_rpg7_PG7VL_mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_45Rnd_545x39_t_rpk", "hlc_45Rnd_545x39_t_rpk", "hlc_45Rnd_545x39_t_rpk", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "rhs_rpg7_PG7VL_mag", "rhs_rpg7_PG7VL_mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//OPFOR Soldier
		
		class Opfor_Soldier_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Soldier_1"; 
		scope = 2;
		displayName = "Enemy Soldier"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_Snow_CombatUniform";  // Uniform Class
		backpack = "B_mas_AssaultPack_black"; // Backpack Class
		linkedItems[] = {"V_HarnessOGL_gry", "G_Balaclava_oli", "TRYK_H_woolhat_CW", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"V_HarnessOGL_gry", "G_Balaclava_oli", "TRYK_H_woolhat_CW", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_ak74_sighted", "RH_mak"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_sighted", "RH_mak"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Soldier_2 : Opfor_Soldier_1  {
		_generalMacro = "Opfor_Soldier_2"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak74_dirty_sighted", "RH_mak"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_dirty_sighted", "RH_mak"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Soldier_3 : Opfor_Soldier_1  {
		_generalMacro = "Opfor_Soldier_3"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak74_dirty2_sighted", "RH_mak"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_dirty2_sighted", "RH_mak"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Soldier_4 : Opfor_Soldier_1  {
		_generalMacro = "Opfor_Soldier_4"; 
		scope = 2;
		weapons[] = {"hlc_rifle_aks74_sighted", "RH_mak"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74_sighted", "RH_mak"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Soldier_5 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Soldier_5"; 
		scope = 2;
		displayName = "Enemy Soldier"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TFA_white_dou";  // Uniform Class
		backpack = "B_mas_AssaultPack_black"; // Backpack Class
		linkedItems[] = {"TRYK_V_tacv1", "G_mas_wpn_bala_mask","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_tacv1", "G_mas_wpn_bala_mask", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_ak74_sighted", "RH_mak"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_sighted", "RH_mak"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Soldier_6 : Opfor_Soldier_5  {
		_generalMacro = "Opfor_Soldier_6"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak74_sighted", "RH_mak"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_sighted", "RH_mak"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Soldier_7 : Opfor_Soldier_5  {
		_generalMacro = "Opfor_Soldier_7"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak74_sighted", "RH_mak"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_sighted", "RH_mak"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Soldier_8 : Opfor_Soldier_5  {
		_generalMacro = "Opfor_Soldier_8"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak74_sighted", "RH_mak"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_sighted", "RH_mak"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Soldier_9 : Opfor_Soldier_1  {
		_generalMacro = "Opfor_Soldier_9"; 
		weapons[] = {"hlc_rifle_ak74_sighted", "hgun_Rook40_F"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_sighted", "hgun_Rook40_F"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Soldier_10 : Opfor_Soldier_9  {
		_generalMacro = "Opfor_Soldier_10"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak74_dirty_sighted", "hgun_Rook40_F"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_dirty_sighted", "hgun_Rook40_F"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Soldier_11 : Opfor_Soldier_9  {
		_generalMacro = "Opfor_Soldier_11"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak74_dirty2_sighted", "hgun_Rook40_F"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_dirty2_sighted", "hgun_Rook40_F"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Soldier_12 : Opfor_Soldier_9  {
		_generalMacro = "Opfor_Soldier_12"; 
		scope = 2;
		weapons[] = {"hlc_rifle_aks74_sighted", "hgun_Rook40_F"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74_sighted", "hgun_Rook40_F"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Soldier_13 : Opfor_Soldier_5  {
		_generalMacro = "Opfor_Soldier_13"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak74_sighted", "hgun_Rook40_F"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_sighted", "hgun_Rook40_F"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Soldier_14 : Opfor_Soldier_13  {
		_generalMacro = "Opfor_Soldier_14"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak74_sighted", "hgun_Rook40_F"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_sighted", "hgun_Rook40_F"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Soldier_15 : Opfor_Soldier_13  {
		_generalMacro = "Opfor_Soldier_15"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak74_sighted", "hgun_Rook40_F"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_sighted", "hgun_Rook40_F"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Soldier_16 : Opfor_Soldier_13  {
		_generalMacro = "Opfor_Soldier_16"; 
		scope = 2;
		weapons[] = {"hlc_rifle_ak74_sighted", "hgun_Rook40_F"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_sighted", "hgun_Rook40_F"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		//Opfor Ammo Bearer
		
		class Opfor_Ammoholder_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Ammoholder_1"; 
		scope = 2;
		displayName = "Enemy Ammo Bearer"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TFA_white_nwu3_rs";  // Uniform Class
		backpack = "TRYK_B_Carryall_wh"; // Backpack Class
		linkedItems[] = {"SP_Modular1_White", "H_MilCap_gry", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_Modular1_White", "H_MilCap_gry", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_ak47", "RH_mak"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak47", "RH_mak"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Opfor Medic
		
		class Opfor_Medic_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Medic_1"; 
		scope = 2;
		displayName = "Enemy Medic"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TFA_black_rs";  // Uniform Class
		backpack = "TRYK_B_Medbag_ucp"; // Backpack Class
		linkedItems[] = {"SP_JackEllis1_Grey", "SP_Shemagh_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_JackEllis1_Grey", "SP_Shemagh_White", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_M590_5RD", "hgun_Rook40_F"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_M590_5RD", "hgun_Rook40_F"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_00Buck", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_00Buck", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_morphine", "ACE_morphine", "ACE_atropine", "ACE_epinephrine", "ACE_plasmaIV", "ACE_bloodIV", "ACE_salineIV", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_surgicalKit"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_morphine", "ACE_morphine", "ACE_atropine", "ACE_epinephrine", "ACE_plasmaIV", "ACE_bloodIV", "ACE_salineIV", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_surgicalKit"};
		};
		
		//Opfor Squad Leader
		
		class Opfor_SquadLeader_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_SquadLeader_1"; 
		scope = 2;
		displayName = "Enemy Squad Leader"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TFA_Coverall_Gray";  // Uniform Class
		backpack = "B_mas_m_Bergen_al"; // Backpack Class
		linkedItems[] = {"TRYK_V_ArmorVest_Winter", "H_MilCap_gry", "beard", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "TRYK_headset2"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_Winter", "H_MilCap_gry", "beard", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "TRYK_headset2"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_rpk74n", "RH_Deaglem"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_rpk74n", "RH_Deaglem"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_45Rnd_545x39_t_rpk", "hlc_45Rnd_545x39_t_rpk", "hlc_45Rnd_545x39_t_rpk", "rhs_mag_m67", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_45Rnd_545x39_t_rpk", "hlc_45Rnd_545x39_t_rpk", "hlc_45Rnd_545x39_t_rpk", "rhs_mag_m67", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_SquadLeader_2 : Opfor_SquadLeader_1  {
		_generalMacro = "Opfor_SquadLeader_2"; 
		scope = 2;
		weapons[] = {"hlc_rifle_rpk", "RH_Deaglem"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_rpk", "RH_Deaglem"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_75Rnd_762x39_m_rpk", "hlc_75Rnd_762x39_m_rpk", "rhs_mag_m67", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_75Rnd_762x39_m_rpk", "hlc_75Rnd_762x39_m_rpk", "rhs_mag_m67", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Opfor Team Leader
		
		class Opfor_TeamLeader_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_TeamLeader_1"; 
		scope = 2;
		displayName = "Enemy Squad Leader"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TFA_Coverall_Gray";  // Uniform Class
		backpack = "B_mas_m_Bergen_al"; // Backpack Class
		linkedItems[] = {"TRYK_V_ArmorVest_Winter", "H_MilCap_gry", "beard", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "TRYK_headset2"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_Winter", "H_MilCap_gry", "beard", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS", "TRYK_headset2"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_rpk74n", "RH_Deaglem"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_rpk74n", "RH_Deaglem"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_45Rnd_545x39_t_rpk", "hlc_45Rnd_545x39_t_rpk", "hlc_45Rnd_545x39_t_rpk", "rhs_mag_m67", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_45Rnd_545x39_t_rpk", "hlc_45Rnd_545x39_t_rpk", "hlc_45Rnd_545x39_t_rpk", "rhs_mag_m67", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_TeamLeader_2 : Opfor_SquadLeader_1  {
		_generalMacro = "Opfor_TeamLeader_2"; 
		scope = 2;
		weapons[] = {"hlc_rifle_rpk", "RH_Deaglem"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_rpk", "RH_Deaglem"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_75Rnd_762x39_m_rpk", "hlc_75Rnd_762x39_m_rpk", "rhs_mag_m67", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_75Rnd_762x39_m_rpk", "hlc_75Rnd_762x39_m_rpk", "rhs_mag_m67", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Opfor Anti Tank Rifleman
		
		class Opfor_Light_AntiTank_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Light_AntiTank_1"; 
		scope = 2;
		displayName = "Enemy Anti Tank Rifleman"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_Snow_CombatUniform";  // Uniform Class
		backpack = "B_FieldPack_cbr"; // Backpack Class
		linkedItems[] = {"H_Bandanna_khk", "G_Bandanna_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"H_Bandanna_khk", "G_Bandanna_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_aks74u", "RH_gsh18", "rhs_weap_rpg26"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74u", "RH_gsh18", "rhs_weap_rpg26"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak", "rhs_mag_m67", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "rhs_rpg26_mag", "rhs_rpg26_mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak", "rhs_mag_m67", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "rhs_rpg26_mag", "rhs_rpg26_mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Opfor Missile Specialist (AT)
		
		class Opfor_AntiTank_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_AntiTank_1"; 
		scope = 2;
		displayName = "Enemy Missile Specialist (AT)"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_Snow_CombatUniform";  // Uniform Class
		backpack = "B_FieldPack_cbr"; // Backpack Class
		linkedItems[] = {"H_Bandanna_khk", "G_Bandanna_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"H_Bandanna_khk", "G_Bandanna_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_aks74", "RH_gsh18", "rhs_weap_rpg26"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74u", "RH_gsh18", "rhs_weap_rpg26"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak", "rhs_mag_m67", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "rhs_rpg26_mag", "rhs_rpg26_mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak", "rhs_mag_m67", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "rhs_rpg26_mag", "rhs_rpg26_mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Assistant_AntiTank_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Assistant_AntiTank_1"; 
		scope = 2;
		displayName = "Enemy Asst. Missile Specialist (AT)"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_Snow_CombatUniform";  // Uniform Class
		backpack = "B_mas_AssaultPack_black"; // Backpack Class
		linkedItems[] = {"V_HarnessOGL_gry", "G_Balaclava_oli", "TRYK_H_woolhat_CW", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"V_HarnessOGL_gry", "G_Balaclava_oli", "TRYK_H_woolhat_CW", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_ak74_sighted", "RH_mak"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_sighted", "RH_mak"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "rhs_rpg26_mag", "rhs_rpg26_mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_B_AK", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "RH_8Rnd_9x18_Mak", "rhs_rpg26_mag", "rhs_rpg26_mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Opfor Missile Specialist (AA)
		
		class Opfor_AntiAir_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_AntiAir_1"; 
		scope = 2;
		displayName = "Enemy Missile Specialist (AA)"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_Snow_CombatUniform";  // Uniform Class
		backpack = "B_FieldPack_cbr"; // Backpack Class
		linkedItems[] = {"H_Bandanna_khk", "G_Bandanna_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"H_Bandanna_khk", "G_Bandanna_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_aks74", "RH_gsh18", "rhs_weap_rpg26"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74u", "RH_gsh18", "rhs_weap_rpg26"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak", "rhs_mag_m67", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "rhs_rpg26_mag", "rhs_rpg26_mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak", "rhs_mag_m67", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "rhs_rpg26_mag", "rhs_rpg26_mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Opfor Autorifleman
		
		class Opfor_Autorifleman_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Autorifleman_1"; 
		scope = 2;
		displayName = "Enemy Autorifleman"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_T_TAN_PAD";  // Uniform Class
		backpack = ""; // Backpack Class
		linkedItems[] = {"TRYK_Beard_BW2", "TRYK_V_harnes_blk_L", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_Beard_BW2", "TRYK_V_harnes_blk_L", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"LMG_mas_pkm_F", "RH_Deaglem"}; // Weapons added to the unit.
		respawnweapons[] = {"LMG_mas_pkm_F", "RH_Deaglem"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"100Rnd_mas_762x54_T_mag", "100Rnd_mas_762x54_T_mag", "rhs_mag_m67", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE"}; //Magazines added to the unit.
		Respawnmagazines[] = {"100Rnd_mas_762x54_T_mag", "100Rnd_mas_762x54_T_mag", "rhs_mag_m67", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Opfor Grenadier
		
		class Opfor_Grenadier_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Grenadier_1"; 
		scope = 2;
		displayName = "Enemy Grenadier"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TFA_white_dou_rs";  // Uniform Class
		backpack = "B_mas_AssaultPack_wint"; // Backpack Class
		linkedItems[] = {"TRYK_V_Bulletproof", "TRYK_H_woolhat_WH", "G_Bandanna_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_Bulletproof", "TRYK_H_woolhat_WH", "G_Bandanna_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"arifle_mas_ak74_gl", "rhs_weap_makarov_pmm"}; // Weapons added to the unit.
		respawnweapons[] = {"arifle_mas_ak74_gl", "rhs_weap_makarov_pmm"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_mas_545x39_mag", "30Rnd_mas_545x39_mag", "30Rnd_mas_545x39_mag", "rhs_mag_m67", "rhs_mag_m67", "rhs_mag_m67", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShellRed", "SmokeShellRed", "UGL_FlareRed_F", "UGL_FlareRed_F", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_9x19_17"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_mas_545x39_mag", "30Rnd_mas_545x39_mag", "30Rnd_mas_545x39_mag", "rhs_mag_m67", "rhs_mag_m67", "rhs_mag_m67", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShellRed", "SmokeShellRed", "UGL_FlareRed_F", "UGL_FlareRed_F", "rhs_mag_9x19_17", "rhs_mag_9x19_17", "rhs_mag_9x19_17"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Opfor Designated Marksman
		
		class Opfor_Marksman_1 : O_DUWS_base_F  {
		_generalMacro = "Opfor_Marksman_1"; 
		scope = 2;
		displayName = "Enemy Designated Marksman"; // In-game name of unit
		faction = "OPFOR_DUWS"; // Puts unit under new faction
		vehicleClass = "Men_Additional"; // Puts unit in the vehicleclass
		icon = "iconMan"; //In-game Map Icon
		nakedUniform = "U_BasicBody";  // Do not change
		uniformClass = "TRYK_U_B_PCUHsW6";  // Uniform Class
		backpack = "B_FieldPack_oucamo"; // Backpack Class
		linkedItems[] = {"TRYK_V_ArmorVest_Winter", "TRYK_H_Booniehat_JSDF", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_ArmorVest_Winter", "TRYK_H_Booniehat_JSDF", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"srifle_mas_m91_l", "RH_gsh18"}; // Weapons added to the unit.
		respawnweapons[] = {"srifle_mas_m91_l", "RH_gsh18"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"10Rnd_mas_762x54_mag", "10Rnd_mas_762x54_mag", "10Rnd_mas_762x54_mag", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit.
		Respawnmagazines[] = {"10Rnd_mas_762x54_mag", "10Rnd_mas_762x54_mag", "10Rnd_mas_762x54_mag", "rhs_mag_m67", "rhs_mag_m67", "SmokeShellRed", "SmokeShell", "SmokeShell", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh", "RH_18Rnd_9x19_gsh"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
};


class CfgWeapons
{

class rhs_weap_svds;

	class rhs_weap_svds_scoped : rhs_weap_svds
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
	
class rhs_weap_svdp;

	class rhs_weap_svdp_scoped : rhs_weap_svdp
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
	
class hlc_rifle_ak12;
	
	class hlc_rifle_ak12_sighted : hlc_rifle_ak12
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "RH_eothhs1";
			};
			
		};
	};
	
class hlc_rifle_ak74;
	
	class hlc_rifle_ak74_sighted : hlc_rifle_ak74
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "hlc_optic_kobra";
			};
			
		};
	};
	
class hlc_rifle_ak74_dirty;
	
	class hlc_rifle_ak74_dirty_sighted : hlc_rifle_ak74_dirty
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "hlc_optic_kobra";
			};
			
		};
	};

class hlc_rifle_ak74_dirty2;
	
	class hlc_rifle_ak74_dirty2_sighted : hlc_rifle_ak74_dirty2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "hlc_optic_kobra";
			};
			
		};
	};
	
class hlc_rifle_aks74;
	
	class hlc_rifle_aks74_sighted : hlc_rifle_aks74
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "hlc_optic_kobra";
			};
			
		};
	};
	
class Trixie_M107_Black;

	class Trixie_M107_Black_Scoped : Trixie_M107_Black
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "asdg_OpticRail_rifles";
				item = "ACE_optic_LRPS_PIP";
			};
			
		};
	};
	
class hlc_rifle_osw_GL;

	class hlc_rifle_osw_GL_sight : hlc_rifle_osw_GL
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "RH_eotech553mag";
			};
			
		};
	};
	
class arifle_mas_ak12_sf;

	class arifle_mas_ak12_sf_Jayme : arifle_mas_ak12_sf
	{
		class LinkedItems {

			class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_Hamr";
			};

			class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};

			class LinkedItemsUnder {
				slot = "UnderBarrelSlot";
				item = "bipod_03_F_blk";
			};
		};
	};
	
class C1987_MP7_folded_p;

	class C1987_MP7_folded_p_kevin : C1987_MP7_folded_p
	{
		class LinkedItems {

			class LinkedItemsOptic {
				slot = "asdg_OpticRail_MP7";
				item = "optic_Aco";
			};
			
			class LinkedItemsMuzzle {
				slot = "muzzle_snds_L";
				item = "C1987_o_suppressor";
			};
		};
	};
	
class Trixie_AWM338_Black;

	class Trixie_AWM338_Black_kevin : Trixie_AWM338_Black
	{
		class LinkedItems {

			class LinkedItemsOptic {
				slot = "asdg_OpticRail_rifles";
				item = "Trixie_LSMARK4_Delta";
			};
			
			class LinkedItemsMuzzle {
				slot = "MuzzleSlot";
				item = "Trixie_Cyclone";
			};
		};
	};
	
	class Trixie_AWM338_Black_hunter : Trixie_AWM338_Black
	{
		class LinkedItems {

			class LinkedItemsOptic {
				slot = "asdg_OpticRail_rifles";
				item = "Trixie_ANPVS10";
			};
			
			class LinkedItemsMuzzle {
				slot = "MuzzleSlot";
				item = "Trixie_Cyclone";
			};
		};
	};
	
class RH_usp;
	
	class RH_usp_hunter : RH_usp
	{
		class LinkedItems {

			class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "RH_gemtech45";
			};
		};
	};
	
class hlc_rifle_honeybase;

	class hlc_rifle_honeybadger_custom : hlc_rifle_honeybase
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "optic_Aco";
				item = "asdg_OpticRail_Bushmaster";
			};
			class LinkedItemsMuzzle 
			{
				item = "muzzle_HBADGER";
				slot = "MuzzleSlot";
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
						vehicle = "rhs_uaz_dshkm_chdkz";
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
						vehicle = "rhs_btr80a_msv";
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
						vehicle = "rhs_bmp2_vdv";
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
						vehicle = "rhs_t90_tv";
						rank = "LIEUTENANT";
						position[] = {0, 0, 0};
					};
					class Unit1 {
						side = 1;
						vehicle = "rhs_t90_tv";
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
						vehicle = "rhs_t90_tv";
						rank = "LIEUTENANT";
						position[] = {0, 0, 0};
					};
					class Unit1 {
						side = 1;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {20, -30, 0};
					};
					class Unit2 {
						side = 1;
						vehicle = "rhs_t90_tv";
						rank = "SERGEANT";
						position[] = {-20, -30, 0};
					};
					class Unit3 {
						side = 1;
						vehicle = "rhs_zsu234_aa";
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
						vehicle = "rhs_btr80_msv";
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
						vehicle = "rhs_bmp3_late_msv";
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
