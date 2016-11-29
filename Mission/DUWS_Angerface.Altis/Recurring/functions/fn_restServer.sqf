{deleteVehicle _x} forEach allDeadMen;
{null = [_x] execVM 'fullheallocal.sqf';} forEach units group player;
null = [player] execVM 'fullheallocal.sqf';

if (isServer) then {
sleep 0.3;
enableSaving true;
sleep 0.1;
saveGame;
enableSaving false;
hint "You and your squad members have been fully healed";


savegameNumber = savegameNumber + 1;
publicVariable "savegameNumber";

sleep 2;
[] execVM "Scripts\bottom_right_message.sqf";
};