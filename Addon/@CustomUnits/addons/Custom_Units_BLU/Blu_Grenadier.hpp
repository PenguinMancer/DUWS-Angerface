		//Blufor Grenadier
		
		class Blufor_Grenadier_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French Grenadier"; // In-game name of unit
		uniformClass = "rhs_uniform_cu_ocp";  // Uniform Class
		backpack = "VSM_OGA_Backpack_Kitbag"; // Backpack Class
		linkedItems[] = {"lbt_weapons_mc", "rhsusf_mich_bare_norotos_arc_tan", "rhs_googles_clear", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"lbt_weapons_mc", "rhsusf_mich_bare_norotos_arc_tan", "rhs_googles_clear", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {Standard_Grenades_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {Standard_Grenades_Blu}; //Magazines added to the unit upon respawn, should be the same as above.		
		};