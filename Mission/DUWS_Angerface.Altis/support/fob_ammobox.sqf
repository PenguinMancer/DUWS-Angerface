_target = _this select 0;

_location = getpos _target;

if (commandpointsblu1<5) exitWith  
{
  ["info",["Not enough command points","Not enough Command Points (5CP required)"]] call bis_fnc_showNotification;
};
commandpointsblu1 = commandpointsblu1 - 5;
publicVariable "commandpointsblu1";

hint "A supply crate has been dropped near the FOB";

_parachute = "Steerable_Parachute_F" CreateVehicle _location;
_parachute setPos [_location select 0, _location select 1, (_location select 2)+20];

_ammo = "B_supplyCrate_F" CreateVehicle [_location select 0,_location select 1,(_location select 2)+20];
_ammo attachTo [_parachute,[0,0,0]];

clearMagazineCargo _ammo;
clearWeaponCargo _ammo;
clearItemCargoGlobal _ammo;

_ammo addaction ["<t color='#ff1111'>Armory</t>",{ [] call Recurring_fnc_VA }, "", 0, true, true, "", "_this == player"];
                                                                          
waitUntil {sleep 1; getpos _ammo select 2<0.3};
_smoke = "SmokeShellGreen" CreateVehicle (getpos _ammo);
["info",["Supply delivered","The supply crate has been marked with green smokes"]] call bis_fnc_showNotification;