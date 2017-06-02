		//Opfor Missile Specialist (AT)
		
		class Opfor_AntiTank_1 : O_DUWS_base_F  {
		scope = 2;
		displayName = "ISIS Missile Specialist (AT)"; // In-game name of unit
		uniformClass = "U_BG_Guerilla1_1";  // Uniform Class
		backpack = "SP_Carryall_ATacsFG"; // Backpack Class
		linkedItems[] = {"SFG_Tac_smallBeardD", "SP_Shemagh_CheckTan", "TRYK_LOC_AK_chestrig_TAN", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SFG_Tac_smallBeardD", "SP_Shemagh_CheckTan", "TRYK_LOC_AK_chestrig_TAN", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_ak74", "rhs_weap_rpg7", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74", "rhs_weap_rpg7", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {AK74Mags_Opf, "rhs_rpg7_PG7VL_mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {AK74Mags_Opf, "rhs_rpg7_PG7VL_mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_AntiTank_2 : Opfor_AntiTank_1  {
		scope = 2;
		weapons[] = {"hlc_rifle_ak74_dirty", "rhs_weap_rpg7", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_dirty", "rhs_weap_rpg7", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_AntiTank_3 : Opfor_AntiTank_1  {
		scope = 2;
		weapons[] = {"hlc_rifle_ak74_dirty2", "rhs_weap_rpg7", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_dirty2", "rhs_weap_rpg7", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_AntiTank_4 : Opfor_AntiTank_1  {
		scope = 2;
		weapons[] = {"hlc_rifle_ak47", "rhs_weap_rpg7", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak47", "rhs_weap_rpg7", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {AK47Mags_Opf, "rhs_rpg7_PG7VL_mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {AK47Mags_Opf, "rhs_rpg7_PG7VL_mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_AntiTank_5 : Opfor_AntiTank_4  {
		scope = 2;
		weapons[] = {"rhs_weap_akm", "rhs_weap_rpg7", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_akm", "rhs_weap_rpg7", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};
		
		class Opfor_AntiTank_6 : Opfor_AntiTank_4  {
		scope = 2;
		weapons[] = {"rhs_weap_akms", "rhs_weap_rpg7", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"rhs_weap_akms", "rhs_weap_rpg7", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};