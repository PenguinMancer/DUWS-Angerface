		//Opfor Anti Tank Rifleman
		
		class Opfor_Light_AntiTank_1 : O_DUWS_base_F  {
		scope = 2;
		displayName = "Terrorist Anti Tank Rifleman"; // In-game name of unit
		uniformClass = "U_BG_Guerilla2_3";  // Uniform Class
		backpack = "B_AssaultPack_sgg"; // Backpack Class
		linkedItems[] = {"SFG_Tac_smallBeardD", "SP_Shemagh_CheckTan", "CUP_V_B_RRV_DA1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SFG_Tac_smallBeardD", "SP_Shemagh_CheckTan", "CUP_V_B_RRV_DA1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {}; //Magazines added to the unit.
		Respawnmagazines[] = {}; //Magazines added to the unit upon respawn, should be the same as above.
		};