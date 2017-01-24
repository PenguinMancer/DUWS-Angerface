//Re-inits all 0-8 menu support unlocks after a "RESUME"

_supplydrop = [player,"ammo"] call BIS_fnc_addCommMenuItem;
[player, _supplydrop] call BIS_fnc_removeCommMenuItem;
_vehicledrop = [player,"vehicle"] call BIS_fnc_addCommMenuItem;
[player, _vehicledrop] call BIS_fnc_removeCommMenuItem;
hint "supports reinitialized!";