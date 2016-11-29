_mounted_veh = vehicle player;

if (commandpointsblu1<2) exitWith  
{
  ["info",["Not enough command points","Not enough Command Points (2CP required)"]] call bis_fnc_showNotification;
};

if (_mounted_veh==player) exitWith {
Hint "You must be inside a vehicle to refit it."
};

private "_veh_refit_fob";
_veh_refit_fob = false;

// Check if player is near an FOB // Added by Phantom_Wolf
{if (((getPos _x) distance (getPos _mounted_veh))<100) then {_veh_refit_fob = true};} forEach Array_of_FOBS;

// check if near the officer
if (((hq_blu1 distance _mounted_veh)>100) OR !(_veh_refit_fob)) exitWith {
["veh_refit_hint",["Too far away","Your vehicle must be near the base or an FOB"]] call bis_fnc_showNotification;
};

commandpointsblu1 = commandpointsblu1 - 2;
publicVariable "commandpointsblu1";
_mounted_veh setDamage 0;
_mounted_veh setFuel 1;
_mounted_veh setVehicleAmmoDef 1;
["veh_refit_hint",["Vehicle ready !","Your vehicle has been rearmed, refueled and repaired"]] call bis_fnc_showNotification;

