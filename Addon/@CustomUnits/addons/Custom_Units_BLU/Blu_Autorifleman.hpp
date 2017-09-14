		//Blufor Autorifleman
		
		class Blufor_Autorifleman_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French Autorifleman"; // In-game name of unit
		uniformClass = "Niko_USA_R_DCUTan";  // Uniform Class
		backpack = "VSM_OGA_carryall"; // Backpack Class
		linkedItems[] = {"lbt_operator_coy", "NeckTight_DMO", "TRYK_r_cap_tan_Glasses", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_operator_coy", "NeckTight_DMO", "TRYK_r_cap_tan_Glasses", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {Standard_Grenades_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {Standard_Grenades_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		};