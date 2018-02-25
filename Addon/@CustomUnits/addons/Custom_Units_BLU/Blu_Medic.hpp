		//Blufor Medic

		class Blufor_Medic_1 : B_DUWS_base_F  {
		scope = 2;
		displayName = "French Medic"; // In-game name of unit
		uniformClass = "rhs_uniform_cu_ocp";  // Uniform Class
		backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
		linkedItems[] = {"rhsusf_mbav_medic", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. 
		respawnLinkedItems[] = {"rhsusf_mbav_medic", "CUP_H_USMC_LWH_DES", "LBG_Shemagh_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"}; // Item's added to the unit. Should be identical to the linkedItems section.
		weapons[] = {"Throw", "Put"}; // Weapons added to the unit.
		respawnweapons[] = {"Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
		magazines[] = {Standard_Grenades_Blu}; //Magazines added to the unit.
		Respawnmagazines[] = {Standard_Grenades_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
		Items[] = {"ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_epinephrine", "ACE_epinephrine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_packingBandage", "ACE_packingBandage", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_salineIV_250", "ACE_salineIV_250", "ACE_plasmaIV_250", "ACE_plasmaIV_250", "ACE_surgicalKit"};
		respawnItems[] = {"ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_quikclot", "ACE_quikclot", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_bloodIV_250", "ACE_epinephrine", "ACE_epinephrine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_packingBandage", "ACE_packingBandage", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_personalAidKit", "ACE_salineIV_250", "ACE_salineIV_250", "ACE_plasmaIV_250", "ACE_plasmaIV_250", "ACE_surgicalKit"};
		};