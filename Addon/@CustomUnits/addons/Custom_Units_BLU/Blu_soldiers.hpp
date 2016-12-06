//Blufor Soldier
		
class Blufor_Soldier_1 : B_DUWS_base_F  {
	scope = 2;
	displayName = "Marine Soldier"; // In-game name of unit
	uniformClass = "TFA_tri_rs";  // Uniform Class
	backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
	linkedItems[] = {"lbt_light_coy", "TFA_H_HelmetIA_TRI", "LBG_Shemagh_Tan", Standard_Equipment_Blu}; // Item's added to the unit. 
	respawnLinkedItems[] = {"lbt_light_coy", "TFA_H_HelmetIA_TRI", "LBG_Shemagh_Tan", Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
	weapons[] = {"bg21_famas_FS_tan_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit.
	respawnweapons[] = {"bg21_famas_FS_tan_sighted", "RH_m9"}; // Weapons added to the unit. Should be identical to the linkedItems section
	magazines[] = {Famas_Mags_Blu, Standard_Grenades_Blu, M9_Mags_Blu}; //Magazines added to the unit.
	Respawnmagazines[] = {Famas_Mags_Blu, Standard_Grenades_Blu, M9_Mags_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};
		
class Blufor_Soldier_2 : Blufor_Soldier_1  {
	scope = 2;
	weapons[] = {"bg21_famas_FS_tan", "RH_m9", "Throw", "Put"}; // Weapons added to the unit.
	respawnweapons[] = {"bg21_famas_FS_tan", "RH_m9", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};
		
class Blufor_Soldier_3 : Blufor_Soldier_1  {
	scope = 2;
	weapons[] = {"RH_hk416_des", "RH_m9", "Throw", "Put"}; // Weapons added to the unit.
	respawnweapons[] = {"RH_hk416_des", "RH_m9", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
	magazines[] = {M416_Mags_Blu, Standard_Grenades_Blu, M9_Mags_Blu}; //Magazines added to the unit.
	Respawnmagazines[] = {M416_Mags_Blu, Standard_Grenades_Blu, M9_Mags_Blu}; //Magazines added to the unit upon respawn, should be the same as above.
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};

class Blufor_Soldier_4 : Blufor_Soldier_3 {
	scope = 2;
	weapons[] = {"RH_hk416_des_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit.
	respawnweapons[] = {"RH_hk416_des_sighted", "RH_m9", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};

class Blufor_Soldier_5 : Blufor_Soldier_1 {
	scope = 2;
	weapons[] = {"bg21_famas_FS_tan_sighted", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit.
	respawnweapons[] = {"bg21_famas_FS_tan_sighted", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};
		
class Blufor_Soldier_6 : Blufor_Soldier_1 {
	scope = 2;
	weapons[] = {"bg21_famas_FS_tan", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit.
	respawnweapons[] = {"bg21_famas_FS_tan", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};
		
class Blufor_Soldier_7 : Blufor_Soldier_3 {
	scope = 2;
	weapons[] = {"RH_hk416_des", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit.
	respawnweapons[] = {"RH_hk416_des", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};
		
class Blufor_Soldier_8 : Blufor_Soldier_3 {
	scope = 2;
	weapons[] = {"RH_hk416_des_sighted", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit.
	respawnweapons[] = {"RH_hk416_des_sighted", "RH_m9c", "Throw", "Put"}; // Weapons added to the unit. Should be identical to the linkedItems section
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};
		
class Blufor_Soldier_9 : Blufor_Soldier_1  {
	scope = 2;
	linkedItems[] = {"lbt_operator_coy", Standard_Equipment_Blu}; // Item's added to the unit. 
	respawnLinkedItems[] = {"lbt_operator_coy",, Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};
		
class Blufor_Soldier_10 : Blufor_Soldier_2  {
	scope = 2;
	linkedItems[] = {"lbt_operator_coy", Standard_Equipment_Blu}; // Item's added to the unit. 
	respawnLinkedItems[] = {"lbt_operator_coy",, Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};
		
class Blufor_Soldier_11 : Blufor_Soldier_3  {
	scope = 2;
	linkedItems[] = {"lbt_operator_coy", Standard_Equipment_Blu}; // Item's added to the unit. 
	respawnLinkedItems[] = {"lbt_operator_coy",, Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};
		
class Blufor_Soldier_12 : Blufor_Soldier_4  {
	scope = 2;
	linkedItems[] = {"lbt_operator_coy", Standard_Equipment_Blu}; // Item's added to the unit. 
	respawnLinkedItems[] = {"lbt_operator_coy",, Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};
		
class Blufor_Soldier_13 : Blufor_Soldier_5  {
	scope = 2;
	linkedItems[] = {"lbt_operator_coy", Standard_Equipment_Blu}; // Item's added to the unit. 
	respawnLinkedItems[] = {"lbt_operator_coy",, Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};
		
class Blufor_Soldier_14 : Blufor_Soldier_6  {
	scope = 2;
	linkedItems[] = {"lbt_operator_coy", Standard_Equipment_Blu}; // Item's added to the unit. 
	respawnLinkedItems[] = {"lbt_operator_coy",, Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};
		
class Blufor_Soldier_15 : Blufor_Soldier_7  {
	scope = 2;
	linkedItems[] = {"lbt_operator_coy", Standard_Equipment_Blu}; // Item's added to the unit. 
	respawnLinkedItems[] = {"lbt_operator_coy",, Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};
		
class Blufor_Soldier_16 : Blufor_Soldier_8  {
	scope = 2;
	linkedItems[] = {"lbt_operator_coy", Standard_Equipment_Blu}; // Item's added to the unit. 
	respawnLinkedItems[] = {"lbt_operator_coy",, Standard_Equipment_Blu}; // Item's added to the unit. Should be identical to the linkedItems section.
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};

class Blufor_Soldier_17 : Blufor_Soldier_1  {
	scope = 2;
	backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};

class Blufor_Soldier_18 : Blufor_Soldier_2  {
	scope = 2;
	backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};

class Blufor_Soldier_19 : Blufor_Soldier_3  {
	scope = 2;
	backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};

class Blufor_Soldier_20 : Blufor_Soldier_4  {
	scope = 2;
	backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};

class Blufor_Soldier_21 : Blufor_Soldier_5  {
	scope = 2;
	backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};

class Blufor_Soldier_22 : Blufor_Soldier_6  {
	scope = 2;
	backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};

class Blufor_Soldier_23 : Blufor_Soldier_7  {
	scope = 2;
	backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};

class Blufor_Soldier_24 : Blufor_Soldier_8  {
	scope = 2;
	backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};

class Blufor_Soldier_25 : Blufor_Soldier_9  {
	scope = 2;
	backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};

class Blufor_Soldier_26 : Blufor_Soldier_10  {
	scope = 2;
	backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};

class Blufor_Soldier_27 : Blufor_Soldier_11  {
	scope = 2;
	backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};

class Blufor_Soldier_28 : Blufor_Soldier_12  {
	scope = 2;
	backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};

class Blufor_Soldier_29 : Blufor_Soldier_13  {
	scope = 2;
	backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};

class Blufor_Soldier_30 : Blufor_Soldier_14  {
	scope = 2;
	backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};

class Blufor_Soldier_31 : Blufor_Soldier_15  {
	scope = 2;
	backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};

class Blufor_Soldier_32 : Blufor_Soldier_16  {
	scope = 2;
	backpack = "VSM_OGA_Backpack_Compact"; // Backpack Class
	class EventHandlers: EventHandlers {
		init = "(_this select 0) execVM ""\Custom_DUWS_Blu\script\Randomize_blu_soldier.sqf""";
	};
};