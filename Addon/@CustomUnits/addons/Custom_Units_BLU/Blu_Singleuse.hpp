		//Blufor Ammo Bearer
		
		class Blufor_Ammobearer_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "Nato AmmoBearer"; // In-game name of unit
		uniformClass = "rhs_uniform_cu_ocp";  // Uniform Class
		backpack = "VSM_OGA_carryall"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_coyo_L", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_coyo_L", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {M416_Mags_Blu, M416_Mags_Blu, Standard_Grenades_Blu, "hlc_200rnd_556x45_M_SAW"}; //Magazines added to the unit.
		Respawnmagazines[] = {M416_Mags_Blu, M416_Mags_Blu, Standard_Grenades_Blu, "hlc_200rnd_556x45_M_SAW"}; //Magazines added to the unit upon respawn, should be the same as above.
		};

		//Blufor Squad Leader
		
		class Blufor_SquadLeader_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "Nato Squad Leader"; // In-game name of unit
		uniformClass = "rhs_uniform_cu_ocp";  // Uniform Class
		backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
		linkedItems[] = {"rhsusf_spcs_ocp_rifleman", "SP_Beret_Tan", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhsusf_spcs_ocp_rifleman", "SP_Beret_Tan", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {Standard_Grenades_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {Standard_Grenades_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		};

		//Blufor Assistant Autorifleman
		
		class Blufor_Assistant_Autorifleman_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "Nato Assistant Autorifleman"; // In-game name of unit
		uniformClass = "rhs_uniform_cu_ocp";  // Uniform Class
		backpack = "VSM_OGA_carryall"; // Backpack Class
		linkedItems[] = {"rhsusf_mbav_light", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhsusf_mbav_light", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {Standard_Grenades_Blu, "hlc_200rnd_556x45_M_SAW", "hlc_200rnd_556x45_M_SAW"}; //Magazines added to the unit.
		Respawnmagazines[] = {Standard_Grenades_Blu, "hlc_200rnd_556x45_M_SAW", "hlc_200rnd_556x45_M_SAW"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Assistant Missile Specialist (AT)
		
		class Blufor_Assistant_AntiTank_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "Nato Asst. Missile Specialist (AT)"; // In-game name of unit
		uniformClass = "rhs_uniform_cu_ocp";  // Uniform Class
		backpack = "VSM_OGA_carryall"; // Backpack Class
		linkedItems[] = {"rhsusf_mbav_light", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhsusf_mbav_light", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {Standard_Grenades_Blu, "CUP_Javelin_M"}; //Magazines added to the unit.
		Respawnmagazines[] = {Standard_Grenades_Blu, "CUP_Javelin_M"}; //Magazines added to the unit upon respawn, should be the same as above.
		};

		//Blufor Missile Specialist (AA)
		
		class Blufor_AntiAir_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "Nato Missile Specialist (AA)"; // In-game name of unit
		uniformClass = "rhs_uniform_cu_ocp";  // Uniform Class
		backpack = "VSM_OGA_carryall"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_coyo", "TRYK_H_woolhat_tan", "rhs_googles_black", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_coyo", "TRYK_H_woolhat_tan", "rhs_googles_black", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {Standard_Grenades_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {Standard_Grenades_Blu}; //Magazines added to the unit upon respawn, should be the same as above.	
		};
		
		//Blufor Assistant Missile Specialist (AA)
		
		class Blufor_Assistant_AntiAir_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "Nato Asst. Missile Specialist (AA)"; // In-game name of unit
		uniformClass = "rhs_uniform_cu_ocp";  // Uniform Class
		backpack = "VSM_OGA_carryall"; // Backpack Class
		linkedItems[] = {"rhsusf_mbav_light", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhsusf_mbav_light", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {Standard_Grenades_Blu, "CUP_Javelin_M"}; //Magazines added to the unit.
		Respawnmagazines[] = {Standard_Grenades_Blu, "CUP_Javelin_M"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Repair Specialist
		
		class Blufor_Repair_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "Nato Repair Specialist"; // In-game name of unit
		uniformClass = "rhs_uniform_cu_ocp";  // Uniform Class
		backpack = "VSM_OGA_carryall"; // Backpack Class
		linkedItems[] = {"rhsusf_mbav_light", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhsusf_mbav_light", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {Standard_Grenades_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {Standard_Grenades_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_EntrenchingTool", "ACE_DefusalKit", "MineDetector", "ToolKit", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_packingBandage", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot" , "ACE_packingBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_morphine", "ACE_atropine", "ACE_epinephrine"};
		respawnItems[] = {"ACE_EntrenchingTool", "ACE_DefusalKit", "MineDetector", "ToolKit", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_packingBandage", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot" , "ACE_packingBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_morphine", "ACE_atropine", "ACE_epinephrine"};
		};
		
		//Blufor Marksman
		
		class Blufor_Marksman_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "Nato Marksman"; // In-game name of unit
		uniformClass = "rhs_uniform_cu_ocp";  // Uniform Class
		backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
		linkedItems[] = {"rhsusf_mbav_light", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhsusf_mbav_light", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {Standard_Grenades_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {Standard_Grenades_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Blufor Sniper
		
		class Blufor_Sniper_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "Nato Sniper"; // In-game name of unit
		uniformClass = "CUP_U_O_TK_Ghillie_Top";  // Uniform Class
		backpack = "VSM_OGA_Backpack_Kitbag"; // Backpack Class
		linkedItems[] = {"rhsusf_spc_crewman", "TRYK_H_TACEARMUFF_H", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhsusf_spc_crewman", "TRYK_H_TACEARMUFF_H", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_psg1", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_psg1", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {"hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3", Standard_Grenades_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {"hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3", Standard_Grenades_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		}
		
		//Blufor Spotter
		
		class Blufor_Spotter_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "Nato Spotter"; // In-game name of unit
		uniformClass = "CUP_U_O_TK_Ghillie_Top";  // Uniform Class
		backpack = "VSM_OGA_Backpack_Kitbag"; // Backpack Class
		linkedItems[] = {"rhsusf_spc_crewman", "TRYK_H_TACEARMUFF_H", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhsusf_spc_crewman", "TRYK_H_TACEARMUFF_H", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"Rangefinder", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"Rangefinder", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {Standard_Grenades_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {Standard_Grenades_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		}
		
		//Blufor Explosive Specialist
		
		class Blufor_Explosives_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "Nato Explosive Specialist"; // In-game name of unit
		uniformClass = "rhs_uniform_cu_ocp";  // Uniform Class
		backpack = "VSM_OGA_carryall"; // Backpack Class
		linkedItems[] = {"rhsusf_mbav_grenadier", "rhsusf_mich_bare_norotos_arc_tan", "rhs_googles_clear", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhsusf_mbav_grenadier", "rhsusf_mich_bare_norotos_arc_tan", "rhs_googles_clear", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {Standard_Grenades_Blu, "CUP_PipeBomb_M", "CUP_PipeBomb_M", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {Standard_Grenades_Blu, "CUP_PipeBomb_M", "CUP_PipeBomb_M", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_wirecutter", "ACE_DefusalKit", "ACE_Clacker", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_packingBandage", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot" , "ACE_packingBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_morphine", "ACE_atropine", "ACE_epinephrine"};
		respawnItems[] = {"ACE_wirecutter", "ACE_DefusalKit", "ACE_Clacker", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_packingBandage", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot" , "ACE_packingBandage", "ACE_elasticBandage", "ACE_tourniquet", "ACE_morphine", "ACE_atropine", "ACE_epinephrine"};
		};
		
		//Blufor Helo Pilot
		
		class Blufor_Pilot_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "Nato Helo Pilot"; // In-game name of unit
		uniformClass = "rhs_uniform_cu_ocp";  // Uniform Class
		backpack = "B_Parachute"; // Backpack Class
		linkedItems[] = {"rhsusf_spc", "TRYK_H_TACEARMUFF_H", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhsusf_spc", "TRYK_H_TACEARMUFF_H", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {}; //Magazines added to the unit.
		Respawnmagazines[] = {}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_morphine"};
		};
		
		//Blufor Stealth Unit
		
		class Blufor_Stealth_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "Nato Stealth Operative"; // In-game name of unit
		uniformClass = "TRYK_U_B_BLK_Tshirt";  // Uniform Class
		backpack = ""; // Backpack Class
		linkedItems[] = {"TRYK_balaclava_BLACK_NV", "SP_ECHHelmet_Black1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_balaclava_BLACK_NV", "SP_ECHHelmet_Black1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {}; //Magazines added to the unit.
		Respawnmagazines[] = {}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {};
		respawnItems[] = {};
		};