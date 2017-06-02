		//Opfor Anti Tank Rifleman
		
		class Opfor_Light_AntiTank_1 : O_DUWS_base_F  {
		scope = 2;
		displayName = "ISIS Anti Tank Rifleman"; // In-game name of unit
		uniformClass = "U_BG_Guerilla2_3";  // Uniform Class
		backpack = "B_AssaultPack_sgg"; // Backpack Class
		linkedItems[] = {"SFG_Tac_smallBeardD", "SP_Shemagh_CheckTan", "CUP_V_B_RRV_DA1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SFG_Tac_smallBeardD", "SP_Shemagh_CheckTan", "CUP_V_B_RRV_DA1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_aks74u", "rhs_weap_rpg7", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74u", "rhs_weap_rpg7", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {AK74Mags_Opf, "rhs_rpg7_PG7VL_mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {AK74Mags_Opf, "rhs_rpg7_PG7VL_mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		class Opfor_Light_AntiTank_2 : Opfor_Light_AntiTank_1  {
		scope = 2;
		weapons[] = {"hlc_rifle_aks74", "rhs_weap_rpg7", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74", "rhs_weap_rpg7", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		};