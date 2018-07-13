		//Player Units
		
		class Blufor_Penguin_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "Codename Penguin"; // In-game name of unit
		genericNames = "DUWS_Penguin_Name";
		uniformClass = "rhs_uniform_cu_ocp";  // Uniform Class
		backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
		linkedItems[] = {"rhsusf_mbav_light", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhsusf_mbav_light", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_G36KA1KSK", "hlc_pistol_P226R_40Combat", "Binocular", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_G36KA1KSK", "hlc_pistol_P226R_40Combat", "Binocular", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "hlc_12Rnd_40SW_B_P226", "hlc_12Rnd_40SW_B_P226", "HandGrenade", "HandGrenade", "rhs_mag_an_m8hc", "rhs_mag_an_m8hc", "ACE_HandFlare_Red", "ACE_HandFlare_Red"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "hlc_12Rnd_40SW_B_P226", "hlc_12Rnd_40SW_B_P226", "HandGrenade", "HandGrenade", "rhs_mag_an_m8hc", "rhs_mag_an_m8hc", "ACE_HandFlare_Red", "ACE_HandFlare_Red"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_packingBandage", "ACE_packingBandage", "ACE_morphine", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_packingBandage", "ACE_packingBandage", "ACE_morphine", "ACE_morphine"};
		};
		
		class Blufor_Fox_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "Codename Fox"; // In-game name of unit
		genericNames = "DUWS_Fox_Name";
		uniformClass = "rhs_uniform_cu_ocp";  // Uniform Class
		backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
		linkedItems[] = {"rhsusf_mbav_light", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhsusf_mbav_light", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_M4", "CUP_hgun_Phantom" "Rangefinder", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_M4", "CUP_hgun_Phantom" "Rangefinder", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_EPR", "CUP_18Rnd_9x19_Phantom", "CUP_18Rnd_9x19_Phantom", "ACE_HandFlare_Red", "ACE_HandFlare_Red", "SmokeShellRed", "SmokeShellRed"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_EPR", "CUP_18Rnd_9x19_Phantom", "CUP_18Rnd_9x19_Phantom", "ACE_HandFlare_Red", "ACE_HandFlare_Red", "SmokeShellRed", "SmokeShellRed"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_epinephrine", "ACE_epinephrine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_packingBandage", "ACE_packingBandage", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_salineIV_250", "ACE_salineIV_250", "ACE_plasmaIV_250", "ACE_plasmaIV_250", "ACE_surgicalKit", "ACE_SpraypaintBlack"};
		respawnItems[] = {"ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_epinephrine", "ACE_epinephrine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_packingBandage", "ACE_packingBandage", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_salineIV_250", "ACE_salineIV_250", "ACE_plasmaIV_250", "ACE_plasmaIV_250", "ACE_surgicalKit", "ACE_SpraypaintBlack"};
		};
		
		class Blufor_Wolf_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "Codename Wolf"; // In-game name of unit
		genericNames = "DUWS_Wolf_Name";
		uniformClass = "rhs_uniform_cu_ocp";  // Uniform Class
		backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
		linkedItems[] = {"rhsusf_mbav_light", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhsusf_mbav_light", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"RH_SR25EC", "RH_g19", "Binocular", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_SR25EC", "RH_g19", "Binocular", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"RH_20Rnd_762x51_M80A1", "RH_20Rnd_762x51_M80A1", "RH_20Rnd_762x51_M80A1", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17"}; //Magazines added to the unit.
		Respawnmagazines[] = {"RH_20Rnd_762x51_M80A1", "RH_20Rnd_762x51_M80A1", "RH_20Rnd_762x51_M80A1", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Blufor_Crow_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "Codename Crow"; // In-game name of unit
		genericNames = "DUWS_Crow_Name";
		uniformClass = "rhs_uniform_cu_ocp";  // Uniform Class
		backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
		linkedItems[] = {"rhsusf_mbav_light", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhsusf_mbav_light", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"CUP_arifle_Mk16_STD_sighted", "RH_usp", "Laserdesignator_02", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"CUP_arifle_Mk16_STD_sighted", "RH_usp", "Laserdesignator_02", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_EPR", "RH_12Rnd_45cal_usp", "RH_12Rnd_45cal_usp", "SmokeShellYellow", "SmokeShellRed", "SmokeShellGreen"}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_EPR", "RH_12Rnd_45cal_usp", "RH_12Rnd_45cal_usp", "SmokeShellYellow", "SmokeShellRed", "SmokeShellGreen"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_packingBandage" , "ACE_packingBandage", "ACE_morphine", "ACE_morphine", "ACE_atropine", "ACE_epinephrine", "ToolKit"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_packingBandage" , "ACE_packingBandage", "ACE_morphine", "ACE_morphine", "ACE_atropine", "ACE_epinephrine", "ToolKit"};
		};
		
		class Blufor_Tarrasque_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "Codename Tarrasque"; // In-game name of unit
		genericNames = "DUWS_Tarrasque_Name";
		uniformClass = "rhs_uniform_cu_ocp";  // Uniform Class
		backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
		linkedItems[] = {"rhsusf_mbav_light", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhsusf_mbav_light", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"RH_M16A4_tarrasque", "RH_Deaglem", "Rangefinder", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_M16A4_tarrasque", "RH_Deaglem", "Rangefinder", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "SmokeShellGreen", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "SmokeShellGreen", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"}; //Magazines added to the unit upon respawn, should be the same as above.
		};