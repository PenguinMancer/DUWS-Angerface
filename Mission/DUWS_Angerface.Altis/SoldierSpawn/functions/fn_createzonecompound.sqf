params ["_trigger","_size"];

_array_of_prefabs = [
"initZones\prefabs\commandOP.sqf",
"initZones\prefabs\vehfittingstation.sqf",
"initZones\prefabs\reconOutpost.sqf",
"initZones\prefabs\powerRelay.sqf",
"initZones\prefabs\commstation.sqf",
"initZones\prefabs\outpost1.sqf",
"initZones\prefabs\outpost2.sqf",
"initZones\prefabs\barracks.sqf",
"initZones\prefabs\researchStation.sqf",
"initZones\prefabs\campsite.sqf"
];

_path = selectRandom _array_of_prefabs;

_extraprefab = [_trigger, 0,_size-50,15,0,0.2,0,[],[[0,0],[0,0]]] call BIS_fnc_findSafePos;
	  if (0 == _extraprefab select 0 && 0 == _extraprefab select 1) then {//If our safe position is empty, it ain't safe.
	  _handle = [_trigger, _size] spawn SoldierSpawn_fnc_createoppatrol; //If a safe position isn't found, skip the prefab and spawn another patrol.
      } else {
	  _prefabduplicate = [_extraprefab] execVM _path;						//A safe location was found, so we spawn the prefab, and it's patrol.
	  _extraprefab = [(_extraprefab select 0)+10,_extraprefab select 1];
	  _handle = [_extraprefab, 25] spawn SoldierSpawn_fnc_createoppatrol;
	  };