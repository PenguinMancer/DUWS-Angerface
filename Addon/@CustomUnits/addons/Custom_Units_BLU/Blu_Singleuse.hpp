		//Blufor Ammo Bearer
		
		class Blufor_Ammobearer_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French AmmoBearer"; // In-game name of unit
		uniformClass = "Niko_USA_DCUTan";  // Uniform Class
		backpack = "VSM_OGA_carryall"; // Backpack Class
		linkedItems[] = {"lbt_operator_coy", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_operator_coy", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
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
		linkedItems[] = {"lbt_tl_coy", "SP_Beret_Tan", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_tl_coy", "SP_Beret_Tan", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
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
		linkedItems[] = {"lbt_light_coy", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_light_coy", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
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
		linkedItems[] = {"lbt_light_coy", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_light_coy", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
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
		linkedItems[] = {"TRYK_V_PlateCarrier_coyo", "TRYK_H_woolhat_tan", "rhs_googles_black", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_coyo", "TRYK_H_woolhat_tan", "rhs_googles_black", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
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
		linkedItems[] = {"lbt_light_coy", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_light_coy", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
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
		linkedItems[] = {"lbt_light_coy", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_light_coy", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
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
		linkedItems[] = {"lbt_light_coy", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_light_coy", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
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
		linkedItems[] = {"lbt_light_aor1", "TRYK_H_TACEARMUFF_H", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_light_aor1", "TRYK_H_TACEARMUFF_H", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
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
		linkedItems[] = {"lbt_light_aor1", "TRYK_H_TACEARMUFF_H", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_light_aor1", "TRYK_H_TACEARMUFF_H", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
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
		linkedItems[] = {"lbt_weapons_mc", "rhsusf_mich_bare_norotos_arc_tan", "rhs_googles_clear", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_weapons_mc", "rhsusf_mich_bare_norotos_arc_tan", "rhs_googles_clear", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
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
		linkedItems[] = {"lbt_pouchless_coy", "TRYK_H_TACEARMUFF_H", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_pouchless_coy", "TRYK_H_TACEARMUFF_H", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"RH_m9", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"RH_m9", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {M9_Mags_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {M9_Mags_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		};