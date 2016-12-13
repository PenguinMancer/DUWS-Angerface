_radius = _this select 0;
_diff = _this select 1;

[["The zones are being generated<br/>Please wait for mission initialization to complete..."]] spawn BIS_fnc_typeText;
[[{player globalChat "DO NOT USE ACTION MENU UNTIL MISSION INITIALIZATION IS COMPLETE"}],"BIS_fnc_Spawn",true,false] call BIS_fnc_MP;


// ON WATER ? >> FLAT ? >> DISTANCE BETWEEN ZONES ? >> OK !

_worldName = getText(configFile >> "cfgWorlds" >> worldName >> "description");

_fortified = false;
_compound = false;
openMap [true, true]; 
hint "Click somewhere on the island to place enemy zones\nclick on a city or village name to generate it as a zone";
_zones_array = [[-9999,-9999,-9999]];
for [{_i=1}, {_i<=zones_number}, {_i=_i+1}] do  // BEGIN "FOR" LOOP --
{
chosen_zone_settings = false; // STOP RIGHT THERE GENERATOR SCUM
publicVariable "chosen_zone_settings";

_nill = [] execVM "dialog\startup\zone_advanced.sqf";
waitUntil {chosen_zone_settings};  // WAIT UNTIL THE PLAYER HAS CHOSEN THE SETTINGS

	if (zone_fortified) then {//is the zone fortified?
	_fortified = true;
	} else {
	_fortified = false;
	};

	if (zone_compound) then {//is the zone a compound?
	_compound = true;
	} else {
	_compound = false;
	};

    player globalChat format["Choose location for zone #%1...",_i];
    _found = false;
    _zone_radius = 0;
    _points_zone = 0;
    while {_zone_radius<=zones_min_radius} do {
        _random_zones_max_radius = random zones_max_radius;
        _zone_radius = round _random_zones_max_radius;   
        _points_zone = round (_zone_radius/10);
    };
	
    while {!_found} do {
        clicked = false;
        OnMapSingleClick "ClickedPos = _pos; clicked = true;";
        _found_zone = 0; //0 - No, 1 - Yes, 2 - Yes, city zone
        _missionPos = [];
        _nearestLocation = locationNull;
        if (clicked) then {
            _nearbyLocations = nearestLocations [ClickedPos, ["NameVillage","NameCity","NameCityCapital"], 750];
            //We only care about the first one, but will need to take a count
            _nearestLocation = _nearbyLocations select 0;
            if (count _nearbyLocations == 0) then {
                _safePosition = [];
                _safePosition = [ClickedPos, 0,50,15,0,0.1,0,[],[[0,0],[0,0]]] call BIS_fnc_findSafePos;

                if (0 == _safePosition select 0 && 0 == _safePosition select 1) then {//If our safe position is empty, it ain't safe.
                    clicked = false;
                    hint "Invalid position, the position must be flat and no objects must be near the position";
                } else {
                    onMapSingleClick "";
                    _found_zone = 1;
                    _missionPos = _safePosition;
                };
            } else {
                onMapSingleClick "";
                _found_zone = 2;
                _missionPos = locationPosition (_nearestLocation);
            };
        };

        if (_found_zone == 1) then {
            _missionPos = [round(_missionPos select 0),round(_missionPos select 1)];
            _generatezonescript = [format["Zone %1",_i],_points_zone,_zone_radius,_zone_radius,_missionPos,_fortified,true,_compound] execvm "initZones\createzone.sqf";
            _found = true;
            _zones_array = _zones_array + [_missionPos]; 

            player globalChat format["Zone location #%1 accepted!",_i];
            player globalChat format["Generating zone #%1",_i];
            waituntil {scriptdone _generatezonescript};
        }
        else {
			if (_found_zone == 2) then {//Rewrite me and remove this needless redundancy, but allow flexibility per zone type.
                _missionPos = [round(_missionPos select 0),round(_missionPos select 1)];
				
                if (type (_nearestLocation) == "NameVillage") then {//_generatezonescript = Name,Point Val ( (avg. of w + h) /10),w,h,position,not fortified(?),prefab
                _generatezonescript = [format ["%1",text (_nearestLocation)],_points_zone,_zone_radius,_zone_radius,_missionPos,_fortified,true,_compound] execvm "initZones\createzone.sqf";
                player globalChat "Village Zone location accepted!";
                player globalChat format["Generating zone #%1",_i];
                waituntil {scriptdone _generatezonescript};
                };
                if (type (_nearestLocation) == "NameCity") then {//That doesn't even clarify that well, however.
                _generatezonescript = [format ["%1",text (_nearestLocation)],_points_zone,_zone_radius,_zone_radius,_missionPos,_fortified,true,_compound] execvm "initZones\createzone.sqf";
                player globalChat "City Zone location accepted!";
                player globalChat format["Generating zone #%1",_i];
                waituntil {scriptdone _generatezonescript};
                };
                if (type (_nearestLocation) == "NameCityCapital") then {//I just want to apologize to whoever has to read this - I regret nothing.
                _generatezonescript = [format ["%1",text (_nearestLocation)],_points_zone,_zone_radius,_zone_radius,_missionPos,_fortified,true,_compound] execvm "initZones\createzone.sqf";
                player globalChat "Capital Zone location accepted!";
                player globalChat format["Generating zone #%1",_i];
                waituntil {scriptdone _generatezonescript};
				};

                _found = true;
                _zones_array = _zones_array + [_missionPos]; 
            }
        };
    };  // END WHILE LOOP --- LOCATION FOUND
}; // END FOR LOOP -- ALL ZONES CREATED 

openMap [false, false]; 
		
//hintSilent format["All zones found\nWelcome to %1\nHave fun !\nDUWS by kibot",_worldName];
player globalChat format["All zones found. Welcome to %1, %2",_worldName,profileName];


//hint format["MISSION INITIALIZATION COMPLETE!\nCampaign generated\nzones: %1\nmaximum radius: %2m\nminimum radius: %3m\nmax. distance from HQ: %4m\n\nIf you experience performance issues, restart the mission and try reducing the amount of zones/and or their radius",zones_number,zones_max_radius,zones_min_radius,zones_max_dist_from_hq];
[[{player globalChat "MISSION INITIALIZATION COMPLETE!"}],"BIS_fnc_Spawn",true,false] call BIS_fnc_MP;
[[{hint format["MISSION INITIALIZATION COMPLETE!\nCampaign generated\nzones: %1\nmaximum radius: %2m\nminimum radius: %3m\nmax. distance from HQ: %4m\n\nIf you experience performance issues, restart the mission and try reducing the amount of zones/and or their radius",zones_number,zones_max_radius,zones_min_radius,zones_max_dist_from_hq]}],"BIS_fnc_Spawn",true,false] call BIS_fnc_MP;
[] spawn {
    sleep 9;
    [] execVM "Scripts\bottom_right_message.sqf";
};


// For some reasons I had to add a zone [0,0,0] in _zones_array, now I must remove it:
_zones_array = [_zones_array, 0] call BIS_fnc_removeIndex;

//player globalchat format["%1",_zones_array];
sleep 0.1;
//savegame;
enableSaving [ false, false ];

sleep 1;

[[format["MISSION INITIALIZATION COMPLETE!<br/>Campaign generated<br/>Welcome to %1, %2",_worldName,profilename]]] spawn BIS_fnc_typeText;  
playMusic ["EventTrack01a_F_EPA", 0];

Zonesgenerated = true;
publicVariable "Zonesgenerated";