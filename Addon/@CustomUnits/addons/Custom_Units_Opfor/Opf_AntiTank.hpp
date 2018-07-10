		//Opfor Missile Specialist (AT)
		
		class Opfor_AntiTank_1 : O_DUWS_base_F  {
		scope = 2;
		displayName = "Terrorist Missile Specialist (AT)"; // In-game name of unit
		uniformClass = "U_BG_Guerilla1_1";  // Uniform Class
		backpack = "SP_Carryall_ATacsFG"; // Backpack Class
		linkedItems[] = {"SFG_Tac_smallBeardD", "SP_Shemagh_CheckTan", "TRYK_LOC_AK_chestrig_TAN", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SFG_Tac_smallBeardD", "SP_Shemagh_CheckTan", "TRYK_LOC_AK_chestrig_TAN", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {}; //Magazines added to the unit.
		Respawnmagazines[] = {}; //Magazines added to the unit upon respawn, should be the same as above.
		};