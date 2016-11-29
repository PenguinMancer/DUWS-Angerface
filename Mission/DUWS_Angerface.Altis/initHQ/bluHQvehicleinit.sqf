_foundPickupPos = _this select 0;
blu_hq_created = true;



_hqtransport = "I_G_Van_01_transport_F" createVehicle _foundPickupPos;
_hqtransport allowDamage false;
// TELEPORT PLAYER
player setpos [(getPos _hqtransport select 0)-5, (getPos _hqtransport select 1)-5];
_hqtransport addaction ["<t color='#ff0066'>Deploy HQ</t>","initHQ\DeployVehicleManual.sqf",[_hqtransport], 0, true, true];



// BROADCAST, TELL THE HQ POS IS FOUND
HQ_pos_found = true;
"respawn_west" setMarkerPos getPos _hqtransport;//Putting this between the change of variable and the public declaration to make sure that no client gets fucked.
publicVariable "HQ_pos_found";


if (!vehiclerespawn) then {
	vehiclerespawn = true;
	[_hqtransport] spawn {
	_hqtransport = _this select 0;
	while {!HQgenerated} do
		{
		"respawn_west" setMarkerPos getPos _hqtransport;
		sleep 3;
		};
	};
};


// SHOW THE STARTUP MENU
if (!zones_created) then {
sleep 0.1;
_nill = [] execVM "dialog\startup\startup.sqf";
waitUntil {sleep .1;chosen_settings};  // WAIT UNTIL THE PLAYER HAS CHOSEN THE SETTINGS
};


// WEATHER INIT
if (dynamic_weather_enable) then {
_weather_script = [] execVM "dialog\startup\weather.sqf";
};

// CALL ZONES GENERATION
if (!zones_created && !manually_chosen) then {      // CHECK IF ZONES ARE PLACED, IF NOT EXECUTE locatorZonesV1.sqf
    _zones_create = [50, 0.2] execVM "initZones\locatorZonesV1.sqf";   // CHECK IF ZONES HAVE ALREADY BEEN PLACED
} else {
	if (!advanced_chosen && manually_chosen) then {
		_zones_create = [50, 0.2] execVM "initZones\locatorZonesV2.sqf";
		} else {
		_zones_create = [50, 0.2] execVM "initZones\locatorZonesV3.sqf";
		};
};
