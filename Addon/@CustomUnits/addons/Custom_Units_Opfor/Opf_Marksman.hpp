		//Opfor Designated Marksman
		
		class Opfor_Marksman_1 : O_DUWS_base_F  {
		scope = 2;
		displayName = "Terrorist Designated Marksman"; // In-game name of unit
		uniformClass = "CUP_U_O_CHDKZ_Lopotev";  // Uniform Class
		backpack = "B_AssaultPack_sgg"; // Backpack Class
		linkedItems[] = {"CUP_V_RUS_Smersh_1", "SFG_Tac_smallBeardD", "SP_Shemagh_CheckGreen", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"CUP_V_RUS_Smersh_1", "SFG_Tac_smallBeardD", "SP_Shemagh_CheckGreen", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {}; //Magazines added to the unit.
		Respawnmagazines[] = {}; //Magazines added to the unit upon respawn, should be the same as above.
		};