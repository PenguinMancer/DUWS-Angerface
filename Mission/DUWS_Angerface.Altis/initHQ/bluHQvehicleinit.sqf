_foundPickupPos = _this select 0;

Vehicleaction = player1 addaction ["<t color='#ff0066'>Deploy HQ</t>","initHQ\DeployVehicleManual.sqf",["player1"], 0, false, true,"","_target == _this"];

PlayerRespawnEHDeployment = player1 addEventHandler ["respawn",{Vehicleaction = player1 addaction ["<t color='#ff0066'>Deploy HQ</t>","initHQ\DeployVehicleManual.sqf",["player1"], 0, false, true,"","_target == _this"]}];

// TELEPORT PLAYER
player setpos [(_foundPickupPos select 0), (_foundPickupPos select 1)];

// BROADCAST, TELL THE HQ POS IS FOUND
"respawn_west" setMarkerPos _foundPickupPos;//Putting this before the variable change to make sure clients aren't fucked
publicVariable "HQ_pos_found";
HQ_pos_found = true;