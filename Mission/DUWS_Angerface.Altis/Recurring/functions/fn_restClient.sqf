skipTime 6;
null = [player] execVM 'fullheallocal.sqf';
{null = [_x] execVM 'fullheallocal.sqf';} forEach units group player;
hint "You and your squad members have been fully healed";
