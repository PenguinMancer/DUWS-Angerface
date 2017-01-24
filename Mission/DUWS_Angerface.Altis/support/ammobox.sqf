_target = _this select 0;

_location = getpos _target;

if (commandpointsblu1<15) exitWith  
{
  ["info",["Not enough command points","Not enough Command Points (15CP required)"]] call bis_fnc_showNotification;
};
commandpointsblu1 = commandpointsblu1 - 15;
publicVariable "commandpointsblu1";

hint "The requested supplies are on the way now. ETA 2 Minutes.";
sleep 60;
hint "ETA 1 Minute.";
sleep 60;
hint "A supply crate has been dropped near your location";

_parachute = "Steerable_Parachute_F" CreateVehicle _location;
_parachute setPos [_location select 0, _location select 1, (_location select 2)+50];

_ammo = "rhsusf_weapon_crate" CreateVehicle [_location select 0,_location select 1,(_location select 2)+50];
_ammo attachTo [_parachute,[0,0,0]];

_ammo SetVelocity [0,0,-5];

clearMagazineCargo _ammo;
clearWeaponCargo _ammo;
clearItemCargoGlobal _ammo;

[[_ammo,["<t color='#ff1111'>Armory</t>",{ [] call Recurring_fnc_VA },[], 0, true, true, "", "_this distance _target < 4"]],"addAction",true,true] call BIS_fnc_MP;

// Land safely
WaitUntil {sleep 0.5; ((((position _ammo) select 2) < 3) || (isNil "_parachute"))};
detach _ammo;
_ammo SetVelocity [0,0,-5];
deleteVehicle _parachute;      
sleep 0.3;
_ammo setPos [(position _ammo) select 0, (position _ammo) select 1, 0.6];
_smoke = "SmokeShellGreen" CreateVehicle (getpos _ammo);
["info",["Vehicle Delivered","The vehicle has been marked with green smokes"]] call bis_fnc_showNotification;
