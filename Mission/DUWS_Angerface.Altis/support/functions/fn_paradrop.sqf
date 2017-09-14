_target = _this select 0;

_lz = getpos _target;

if (commandpointsblu1<24) exitWith  
{
  ["info",["Not enough command points","Not enough Command Points (24CP required)"]] call bis_fnc_showNotification;
};
commandpointsblu1 = commandpointsblu1 - 24;
publicVariable "commandpointsblu1";

hint "Reinforcements ETA: 1 minute";
sleep 60;
hint "Paratroopers deployed";

_group = creategroup WEST;
_radius = 130;

_parachute1 = "Steerable_Parachute_F" CreateVehicle _lz;  
_parachute1 setPos [_lz select 0, _lz select 1, (_lz select 2)+150];
_soldier1 = _group createUnit ["Blufor_Medic_1",[0,0,0],[],0,"form"];
_soldier1 moveindriver _parachute1;

_parachute2 = "Steerable_Parachute_F" CreateVehicle _lz;  
_parachute2 setPos [(_lz select 0)+(random _radius)-(random _radius), (_lz select 1)+(random _radius)-(random _radius), (_lz select 2)+150];
_soldier2 = _group createUnit ["Blufor_Light_AntiTank_1",[0,0,0],[],0,"form"];
_soldier2 moveindriver _parachute2;

_parachute3 = "Steerable_Parachute_F" CreateVehicle _lz;  
_parachute3 setPos [(_lz select 0)+(random _radius)-(random _radius), (_lz select 1)+(random _radius)-(random _radius), (_lz select 2)+150];
_soldier3 = _group createUnit ["Blufor_Grenadier_1",[0,0,0],[],0,"form"];
_soldier3 moveindriver _parachute3;

_parachute4 = "Steerable_Parachute_F" CreateVehicle _lz;  
_parachute4 setPos [_lz select 0, _lz select 1, (_lz select 2)+150];
_soldier4 = _group createUnit ["Blufor_Grenadier_1",[0,0,0],[],0,"form"];
_soldier4 moveindriver _parachute4;

_parachute5 = "Steerable_Parachute_F" CreateVehicle _lz;  
_parachute5 setPos [(_lz select 0)+(random _radius)-(random _radius), (_lz select 1)+(random _radius)-(random _radius), (_lz select 2)+150];
_soldier5 = _group createUnit ["Blufor_Autorifleman_1",[0,0,0],[],0,"form"];
_soldier5 moveindriver _parachute5;

_parachute6 = "Steerable_Parachute_F" CreateVehicle _lz;  
_parachute6 setPos [(_lz select 0)+(random _radius)-(random _radius), (_lz select 1)+(random _radius)-(random _radius), (_lz select 2)+150];
_soldier6 = _group createUnit ["Blufor_Soldier_1",[0,0,0],[],0,"form"];
_soldier6 moveindriver _parachute6;

_parachute7 = "Steerable_Parachute_F" CreateVehicle _lz;  
_parachute7 setPos [(_lz select 0)+(random _radius)-(random _radius), (_lz select 1)+(random _radius)-(random _radius), (_lz select 2)+150];
_soldier7 = _group createUnit ["Blufor_Light_AntiTank_1",[0,0,0],[],0,"form"];
_soldier7 moveindriver _parachute7;

_parachute8 = "Steerable_Parachute_F" CreateVehicle _lz;  
_parachute8 setPos [(_lz select 0)+(random _radius)-(random _radius), (_lz select 1)+(random _radius)-(random _radius), (_lz select 2)+150];
_soldier8 = _group createUnit ["Blufor_Autorifleman_1",[0,0,0],[],0,"form"];
_soldier8 moveindriver _parachute8;

sleep 60;

{[_x] joinSilent player} forEach units _group;
hint "The paratroopers have been added under your command";