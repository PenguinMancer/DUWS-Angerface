		//Opfor Grenadier
		
		class Opfor_Grenadier_1 : O_DUWS_base_F  {
		scope = 2;
		displayName = "ISIS Grenadier"; // In-game name of unit
		uniformClass = "U_BG_Guerilla2_1";  // Uniform Class
		backpack = "SP_Carryall_ATacsFG"; // Backpack Class
		linkedItems[] = {"SFG_Tac_smallBeardD", "SP_Shemagh_CheckTan", "TRYK_LOC_AK_chestrig_TAN", Standard_Equipment_Opf}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SFG_Tac_smallBeardD", "SP_Shemagh_CheckTan", "TRYK_LOC_AK_chestrig_TAN", Standard_Equipment_Opf}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_aks74_GL", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_aks74_GL", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {AK74Mags_Opf, Rifle_Grenades_Opf}; //Magazines added to the unit.
		Respawnmagazines[] = {AK74Mags_Opf, Rifle_Grenades_Opf};
		};
		
		class Opfor_Grenadier_2 : Opfor_Grenadier_1  {
		scope = 2;
		weapons[] = {"hlc_rifle_akmgl", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_akmgl", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {AK47Mags_Opf, Rifle_Grenades_Opf}; //Magazines added to the unit.
		Respawnmagazines[] = {AK47Mags_Opf, Rifle_Grenades_Opf};
		};