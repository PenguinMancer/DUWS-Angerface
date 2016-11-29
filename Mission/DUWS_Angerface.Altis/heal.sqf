//hint format ["%1",WARCOM_zones_controled_by_OPFOR];
//sleep 5;
//hint format ["%1",WARCOM_zones_controled_by_BLUFOR];
//sleep 5;

if (commandpointsblu1<2) exitWith
{
  ["info",["Not enough command points","Not enough Command Points (2CP required)"]] call bis_fnc_showNotification;
};

commandpointsblu1 = commandpointsblu1 - 2;


if (isNil "AGM_Blood") then {
  null = [player] execVM 'fullheallocal.sqf';
  {null = [_x] execVM 'fullheallocal.sqf';} forEach units group player;
} else {
hint "Oh fuck, something messed up. BAD BAD BAD"
};

hint "You and your squad members have been fully healed";