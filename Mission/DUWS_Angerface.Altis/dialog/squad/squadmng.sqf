  _handle = createDialog "squad_mng_dialog";  
  waitUntil {dialog};

////////////////////////////////////////////////////////////////////////////////////  
// CURRENT NUMBERS OF ALIVE UNITS ON MAP

aliveAllUnits = {alive _x} count allunits;
aliveAllTanks = {(alive _x) && ((_x isKindOf "Tank") || (_x isKindOf "car"))} count vehicles;
aliveAllAir = {_x isKindOf "Air" AND alive _x} count vehicles;
hint format ["There Are Currently:\n\nTOTAL UNITS: %1\nARMORED VEHICLES: %5\nAIRCRAFT: %6\n\nYou Have %2 Command Points\n\nFriendly Army Power: %3\nEnemy Army Power: %4", aliveAllUnits,commandpointsblu1,WARCOM_blufor_ap,WARCOM_opfor_ap,aliveAllTanks,aliveAllAir];
sleep 2;
_operHandler = []execVM "dialog\operative\operative_mission_complete.sqf";
//////////////////////////////////////////////////////////////////////////////////

