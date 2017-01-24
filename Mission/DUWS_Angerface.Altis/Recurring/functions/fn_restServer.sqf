{deleteVehicle _x} forEach allDeadMen;

if (isServer) then {
sleep 0.3;
enableSaving true;
sleep 0.1;
saveGame;
enableSaving false;

savegameNumber = savegameNumber + 1;
publicVariable "savegameNumber";

sleep 2;
[] spawn Recurring_fnc_bottom_right_message;
};