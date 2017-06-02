		//Opfor Missile Specialist (AA)
		
		class Opfor_AntiAir_1 : O_DUWS_base_F  {
		scope = 2;
		displayName = "ISIS Missile Specialist (AA)"; // In-game name of unit
		uniformClass = "U_BG_Guerilla1_1";  // Uniform Class
		backpack = "SP_Carryall_ATacsFG"; // Backpack Class
		linkedItems[] = {"SFG_Tac_smallBeardD", "SP_Shemagh_CheckTan", "TRYK_LOC_AK_chestrig_TAN", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SFG_Tac_smallBeardD", "SP_Shemagh_CheckTan", "TRYK_LOC_AK_chestrig_TAN", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_ak74", "CUP_launch_9K32Strela", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74", "CUP_launch_9K32Strela", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {AK74Mags_Opf, "CUP_Igla_M"}; //Magazines added to the unit.
		Respawnmagazines[] = {AK74Mags_Opf, "CUP_Igla_M"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_AntiAir_2 : Opfor_AntiAir_1  {
		scope = 2;
		weapons[] = {"hlc_rifle_ak74_dirty", "CUP_launch_9K32Strela", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_dirty", "CUP_launch_9K32Strela", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_AntiAir_3 : Opfor_AntiAir_1  {
		scope = 2;
		weapons[] = {"hlc_rifle_ak74_dirty2", "CUP_launch_9K32Strela", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_dirty2", "CUP_launch_9K32Strela", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_AntiAir_4 : Opfor_AntiAir_1  {
		scope = 2;
		weapons[] = {"hlc_rifle_ak47", "CUP_launch_9K32Strela", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak47", "CUP_launch_9K32Strela", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {AK47Mags_Opf, "CUP_Igla_M"}; //Magazines added to the unit.
		Respawnmagazines[] = {AK47Mags_Opf, "CUP_Igla_M"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_AntiAir_5 : Opfor_AntiAir_4  {
		scope = 2;
		weapons[] = {"rhs_weap_akm", "CUP_launch_9K32Strela", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_akm", "CUP_launch_9K32Strela", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_AntiAir_6 : Opfor_AntiAir_4  {
		scope = 2;
		weapons[] = {"rhs_weap_akms", "CUP_launch_9K32Strela", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_akms", "CUP_launch_9K32Strela", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};