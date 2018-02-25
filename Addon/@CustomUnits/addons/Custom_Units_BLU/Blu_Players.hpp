		//Player Units
		
		class Blufor_Penguin_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "Codename Penguin"; // In-game name of unit
		genericNames = "DUWS_Penguin_Name";
		uniformClass = "VSM_AOR1_Crye_tan_pants_Camo";  // Uniform Class
		backpack = "B_Kitbag_cbr"; // Backpack Class
		linkedItems[] = {"VSM_OGA_Vest_2", "VSM_Peltor_OCP", "PU_shemagh_TanBLK", "TAC_SG", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"VSM_OGA_Vest_2", "VSM_Peltor_OCP", "PU_shemagh_TanBLK", "TAC_SG", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_G36TAC_peng", "Binocular", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_G36TAC_peng", "Binocular", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag", "HandGrenade", "HandGrenade", "rhs_mag_an_m8hc", "rhs_mag_an_m8hc", "ACE_HandFlare_Red", "ACE_HandFlare_Red"}; //Magazines added to the unit.
		Respawnmagazines[] = {"CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag", "HandGrenade", "HandGrenade", "rhs_mag_an_m8hc", "rhs_mag_an_m8hc", "ACE_HandFlare_Red", "ACE_HandFlare_Red"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_packingBandage", "ACE_packingBandage", "ACE_morphine", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_packingBandage", "ACE_packingBandage", "ACE_morphine", "ACE_morphine"};
		};
		
		class Blufor_Fox_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "Codename Fox"; // In-game name of unit
		genericNames = "DUWS_Fox_Name";
		uniformClass = "AFG_2001Lizard_TacticalUniform_SS";  // Uniform Class
		backpack = "VSM_M81_carryall"; // Backpack Class
		linkedItems[] = {"TAC_V_Sheriff_BA_TBL3_OD", "VSM_M81_Boonie", "G_Aviator", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TAC_V_Sheriff_BA_TBL3_OD", "VSM_M81_Boonie", "G_Aviator", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"arifle_AK12_F_fox", "Rangefinder", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"arifle_AK12_F_fox", "Rangefinder", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "ACE_HandFlare_Red", "ACE_HandFlare_Red", "SmokeShellRed", "SmokeShellRed"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_F", "ACE_HandFlare_Red", "ACE_HandFlare_Red", "SmokeShellRed", "SmokeShellRed"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_epinephrine", "ACE_epinephrine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_packingBandage", "ACE_packingBandage", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_salineIV_250", "ACE_salineIV_250", "ACE_plasmaIV_250", "ACE_plasmaIV_250", "ACE_surgicalKit", "ACE_SpraypaintBlack"};
		respawnItems[] = {"ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_epinephrine", "ACE_epinephrine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_packingBandage", "ACE_packingBandage", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_salineIV_250", "ACE_salineIV_250", "ACE_plasmaIV_250", "ACE_plasmaIV_250", "ACE_surgicalKit", "ACE_SpraypaintBlack"};
		};
		
		class Blufor_Wolf_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "Codename Wolf"; // In-game name of unit
		genericNames = "DUWS_Wolf_Name";
		uniformClass = "TRYK_B_TRYK_OCP_T";  // Uniform Class
		backpack = "VSM_OCP_Backpack_Kitbag"; // Backpack Class
		linkedItems[] = {"rhsusf_ach_helmet_ESS_ucp", "rhs_6b23_ML", "TRYK_Shemagh_shade_N", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhsusf_ach_helmet_ESS_ucp", "rhs_6b23_ML", "TRYK_Shemagh_shade_N", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_m14ebrri_sighted", "RH_g19", "Binocular", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m14ebrri_sighted", "RH_g19", "Binocular", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17", "RH_17Rnd_9x19_g17"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Blufor_Crow_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "Codename Crow"; // In-game name of unit
		genericNames = "DUWS_Crow_Name";
		uniformClass = "TRYK_U_B_MARPAT_Desert_Tshirt";  // Uniform Class
		backpack = "B_AssaultPack_mcamo"; // Backpack Class
		linkedItems[] = {"SP_Bandolier1_Tan", "rhs_googles_orange", "CUP_H_PMC_Cap_Back_EP_Tan", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS", "NVGoggles_INDEP"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SP_Bandolier1_Tan", "rhs_googles_orange", "CUP_H_PMC_Cap_Back_EP_Tan", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS", "NVGoggles_INDEP"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_M107_d_crow", "RH_mateba", "Laserdesignator_02", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_M107_d_crow", "RH_mateba", "Laserdesignator_02", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "RH_6Rnd_44_Mag", "RH_6Rnd_44_Mag", "SmokeShellYellow", "SmokeShellRed", "SmokeShellGreen"}; //Magazines added to the unit.
		Respawnmagazines[] = {"rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_M33", "RH_6Rnd_44_Mag", "RH_6Rnd_44_Mag", "SmokeShellYellow", "SmokeShellRed", "SmokeShellGreen"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_packingBandage" , "ACE_packingBandage", "ACE_morphine", "ACE_morphine", "ACE_atropine", "ACE_epinephrine", "ToolKit"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_packingBandage" , "ACE_packingBandage", "ACE_morphine", "ACE_morphine", "ACE_atropine", "ACE_epinephrine", "ToolKit"};
		};
		
		class Blufor_Tarrasque_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "Codename Tarrasque"; // In-game name of unit
		genericNames = "DUWS_Tarrasque_Name";
		uniformClass = "VSM_AOR1_Camo";  // Uniform Class
		backpack = "VSM_AOR1_Backpack_Kitbag"; // Backpack Class
		linkedItems[] = {"VSM_CarrierRig_Operator_AOR1", "H_HelmetB_light_desert", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS", "SP_Kneepads_Black"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"VSM_CarrierRig_Operator_AOR1", "H_HelmetB_light_desert", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS", "SP_Kneepads_Black"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"RH_M16A4_tarrasque", "RH_Deaglem", "Rangefinder", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_M16A4_tarrasque", "RH_Deaglem", "Rangefinder", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "SmokeShellGreen", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "RH_7Rnd_50_AE", "SmokeShellGreen", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"}; //Magazines added to the unit upon respawn, should be the same as above.
		};