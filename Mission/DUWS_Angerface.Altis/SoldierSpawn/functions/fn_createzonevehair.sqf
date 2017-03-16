params ["_trigger","_size"];

_originaltrigger = _trigger;
_safetrigger = [_trigger, 0,_size-50,15,0,0.2,0,[],[[0,0],[0,0]]] call BIS_fnc_findSafePos;
_trigger = [(_trigger select 0)+40,_trigger select 1];
if (0 == _safetrigger select 0 && 0 == _safetrigger select 1) then {//If our safe position is empty, it ain't safe.
_safetrigger = _trigger;
};
_trigger = _safetrigger;

_foundVeh = call Soldiers_fnc_GetOpforVehAir;

_createdVehFnc = [[(_trigger select 0), (_trigger select 1)],0,_foundVeh, EAST] call bis_fnc_spawnvehicle;

_vehGroup = _createdVehFnc select 2;
[_vehGroup, _trigger, _size] call bis_fnc_taskPatrol;