_target = _this select 0;

_lz = getpos _target;

_ParachuteSoldier1 = [] call Soldiers_fnc_GetBluforMedic;
_ParachuteSoldier2 = [] call Soldiers_fnc_GetBluforLightAntiTank;
_ParachuteSoldier3 = [] call Soldiers_fnc_GetBluforGrenadier;
_ParachuteSoldier4 = [] call Soldiers_fnc_GetBluforGrenadier;
_ParachuteSoldier5 = [] call Soldiers_fnc_GetBluforAutoRifleman;
_ParachuteSoldier6 = [] call Soldiers_fnc_GetBluforSoldier;
_ParachuteSoldier7 = [] call Soldiers_fnc_GetBluforLightAntiTank;
_ParachuteSoldier8 = [] call Soldiers_fnc_GetBluforAutoRifleman;

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
_soldier1 = _group createUnit [_ParachuteSoldier1,[0,0,0],["[this] remoteExecCall [],0,"form"];
_soldier1 moveindriver _parachute1;

_parachute2 = "Steerable_Parachute_F" CreateVehicle _lz;  
_parachute2 setPos [(_lz select 0)+(random _radius)-(random _radius), (_lz select 1)+(random _radius)-(random _radius), (_lz select 2)+150];
_soldier2 = _group createUnit [_ParachuteSoldier2,[0,0,0],["[this] remoteExecCall [],0,"form"];
_soldier2 moveindriver _parachute2;

_parachute3 = "Steerable_Parachute_F" CreateVehicle _lz;  
_parachute3 setPos [(_lz select 0)+(random _radius)-(random _radius), (_lz select 1)+(random _radius)-(random _radius), (_lz select 2)+150];
_soldier3 = _group createUnit [_ParachuteSoldier3,[0,0,0],["[this] remoteExecCall [],0,"form"];
_soldier3 moveindriver _parachute3;

_parachute4 = "Steerable_Parachute_F" CreateVehicle _lz;  
_parachute4 setPos [_lz select 0, _lz select 1, (_lz select 2)+150];
_soldier4 = _group createUnit [_ParachuteSoldier4,[0,0,0],["[this] remoteExecCall [],0,"form"];
_soldier4 moveindriver _parachute4;

_parachute5 = "Steerable_Parachute_F" CreateVehicle _lz;  
_parachute5 setPos [(_lz select 0)+(random _radius)-(random _radius), (_lz select 1)+(random _radius)-(random _radius), (_lz select 2)+150];
_soldier5 = _group createUnit [_ParachuteSoldier5,[0,0,0],["[this] remoteExecCall [],0,"form"];
_soldier5 moveindriver _parachute5;

_parachute6 = "Steerable_Parachute_F" CreateVehicle _lz;  
_parachute6 setPos [(_lz select 0)+(random _radius)-(random _radius), (_lz select 1)+(random _radius)-(random _radius), (_lz select 2)+150];
_soldier6 = _group createUnit [_ParachuteSoldier6,[0,0,0],["[this] remoteExecCall [],0,"form"];
_soldier6 moveindriver _parachute6;

_parachute7 = "Steerable_Parachute_F" CreateVehicle _lz;  
_parachute7 setPos [(_lz select 0)+(random _radius)-(random _radius), (_lz select 1)+(random _radius)-(random _radius), (_lz select 2)+150];
_soldier7 = _group createUnit [_ParachuteSoldier7,[0,0,0],["[this] remoteExecCall [],0,"form"];
_soldier7 moveindriver _parachute7;

_parachute8 = "Steerable_Parachute_F" CreateVehicle _lz;  
_parachute8 setPos [(_lz select 0)+(random _radius)-(random _radius), (_lz select 1)+(random _radius)-(random _radius), (_lz select 2)+150];
_soldier8 = _group createUnit [_ParachuteSoldier8,[0,0,0],["[this] remoteExecCall [],0,"form"];
_soldier8 moveindriver _parachute8;

{
[_x] remoteExecCall ["Soldiers_fnc_RandomBluforIdentity", 0, true];
} forEach (units _group);

sleep 60;

{[_x] joinSilent player} forEach units _group;
hint "The paratroopers have been added under your command";