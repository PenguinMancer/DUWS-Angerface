_vehic = _this select 0;
_points = _this select 1;

closeDialog 0;

openMap true;

hint "Click on your map to drop the vehicle in that location, or close map to cancel";

Vehicle_drop_mapclick = false;
onMapSingleClick "Vehicle_drop_clickpos = _pos; Vehicle_drop_mapclick = true; onMapSingleClick ''; true;";
waitUntil {Vehicle_drop_mapclick or !(visiblemap)};
if (!visibleMap) exitwith {
	systemChat "Halo jump canceled.";
	breakOut "main";
};
_pos = Vehicle_drop_clickpos;
ATM_Jump_mapclick = if(true) then{
	call compile format [
		'mkr_vehicle = createmarker ["mkr_vehicle", Vehicle_drop_clickpos];
		"mkr_vehicle" setMarkerTypeLocal "hd_dot";
		"mkr_vehicle" setMarkerColorLocal "ColorGreen";
		"mkr_vehicle" setMarkerTextLocal "Vehicle Drop Position";'];
};

_posdrop = getMarkerPos "mkr_vehicle";
_x = _posdrop select 0;
_y = _posdrop select 1;
_z = _posdrop select 2;

openMap false;


commandpointsblu1 = commandpointsblu1 - _points;

/*
hint "The requested vehicle is on your way now. ETA 3 Minutes.";
sleep 60;
hint "ETA 2 Minutes.";
sleep 60;
hint "ETA 1 Minute.";
sleep 60;
hint "The requested vehicle has been dropped near your location";
*/

_parachutevehicle = "Steerable_Parachute_F" CreateVehicle [_x,_y,_z];
_parachutevehicle setPos [_x,_y,_z+50];

_vehicle = _vehic CreateVehicle [_x,_y,_z+50];
_vehicle attachTo [_parachutevehicle,[0,0,0]];

// Land safely
WaitUntil {sleep 0.5; ((((position _vehicle) select 2) < 3) || (isNil "_parachutevehicle"))};
detach _vehicle;
_vehicle SetVelocity [0,0,-5];
deleteVehicle _parachutevehicle;
sleep 0.3;
_vehicle setPos [(position _vehicle) select 0, (position _vehicle) select 1, 0.6];
_smoke = "SmokeShellGreen" CreateVehicle (getpos _vehicle);
["info",["Vehicle Delivered","The vehicle has been marked with green smokes"]] call bis_fnc_showNotification;
deleteMarker "mkr_vehicle";