_centerPos = _this select 0;
_checkedRadius = _this select 1;

commandpointsblu1 = commandpointsblu1 - 3;
publicVariable "commandpointsblu1";

// CREATE MARKER FOR CHECKED SIZE
_markername = format["%1%2vc",round(_centerPos select 0),round(_centerPos select 1)]; // Define marker name
_markerstr = createMarker [str(_markername), _centerPos];
_markerstr setMarkerShape "ELLIPSE";
str(_markername) setMarkerBrush "SolidBorder";
str(_markername) setMarkerColor "ColorWhite";
str(_markername) setMarkerSize [_checkedRadius, _checkedRadius];
str(_markername) setMarkerAlpha 0.3;

PAPABEAR SideChat "The UAV has been sent at the designated coordinates, please standby for further intel.";
sleep 20;
PAPABEAR SideChat "Collecting data from the UAV...";
sleep 7;
PAPABEAR SideChat "We've sent the last known location of the enemy to your map. The UAV is returning to the base";

// CREATE TRIGGER
_trg=createTrigger["EmptyDetector",_centerPos];
_trg setTriggerArea[_checkedRadius,_checkedRadius,0,false];
_trg setTriggerActivation["EAST","PRESENT",false];
_trg setTriggerStatements["this","", ""];
_trg setTriggerTimeout [0, 0, 0, true ];  
sleep 1;
_tlist = list _trg; 

for [{_i=0}, {_i<=150}, {_i = _i+1}] do {  // -- BEGIN FOREACH LOOP
	{
	// CREATE MARKER
	
	_markername2 = format["%1%2uav",round(getpos _x select 0),round(getpos _x select 1)]; // Define marker name
	_markerstr2 = createMarker [str(_markername2), getpos _x];
	_markerstr2 setMarkerShape "ELLIPSE";
	str(_markername2) setMarkerBrush "SolidBorder";
	str(_markername2) setMarkerColor "ColorRed";
	str(_markername2) setMarkerSize [3, 3];
	[_markername2] spawn {
		_markername2 = _this select 0;
		str(_markername2) setMarkerAlpha 1;
		sleep 1.1;
		str(_markername2) setMarkerAlpha 0.9;
		sleep 0.1;
		str(_markername2) setMarkerAlpha 0.8;
		sleep 0.1;
		str(_markername2) setMarkerAlpha 0.7;
		sleep 0.1;
		str(_markername2) setMarkerAlpha 0.6;
		sleep 0.1;
		str(_markername2) setMarkerAlpha 0.5;
		sleep 0.1;
		str(_markername2) setMarkerAlpha 0.4;
		sleep 0.1;
		str(_markername2) setMarkerAlpha 0.3;
		sleep 0.1;
		str(_markername2) setMarkerAlpha 0.2;
		sleep 0.1;
		str(_markername2) setMarkerAlpha 0.1;
		sleep 0.1;
		deleteMarker str(_markername2); 
		};
	} forEach _tlist; // -- END FOREACH LOOP
	sleep 2
};

// WAIT AND EXIT
deleteMarker str(_markername);
deletevehicle _trg;