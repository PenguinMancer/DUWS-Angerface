class CfgCommunicationMenu
{
    class artillery
    {
        text = "Artillery Strike (4 CP)"; // Text displayed in the menu and in a notification
        submenu = ""; // Submenu opened upon activation
        expression = "[6, 100, 8, 3, 1, 4, 'R_80mm_HE'] spawn Support_fnc_mapclickarty"; // Code executed upon activation (ignored when the submenu is not empty)
        icon = "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\artillery_ca.paa"; // Icon displayed permanently next to the command menu
        cursor = "\a3\Ui_f\data\IGUI\Cfg\Cursors\iconCursorSupport_ca.paa"; // Custom cursor displayed when the item is selected
        enable = "1"; // Simple expression condition for enabling the item
        removeAfterExpressionCall = 1; // 1 to remove the item after calling
    };
    class mortar
    {
        text = "Mortar strike (2 CP)"; // Text displayed in the menu and in a notification
        submenu = ""; // Submenu opened upon activation
        expression = "[8, 50, 5, 3, 2, 2, 'grenade'] spawn Support_fnc_mapclickarty"; // Code executed upon activation (ignored when the submenu is not empty)
        icon = "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\mortar_ca.paa";
        cursor = "\a3\Ui_f\data\IGUI\Cfg\Cursors\iconCursorSupport_ca.paa"; // Custom cursor displayed when the item is selected
        enable = "1"; // Simple expression condition for enabling the item
        removeAfterExpressionCall = 1; // 1 to remove the item after calling
    };
    class jdam
    {
        text = "JDAM Strike (1 CP)"; // Text displayed in the menu and in a notification
        submenu = ""; // Submenu opened upon activation
        expression = "[1, 2, 1, 1, 3, 1, 'Bo_Mk82'] spawn Support_fnc_mapclickarty"; // Code executed upon activation (ignored when the submenu is not empty)
        icon = "\a3\ui_f\data\gui\cfg\hints\Designator_ca.paa";
        cursor = "\a3\Ui_f\data\IGUI\Cfg\Cursors\iconCursorSupport_ca.paa"; // Custom cursor displayed when the item is selected
        enable = "1"; // Simple expression condition for enabling the item
        removeAfterExpressionCall = 1; // 1 to remove the item after calling
    };
    class SITREP
    {
        text = "SITREP (1 CP)"; // Text displayed in the menu and in a notification
        submenu = ""; // Submenu opened upon activation
        expression = "[] spawn Support_fnc_sitrep"; // Code executed upon activation (ignored when the submenu is not empty)
        icon = "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\call_ca.paa"; // Icon displayed permanently next to the command menu
        cursor = ""; // Custom cursor displayed when the item is selected
        enable = "1"; // Simple expression condition for enabling the item
        removeAfterExpressionCall = 0; // 1 to remove the item after calling
    };
    class ammo
    {
        text = "Supply drop (15 CP)"; // Text displayed in the menu and in a notification
        submenu = ""; // Submenu opened upon activation
        expression = "[player] spawn Support_fnc_ammobox"; 
        icon = "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\supplydrop_ca.paa"; // Icon displayed permanently next to the command menu
        cursor = ""; // Custom cursor displayed when the item is selected
        enable = "1"; // Simple expression condition for enabling the item
        removeAfterExpressionCall = 0; // 1 to remove the item after calling
    };
    class paradrop
    {
        text = "Airborne troops (24 CP)"; // Text displayed in the menu and in a notification
        submenu = ""; // Submenu opened upon activation
        expression = "[player] spawn Support_fnc_paradrop"; 
        icon = "\a3\ui_f\data\gui\cfg\hints\BasicStances_ca.paa";
        cursor = ""; // Custom cursor displayed when the item is selected
        enable = "1"; // Simple expression condition for enabling the item
        removeAfterExpressionCall = 0; // 1 to remove the item after calling
    };
    class uav_recon
    {
        text = "UAV Recon (3 CP)"; // Text displayed in the menu and in a notification
        submenu = ""; // Submenu opened upon activation
        expression = "[] spawn Support_fnc_mapclickuav"; 
        icon = "\a3\ui_f\data\gui\cfg\hints\Radar_ca.paa";
        cursor = ""; // Custom cursor displayed when the item is selected
        enable = "1"; // Simple expression condition for enabling the item
        removeAfterExpressionCall = 1; // 1 to remove the item after calling
    };
    class vehicle_refit
    {
        text = "Vehicle Refit (3 CP)"; // Text displayed in the menu and in a notification
        submenu = ""; // Submenu opened upon activation
        expression = "[] spawn Support_fnc_veh_refit"; 
        icon = "\a3\ui_f\data\gui\cfg\hints\VehicleAmmo_ca.paa";
        cursor = ""; // Custom cursor displayed when the item is selected
        enable = "1"; // Simple expression condition for enabling the item
        removeAfterExpressionCall = 0; // 1 to remove the item after calling
    };
    class fob_support
    {
        text = "Establish FOB (10 CP)"; // Text displayed in the menu and in a notification
        submenu = ""; // Submenu opened upon activation
        expression = "[getpos player] spawn Support_fnc_fob"; 
        icon = "\a3\ui_f\data\gui\cfg\hints\Head_ca.paa";
        cursor = ""; // Custom cursor displayed when the item is selected
        enable = "1"; // Simple expression condition for enabling the item
        removeAfterExpressionCall = 1; // 1 to remove the item after calling
    };
	class helo_taxi
    {
        text = "Helo-Taxi (5 CP)"; // Text displayed in the menu and in a notification
        submenu = ""; // Submenu opened upon activation
        expression = "[getpos player,50] spawn Support_fnc_helotaxi"; 
        icon = "\a3\ui_f\data\gui\cfg\hints\TakeOff_ca.paa";
        cursor = ""; // Custom cursor displayed when the item is selected
        enable = "1"; // Simple expression condition for enabling the item
        removeAfterExpressionCall = 1; // 1 to remove the item after calling
    };
    class cluster
    {
        text = "Mk.20 II CBU (6 CP)"; // Text displayed in the menu and in a notification
        submenu = ""; // Submenu opened upon activation
        expression = "[1, 250, 1, 90, 1, 6, 'grenade'] spawn Support_fnc_mapclickcluster"; 
        icon = "\a3\ui_f\data\gui\cfg\hints\Death_ca.paa";
        cursor = ""; // Custom cursor displayed when the item is selected
        enable = "1"; // Simple expression condition for enabling the item
        removeAfterExpressionCall = 1; // 1 to remove the item after calling
    };
    class Deployable_Boat
    {
        text = "Deployable Boat (1 CP)"; // Text displayed in the menu and in a notification
        submenu = ""; // Submenu opened upon activation
        expression = "[getpos player,10] spawn Support_fnc_portableboat"; 
        icon = "\a3\ui_f\data\gui\cfg\hints\BasicDive_ca.paa";
        cursor = ""; // Custom cursor displayed when the item is selected
        enable = "1"; // Simple expression condition for enabling the item
        removeAfterExpressionCall = 1; // 1 to remove the item after calling
    };
	class hc_CAS
    {
        text = "HC Close Air Support (5 CP)"; // Text displayed in the menu and in a notification
        submenu = ""; // Submenu opened upon activation
        expression = "_nil=[]ExecVM ""dialog\request_hcCAS.sqf"""; 
        icon = "\a3\ui_f\data\gui\cfg\hints\UnitType_ca.paa";
        cursor = ""; // Custom cursor displayed when the item is selected
        enable = "1"; // Simple expression condition for enabling the item
        removeAfterExpressionCall = 1; // 1 to remove the item after calling
    };
	class hc_ATTchop
    {
        text = "HC Attack Chopper (5 CP)"; // Text displayed in the menu and in a notification
        submenu = ""; // Submenu opened upon activation
        expression = "_nil=[]ExecVM ""dialog\request_hcATTchop.sqf"""; 
        icon = "\a3\ui_f\data\gui\cfg\hints\UnitType_ca.paa";
        cursor = ""; // Custom cursor displayed when the item is selected
        enable = "1"; // Simple expression condition for enabling the item
        removeAfterExpressionCall = 1; // 1 to remove the item after calling
    };
	class hc_AIRTRANS
    {
        text = "HC Air Transport (3 CP)"; // Text displayed in the menu and in a notification
        submenu = ""; // Submenu opened upon activation
        expression = "_nil=[]ExecVM ""dialog\request_hcAirTrans.sqf"""; 
        icon = "\a3\ui_f\data\gui\cfg\hints\UnitType_ca.paa";
        cursor = ""; // Custom cursor displayed when the item is selected
        enable = "1"; // Simple expression condition for enabling the item
        removeAfterExpressionCall = 1; // 1 to remove the item after calling
    };
	class hc_GRTRANS
    {
        text = "HC Ground Transport (2 CP)"; // Text displayed in the menu and in a notification
        submenu = ""; // Submenu opened upon activation
        expression = "_nil=[]ExecVM ""dialog\request_hcGrTrans.sqf"""; 
        icon = "\a3\ui_f\data\gui\cfg\hints\UnitType_ca.paa";
        cursor = ""; // Custom cursor displayed when the item is selected
        enable = "1"; // Simple expression condition for enabling the item
        removeAfterExpressionCall = 1; // 1 to remove the item after calling
    };
	class hc_BOBCATREP
    {
        text = "HC Bobcat Repair/Rearm/Refuel Vehicle (8 CP)"; // Text displayed in the menu and in a notification
        submenu = ""; // Submenu opened upon activation
        expression = "_nil=[]ExecVM ""dialog\request_hcBob.sqf"""; 
        icon = "\a3\ui_f\data\gui\cfg\hints\UnitType_ca.paa";
        cursor = ""; // Custom cursor displayed when the item is selected
        enable = "1"; // Simple expression condition for enabling the item
        removeAfterExpressionCall = 1; // 1 to remove the item after calling
    };
	class hc_REPAIR
    {
        text = "HC Repair Team (4 CP)"; // Text displayed in the menu and in a notification
        submenu = ""; // Submenu opened upon activation
        expression = "_nil=[]ExecVM ""dialog\request_hcRepair.sqf"""; 
        icon = "\a3\ui_f\data\gui\cfg\hints\UnitType_ca.paa";
        cursor = ""; // Custom cursor displayed when the item is selected
        enable = "1"; // Simple expression condition for enabling the item
        removeAfterExpressionCall = 1; // 1 to remove the item after calling
    };
	class hc_REFUEL
    {
        text = "HC Refuel Team (2 CP)"; // Text displayed in the menu and in a notification
        submenu = ""; // Submenu opened upon activation
        expression = "_nil=[]ExecVM ""dialog\request_hcRefuel.sqf"""; 
        icon = "\a3\ui_f\data\gui\cfg\hints\UnitType_ca.paa";
        cursor = ""; // Custom cursor displayed when the item is selected
        enable = "1"; // Simple expression condition for enabling the item
        removeAfterExpressionCall = 1; // 1 to remove the itegm after calling
    };
	class cam
    {
        text = "Recon Camera System (5 CP)"; // Text displayed in the menu and in a notification
        submenu = ""; // Submenu opened upon activation
        expression = "_nil=[]ExecVM ""dialog\request_camsys.sqf"""; 
        icon = "\a3\ui_f\data\gui\cfg\hints\Radar_ca.paa";
        cursor = ""; // Custom cursor displayed when the item is selected
        enable = "1"; // Simple expression condition for enabling the item
        removeAfterExpressionCall = 1; // 1 to remove the item after calling
    };
	class vehicle
    {
        text = "Remote Vehicle Request"; // Text displayed in the menu and in a notification
        submenu = ""; // Submenu opened upon activation
        expression = "[] spawn Support_fnc_request_remote"; 
        icon = "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\supplydrop_ca.paa"; // Icon displayed permanently next to the command menu
        cursor = ""; // Custom cursor displayed when the item is selected
        enable = "1"; // Simple expression condition for enabling the item
        removeAfterExpressionCall = 0; // 1 to remove the item after calling
    };
};                        