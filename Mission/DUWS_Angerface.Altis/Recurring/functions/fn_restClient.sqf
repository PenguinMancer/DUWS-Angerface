skipTime 6;
[player] call Recurring_fnc_fullheallocal;
{[_x] call Recurring_fnc_fullheallocal;} forEach units group player;
hint "You and your squad members have been fully healed";