		//Blufor Missile Specialist (AT)
		
		class Blufor_AntiTank_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French Missile Specialist (AT)"; // In-game name of unit
		uniformClass = "Niko_USA_DCUTan";  // Uniform Class
		backpack = "VSM_OGA_carryall"; // Backpack Class
		linkedItems[] = {"TRYK_V_PlateCarrier_coyo", "TRYK_H_woolhat_tan", "rhs_googles_black", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"TRYK_V_PlateCarrier_coyo", "TRYK_H_woolhat_tan", "rhs_googles_black", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {Standard_Grenades_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {Standard_Grenades_Blu}; //Magazines added to the unit upon respawn, should be the same as above.	
		};