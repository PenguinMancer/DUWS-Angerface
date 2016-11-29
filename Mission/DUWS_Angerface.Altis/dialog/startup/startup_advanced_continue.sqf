_zonesize = [] execVM "dialog\startup\zone_advanced_common.sqf";
waitUntil {scriptDone _zonesize};

chosen_zone_settings = true; // Give the go ! locatorzonesV3.sqf can continue execution
publicVariable "chosen_zone_settings";

diag_log format["----- DUWS-R CHOSEN SETTINGS --------- Max radius: %1-------Min radius: %2",zones_max_radius,zones_min_radius];
closeDialog 0;