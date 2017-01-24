_centerPos = _this select 0;

//Laptop for vehicle requests
_laptoptable = createVehicle ["Land_CampingTable_small_F", [0,0,0], [], 0, "NONE"];
_laptoptable setDir 270;
_laptoptable enableSimulation false;
_laptoptable allowdamage false;
_laptoptable setdamage 0;
_laptoptable setpos [(_centerpos select 0)-5.7, (_centerpos select 1)-5.519];

_laptopposition = _laptoptable modelToWorld [0,0,.4];
_laptop = createVehicle ["Land_Laptop_unfolded_F", [0,0,0], [], 0, "NONE"];
_laptop setDir 270;
_laptop enableSimulation false;
_laptop allowdamage false;
_laptop setdamage 0;
_laptop setpos _laptopposition;

[[_laptop,["<t color='#ffb700'>Request Vehicle</t>","dialog\requestvehicle.sqf", "", 0, true, true]],"addAction",true,true] call BIS_fnc_MP;
[[_laptop,["<t color='#ffb700'>Build Fortifications</t>","dialog\Buildfortifications.sqf", "", 0, true, true, "", "BLD1cap == 1"]],"addAction",true,true] call BIS_fnc_MP;