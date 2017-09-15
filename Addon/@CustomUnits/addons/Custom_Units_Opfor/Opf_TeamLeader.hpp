		//Opfor Team Leader
		
		class Opfor_TeamLeader_1 : O_DUWS_base_F  {
		scope = 2;
		displayName = "ISIS Squad Leader"; // In-game name of unit
		uniformClass = "U_BG_Guerilla1_1";  // Uniform Class
		backpack = "CUP_B_CivPack_WDL"; // Backpack Class
		linkedItems[] = {"SFG_Tac_smallBeardD", "SP_Shemagh_CheckTan", "CUP_V_B_RRV_DA1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SFG_Tac_smallBeardD", "SP_Shemagh_CheckTan", "CUP_V_B_RRV_DA1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {}; //Magazines added to the unit.
		Respawnmagazines[] = {}; //Magazines added to the unit upon respawn, should be the same as above.
		};