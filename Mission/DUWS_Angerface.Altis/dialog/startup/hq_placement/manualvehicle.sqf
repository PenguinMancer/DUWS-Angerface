player_is_choosing_hqpos = true;

clicked = false;

OnMapSingleClick "ClickedPos = _pos; clicked = true;";
openMap [true, true]; 
hint "Click somewhere on the island to move.";

while {true} do {
    if (clicked) then { // player has clicked the map
	
    _foundPickupPos = [ClickedPos, 0,50,10,0,0.25,0,[],[[0,0],[0,0]]] call BIS_fnc_findSafePos; // find a valid pos

    if (0 == _foundPickupPos select 0 && 0 == _foundPickupPos select 1) then {  // INVALID POS
	clicked = false;
	hint "Invalid position, the position must be flat and no objects must be near the position";
	}
	else // VALID POS
	{
	onMapSingleClick "";
	hint "Valid pos, moving.";
	openMap [false, false]; 
	chosen_hq_placement = true;
	_handle = [_foundPickupPos] execVM "initHQ\bluHQvehicleinit.sqf";	
	};  
	
	};
	sleep 0.2;
	if (chosen_hq_placement) exitwith {};
};