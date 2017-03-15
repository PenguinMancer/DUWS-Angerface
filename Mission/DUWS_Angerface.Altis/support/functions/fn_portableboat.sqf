_posplayer = _this select 0;
_radius = _this select 1;
_foundPickupPos = [];
taxiCanTakeOff = false;

if (commandpointsblu1 < 1) exitWith {
  ["info",["Not enough command points","Not enough Command Points (1 CP required)"]] call bis_fnc_showNotification;
  sleep 2;
  _portableboat = [player,"boat_taxi"] call BIS_fnc_addCommMenuItem;
  portableboat = _portableboat;
};

_foundPickupPos = [_posplayer, 0,_radius,10,2,5,0,[],[[0,0],[0,0]]] call BIS_fnc_findSafePos; // find a valid pos

// try to find the shoreline. If not available, exit.
if (0 == _foundPickupPos select 0 && 0 == _foundPickupPos select 1) exitWith {hint "You must be near a clear shore or in the sea"; sleep 5; _art = [player,"boat_taxi"] call BIS_fnc_addCommMenuItem;};

//Pos found near player
commandpointsblu1 = commandpointsblu1 - 1;
publicVariable "commandpointsblu1";

// create the boat
_helo = createVehicle ["B_Boat_Transport_01_F", _foundPickupPos,[], 0, "NONE"];
hint "Boat deployed!";

sleep 2;
_portableboat = [player,"boat_taxi"] call BIS_fnc_addCommMenuItem;
portableboat = _portableboat;