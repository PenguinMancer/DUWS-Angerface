		//Opfor Ammo Bearer
		
		class Opfor_Ammoholder_1 : O_DUWS_base_F  {
		scope = 2;
		displayName = "ISIS Ammo Bearer"; // In-game name of unit
		uniformClass = "U_BG_Guerilla2_3";  // Uniform Class
		backpack = "SP_Carryall_ATacsFG"; // Backpack Class
		linkedItems[] = {"SFG_Tac_smallBeardD", "SP_Shemagh_CheckTan", "TRYK_LOC_AK_chestrig_TAN", Standard_Equipment_Opf}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SFG_Tac_smallBeardD", "SP_Shemagh_CheckTan", "TRYK_LOC_AK_chestrig_TAN", Standard_Equipment_Opf}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_ak47", "RH_mak", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak47", "RH_mak", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {AK47Mags_Opf, AK74Mags_Opf, Macaronimags_Opf, "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"}; //Magazines added to the unit.
		Respawnmagazines[] = {AK47Mags_Opf, AK74Mags_Opf, Macaronimags_Opf, "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"}; //Magazines added to the unit upon respawn, should be the same as above.
		};
		
		//Opfor Medic
		
		class Opfor_Medic_1 : O_DUWS_base_F  {
		scope = 2;
		displayName = "ISIS Medic"; // In-game name of unit
		uniformClass = "U_BG_Guerilla2_3";  // Uniform Class
		backpack = "B_AssaultPack_rgr"; // Backpack Class
		linkedItems[] = {"SFG_Tac_smallBeardD", "SP_Shemagh_CheckTan", "CUP_V_O_TK_Vest_2", Standard_Equipment_Opf}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SFG_Tac_smallBeardD", "SP_Shemagh_CheckTan", "CUP_V_O_TK_Vest_2", Standard_Equipment_Opf}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_ak74_dirty", "RH_mak", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_dirty", "RH_mak", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {AK74Mags_Opf, Macaronimags_Opf}; //Magazines added to the unit.
		Respawnmagazines[] = {AK74Mags_Opf, Macaronimags_Opf}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_quikclot", "ACE_morphine", "ACE_morphine", "ACE_surgicalKit"};
		respawnItems[] = {"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_quikclot", "ACE_morphine", "ACE_morphine", "ACE_surgicalKit"};
		};
		
		//Opfor Missile Specialist (AT) Assistant
		
		class Opfor_Assistant_AntiTank_1 : O_DUWS_base_F  {
		scope = 2;
		displayName = "ISIS Asst. Missile Specialist (AT)"; // In-game name of unit
		uniformClass = "U_BG_Guerilla2_3";  // Uniform Class
		backpack = "B_AssaultPack_rgr"; // Backpack Class
		linkedItems[] = {"SFG_Tac_smallBeardD", "SP_Shemagh_CheckTan", "TRYK_LOC_AK_chestrig_TAN", Standard_Equipment_Opf}; // Item's added to the unit. 
		respawnLinkedItems[] = {"SFG_Tac_smallBeardD", "SP_Shemagh_CheckTan", "TRYK_LOC_AK_chestrig_TAN", Standard_Equipment_Opf}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"hlc_rifle_ak74_dirty2", "Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"hlc_rifle_ak74_dirty2", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {AK74Mags_Opf, "rhs_rpg7_PG7VL_mag"}; //Magazines added to the unit.
		Respawnmagazines[] = {AK74Mags_Opf, "rhs_rpg7_PG7VL_mag"}; //Magazines added to the unit upon respawn, should be the same as above.
		};