		//Player Units
		
		class Blufor_Penguin_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "Codename Penguin"; // In-game name of unit
		genericNames = "DUWS_Penguin_Name";
		uniformClass = "VSM_AOR1_Crye_tan_pants_Camo";  // Uniform Class
		backpack = "B_Kitbag_cbr"; // Backpack Class
		linkedItems[] = {"VSM_OGA_Vest_2", "VSM_Peltor_OCP", "PU_shemagh_TanBLK", "TAC_SG", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"VSM_OGA_Vest_2", "VSM_Peltor_OCP", "PU_shemagh_TanBLK", "TAC_SG", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_G36TAC_sebby", "Binocular", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_G36TAC_sebby", "Binocular", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag", "HandGrenade", "HandGrenade", "rhs_mag_an_m8hc", "rhs_mag_an_m8hc", "ACE_HandFlare_Red", "ACE_HandFlare_Red"}; //Magazines added to the unit.
		Respawnmagazines[] = {"CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag", "HandGrenade", "HandGrenade", "rhs_mag_an_m8hc", "rhs_mag_an_m8hc", "ACE_HandFlare_Red", "ACE_HandFlare_Red"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_packingBandage", "ACE_packingBandage", "ACE_morphine", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_packingBandage", "ACE_packingBandage", "ACE_morphine", "ACE_morphine"};
		};
		
		class Blufor_Fox_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "Codename Fox"; // In-game name of unit
		genericNames = "DUWS_Fox_Name";
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"rhs_weap_m4_pmag_Jayme", "RH_m9", "Binocular", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_m4_pmag_Jayme", "RH_m9", "Binocular", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "rhs_mag_m18_red", "rhs_mag_m18_red", "rhs_mag_m18_red"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "rhs_mag_m18_red", "rhs_mag_m18_red", "rhs_mag_m18_red"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_epinephrine", "ACE_epinephrine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_packingBandage", "ACE_packingBandage", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_salineIV_250", "ACE_salineIV_250", "ACE_plasmaIV_250", "ACE_plasmaIV_250", "ACE_surgicalKit"};
		respawnItems[] = {"ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_epinephrine", "ACE_epinephrine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_packingBandage", "ACE_packingBandage", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_salineIV_250", "ACE_salineIV_250", "ACE_plasmaIV_250", "ACE_plasmaIV_250", "ACE_surgicalKit"};
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
		
		class Blufor_Eagle_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "Codename Eagle"; // In-game name of unit
		genericNames = "DUWS_Eagle_Name";
		uniformClass = "TRYK_U_B_NATO_UCP_R_CombatUniform";  // Uniform Class
		backpack = "USAF_SFS_Carryall_ABU"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_ACU", "rhsusf_ach_helmet_headset_ess_ucp", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"CUP_srifle_M14_DMR_sighted", "RH_usp_suppressed", "Binocular", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"CUP_srifle_M14_DMR_sighted", "RH_usp_suppressed", "Binocular", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "RH_12Rnd_45cal_usp", "RH_12Rnd_45cal_usp", "RH_12Rnd_45cal_usp", "CUP_HandGrenade_M67", "CUP_HandGrenade_M67", "CUP_HandGrenade_M67"}; //Magazines added to the unit.
		Respawnmagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "RH_12Rnd_45cal_usp", "RH_12Rnd_45cal_usp", "RH_12Rnd_45cal_usp", "CUP_HandGrenade_M67", "CUP_HandGrenade_M67", "CUP_HandGrenade_M67"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Blufor_Panda_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "Codename Panda"; // In-game name of unit
		genericNames = "DUWS_Panda_Name";
		uniformClass = "CUP_U_O_SLA_Desert";  // Uniform Class
		backpack = "B_AssaultPack_ocamo"; // Backpack Class
		linkedItems[] = {"rhsusf_spc", "H_HelmetSpecO_ocamo", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS", "TRYK_Shemagh_TAN_NV"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhsusf_spc", "H_HelmetSpecO_ocamo", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemRadio", "ItemGPS", "TRYK_Shemagh_TAN_NV"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"RH_Hk416_sighted", "RH_bullb", "Binocular", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_Hk416_sighted", "RH_bullb", "Binocular", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "CUP_HandGrenade_RGD5", "CUP_HandGrenade_RGD5", "RH_6Rnd_454_Mag", "RH_6Rnd_454_Mag", "RH_6Rnd_454_Mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {"30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "CUP_HandGrenade_RGD5", "CUP_HandGrenade_RGD5", "RH_6Rnd_454_Mag", "RH_6Rnd_454_Mag", "RH_6Rnd_454_Mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};