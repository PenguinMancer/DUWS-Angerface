_foundPickupPos = _this select 0;

Vehicleaction = player1 addaction ["<t color='#ff0066'>Deploy HQ</t>","initHQ\DeployVehicleManual.sqf",["player1"], 0, false, true,"","_target == _this"];

PlayerRespawnEHDeployment = player1 addEventHandler ["respawn",{Vehicleaction = player1 addaction ["<t color='#ff0066'>Deploy HQ</t>","initHQ\DeployVehicleManual.sqf",["player1"], 0, false, true,"","_target == _this"]}];

// TELEPORT PLAYER
player setpos [(_foundPickupPos select 0)-1.5, (_foundPickupPos select 1) +1];
player setdir 110;

"respawn_west" setMarkerPos _foundPickupPos;
sleep 0.5;
HQ_pos_found = true;
publicVariable "HQ_pos_found";