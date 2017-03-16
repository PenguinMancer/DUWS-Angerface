[] spawn {
	waitUntil {sleep 1; zoneundercontrolblu >= 1};  
	sleep 10;
	[player,"fob_support"] remoteExecCall ["BIS_fnc_addCommMenuItem", 0, true];
    ["info",["Establishing a FOB","Check the briefing for more info (RTI Manual)"]] remoteExecCall ["bis_fnc_showNotification", 0, true];
    sleep 2;
};