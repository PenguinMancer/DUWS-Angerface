_position = _this select 0;

_foundVeh = call Soldiers_fnc_GetOpforVehGround;

_createdVehFnc = [_position,0,_foundVeh,EAST] call bis_fnc_spawnvehicle;
_vehGroup = _createdVehFnc select 2;
_opf_assault = [_vehGroup] execVM "WARCOM\WARCOM_wp_opf_patrol.sqf";