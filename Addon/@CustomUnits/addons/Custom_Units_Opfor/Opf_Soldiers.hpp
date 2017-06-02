		//Opfor Soldier
		
		class Opfor_Soldier_1 : O_DUWS_base_F  {
		scope = 2;
		displayName = "ISIS Soldier"; // In-game name of unit
		uniformClass = "U_BG_Guerilla2_3";  // Uniform Class
		backpack = "B_AssaultPack_sgg"; // Backpack Class
		linkedItems[] = {"SFG_Tac_smallBeardD", "SP_Shemagh_CheckTan", "TRYK_LOC_AK_chestrig_TAN", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SFG_Tac_smallBeardD", "SP_Shemagh_CheckTan", "TRYK_LOC_AK_chestrig_TAN", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_ak47", "RH_mak", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak47", "RH_mak", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {AK47Mags_Opf, Macaronimags_Opf}; //Magazines added to the unit.
		Respawnmagazines[] = {AK47Mags_Opf, Macaronimags_Opf}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Soldier_2 : Opfor_Soldier_1  {
		scope = 2;
		weapons[] = {"rhs_weap_akm", "RH_mak", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_akm", "RH_mak", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Soldier_3 : Opfor_Soldier_1  {
		scope = 2;
		weapons[] = {"rhs_weap_akms", "RH_mak", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_akms", "RH_mak", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Soldier_4 : Opfor_Soldier_1  {
		scope = 2;
		weapons[] = {"hlc_rifle_ak74", "RH_mak", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74", "RH_mak", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {AK74Mags_Opf, Macaronimags_Opf}; //Magazines added to the unit.
		Respawnmagazines[] = {AK74Mags_Opf, Macaronimags_Opf}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Soldier_5 : Opfor_Soldier_4  {
		scope = 2;
		weapons[] = {"hlc_rifle_ak74_dirty", "RH_mak", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_dirty", "RH_mak", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Soldier_6 : Opfor_Soldier_4  {
		scope = 2;
		weapons[] = {"hlc_rifle_ak74_dirty2", "RH_mak", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_dirty2", "RH_mak", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_Soldier_7 : Opfor_Soldier_1  {
		scope = 2;
		weapons[] = {"hlc_rifle_ak47", "rhs_weap_pya", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak47", "rhs_weap_pya", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {AK47Mags_Opf, Grachmags_Opf}; //Magazines added to the unit.
		Respawnmagazines[] = {AK47Mags_Opf, Grachmags_Opf}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Soldier_8 : Opfor_Soldier_1  {
		scope = 2;
		weapons[] = {"rhs_weap_akm", "rhs_weap_pya", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_akm", "rhs_weap_pya", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {AK47Mags_Opf, Grachmags_Opf}; //Magazines added to the unit.
		Respawnmagazines[] = {AK47Mags_Opf, Grachmags_Opf}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Soldier_9 : Opfor_Soldier_1  {
		scope = 2;
		weapons[] = {"rhs_weap_akms", "rhs_weap_pya", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_akms", "rhs_weap_pya", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {AK47Mags_Opf, Grachmags_Opf}; //Magazines added to the unit.
		Respawnmagazines[] = {AK47Mags_Opf, Grachmags_Opf}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Soldier_10 : Opfor_Soldier_1  {
		scope = 2;
		weapons[] = {"hlc_rifle_ak74", "rhs_weap_pya", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74", "rhs_weap_pya", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {AK74Mags_Opf, Grachmags_Opf}; //Magazines added to the unit.
		Respawnmagazines[] = {AK74Mags_Opf, Grachmags_Opf}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Soldier_11 : Opfor_Soldier_1  {
		scope = 2;
		weapons[] = {"hlc_rifle_ak74_dirty", "rhs_weap_pya", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_dirty", "rhs_weap_pya", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {AK74Mags_Opf, Grachmags_Opf}; //Magazines added to the unit.
		Respawnmagazines[] = {AK74Mags_Opf, Grachmags_Opf}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Soldier_12 : Opfor_Soldier_1  {
		scope = 2;
		weapons[] = {"hlc_rifle_ak74_dirty2", "rhs_weap_pya", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_dirty2", "rhs_weap_pya", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {AK74Mags_Opf, Grachmags_Opf}; //Magazines added to the unit.
		Respawnmagazines[] = {AK74Mags_Opf, Grachmags_Opf}; //Magazines added to the unit upon respawn, should be the same as above.
		};