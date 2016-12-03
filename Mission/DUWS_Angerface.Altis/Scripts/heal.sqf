//hint format ["%1",WARCOM_zones_controled_by_OPFOR];
//sleep 5;
//hint format ["%1",WARCOM_zones_controled_by_BLUFOR];
//sleep 5;

if (commandpointsblu1<2) exitWith
{
  ["info",["Not enough command points","Not enough Command Points (2CP required)"]] call bis_fnc_showNotification;
};

commandpointsblu1 = commandpointsblu1 - 2;

null = [player] execVM 'Scripts\fullheallocal.sqf';
{null = [_x] execVM 'Scripts\fullheallocal.sqf';} forEach units group player;

hint "You and your squad members have been fully healed";