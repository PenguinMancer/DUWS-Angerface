_position = _this select 0;

_foundVeh = call Soldiers_fnc_GetBluforVehAir;

_createdVehFnc = [_position,0,_foundVeh,WEST] call bis_fnc_spawnvehicle;
_vehGroup = _createdVehFnc select 2;
_blu_assault = [_vehGroup] execVM "WARCOM\WARCOM_wp_blu_patrol.sqf";