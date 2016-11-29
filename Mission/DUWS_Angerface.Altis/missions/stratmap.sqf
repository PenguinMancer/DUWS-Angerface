_array_of_missions = [];  // init the array of missions
_allFound = false;
_counter = 0;

if (isnil ("Mission_timeout_request")) then {Mission_timeout_request = true;};
if (!Mission_timeout_request) exitWith {PAPABEAR=[West,"HQ"]; PAPABEAR SideChat "We don't have any other missions for you right now, try again in 10 minutes";};
if (!isServer) exitWith {hint "Only the host can request side missions for now"};
if (officedead) exitWith {hint "Your commanding officer is dead, so there are no side-missions allowed!"};

startLoadingScreen ["Loading zones..."];
_kibot_pos_array_missionPos = [[-99999,-99999,-99999]];

while {_counter < 19;} do {
_foundSafePos = [center_of_map, 0,half_of_map,5,0,0.1,0] call BIS_fnc_findSafePos;

_array_exist = true;
_found_dist_away = true;

_array_exist = false;
     
_kibot_distances_array = [];

       for [{_t=1}, {_t<=count _kibot_pos_array_missionPos}, {_t=_t+1}] do // for each element of the array of positions
           {                                         
           _kibot_pos_array_missionPos_index = _t-1;  // get the index of the element
           _kibot_distances_array = _kibot_distances_array +[(_kibot_pos_array_missionPos select _kibot_pos_array_missionPos_index) distance (_foundSafePos)]; //compare the distance of the given pos with other pos in pos array and add it into an array of all the compared distance --> an array of distances is obtained
           };

       for [{_t=1}, {_t<=count _kibot_distances_array}, {_t=_t+1}] do // for each element of the array of distances we just generated...
           {                                           
           _kibot_distances_array_index = _t-1; // get the index of the tested element
           _check = (_kibot_distances_array select _kibot_distances_array_index); // select the element we just took the index so we can check them
              if (_check < 1000) then {    // check the distances contained the distances array 1 by 1. If a distance is inferior to defined value, this is a no go.
              _found_dist_away = false;   // If no zone is under 1500 meters, tell it to this variable
              };
            };
            
//if (_found_dist_away && !_array_exist) then {_kibot_pos_array_missionPos = [_kibot_pos_array_missionPos, 0] call BIS_fnc_removeIndex};  // remove the -9999 entry if there is

// if a distance has been found, add the position to the array of pos, because it's a valid pos.
if (_found_dist_away) then {};



    if (_foundsafePos distance player > 1000 && _found_dist_away && _foundsafePos distance hq_blu1 < zones_max_dist_from_hq) then {  // A VALID POS HAS BEEN FOUND
    switch (_counter) do
   {
    case 0: // mission RECOVER
    {
        //add the mission into the strat map
        _radius = 500;
        MissionNameCase0 = call Recurring_fnc_generateSideMissionName;
        PosOfCase0Mission = _foundSafepos;
        
        _missionArray = [[(_foundSafepos select 0)+(random _radius)-(random _radius),(_foundSafepos select 1)+(random _radius)-(random _radius)],
        {_handle = [PosOfCase0Mission] execVM "missions\missions\recover\mission.sqf"; _handle = execVM "missions\missionTimer.sqf"},
        MissionNameCase0,
        "Recover the MCA<br/>Mobile Communications Array<br/><br/>We’ve picked up radio disruptions that match that of a MCA. Capturing this from the hands of the enemy would free up the airwaves, and put us back on the radar. The mountains aren’t exactly rife with radio towers, so get on it, men.",
        "",
        "\a3\ui_f\data\gui\cfg\hints\BasicSpeed_ca.paa",
        1,
        []
        ];
        _array_of_missions = _array_of_missions + [_missionArray];
    };
	
	case 1: // mission ROULETTE
    {
        //add the mission into the strat map
        _radius = 500;
        MissionNameCase1 = call Recurring_fnc_generateSideMissionName;
        PosOfCase1Mission = _foundSafepos;
        
        _missionArray = [[(_foundSafepos select 0)+(random _radius)-(random _radius),(_foundSafepos select 1)+(random _radius)-(random _radius)],
        {_handle = [PosOfCase1Mission] execVM "missions\missions\roulette\mission.sqf"; _handle = execVM "missions\missionTimer.sqf"},
        MissionNameCase1,
        "Defuse the Gorgon<br/>Get a Gorgon and 200 spendable CP or lose all CP.<br/><br/>Well, this is an issue. The military APC moving supplies to you seems to have been commandeered by the enemy. They’ve rigged it up to explode, which would severely cut into your supply line for the next week. Go defuse it, men, or risk losing it all. This is a big deal, so drop everything and get on it, or you’ll be on your own until the next supply rig rolls through.",
        "",
        "\a3\ui_f\data\gui\cfg\hints\IEDs_ca.paa",
        1,
        []
        ];
        _array_of_missions = _array_of_missions + [_missionArray];
    };
	
	case 2: // mission Do or Die
    {
        //add the mission into the strat map
        _radius = 500;
        MissionNameCase2 = call Recurring_fnc_generateSideMissionName;
        PosOfCase2Mission = _foundSafepos;
        
        _missionArray = [[(_foundSafepos select 0)+(random _radius)-(random _radius),(_foundSafepos select 1)+(random _radius)-(random _radius)],
        {_handle = [PosOfCase2Mission] execVM "missions\missions\doordie\mission.sqf"; _handle = execVM "missions\missionTimer.sqf"},
        MissionNameCase2,
        "Save Andropov<br/>You Must Save Commandant Andropov.<br/><br/>Men, we may have underestimated our enemy. Somehow, they managed to capture Commandant Andropov and rig him with a high explosive chestplate. Cutting it off or entering an incorrect code would cause it to go off instantly. Luckily, we know where the defusal codes are. Go find them, bring them back to your HQ, and save the Commandant.<br/><br/>May I remind you, Andropov is the one paying your bills. If he goes, the Ural mountains go. Save his life, and expect a big fat bonus. Fail, and you lose everything.",
        "",
        "\a3\ui_f\data\gui\cfg\hints\IEDs_ca.paa",
        1,
        []
        ];
        _array_of_missions = _array_of_missions + [_missionArray];
    };
	case 3: // mission RESCUE
    {
        //add the mission into the strat map
        _radius = 300;
        MissionNameCase3 = call Recurring_fnc_generateSideMissionName;
        PosOfCase3Mission = _foundSafepos;
        
        _missionArray = [[(_foundSafepos select 0)+(random _radius)-(random _radius),(_foundSafepos select 1)+(random _radius)-(random _radius)],
        {_handle = [PosOfCase3Mission] execVM "missions\missions\rescue\mission.sqf"; _handle = execVM "missions\missionTimer.sqf"},
        MissionNameCase3,
        "Provide fire support<br/>Save the friendly patrol<br/><br/>A local patrol just radioed in, calling for support against an ambush. Now’s a good chance to show that we’re not a force to be reckoned with. Go save the patrol, men, and make sure the enemies don’t make it back to base.",
        "",
        "\a3\ui_f\data\gui\cfg\hints\ActionMenu_ca.paa",
        1,
        []
        ];
        _array_of_missions = _array_of_missions + [_missionArray];
    };

    case 4: // mission STEAL
    {
        //add the mission into the strat map
        _radius = 300;
        MissionNameCase4 = call Recurring_fnc_generateSideMissionName;
        PosOfCase4Mission = _foundSafepos;
        
        _missionArray = [[(_foundSafepos select 0)+(random _radius)-(random _radius),(_foundSafepos select 1)+(random _radius)-(random _radius)],
        {_handle = [PosOfCase4Mission] execVM "missions\missions\steal\mission.sqf"; _handle = execVM "missions\missionTimer.sqf"},
        MissionNameCase4,
        "Recover the supply truck<br/>Bring the supply truck back to HQ<br/><br/>Men, we may have run into a spot of luck. A recon team has picked up a transport truck carrying supplies of some sort abandoned in the snow. We’re not sure what’s in it, but I know we want it. Go recover it, and bring it back to HQ, but be careful. This may be an ambush.",
        "",
        "\a3\ui_f\data\gui\cfg\hints\BasicSpeed_ca.paa",
        1,
        []
        ];
        _array_of_missions = _array_of_missions + [_missionArray];
    };
    
    case 5: // mission TARGET
    {
        //add the mission into the strat map
        _radius = 300;
        MissionNameCase5 = call Recurring_fnc_generateSideMissionName;
        PosOfCase5Mission = _foundSafepos;
        
        _missionArray = [[(_foundSafepos select 0)+(random _radius)-(random _radius),(_foundSafepos select 1)+(random _radius)-(random _radius)],
        {_handle = [PosOfCase5Mission] execVM "missions\missions\target\mission.sqf"; _handle = execVM "missions\missionTimer.sqf"},
        MissionNameCase5,
        "Kill the HVT<br/>Find the Spetsnaz defector and kill him<br/><br/>Men, Commandant Andropov has put forward a personal mission with quite a payoff. It seems a man he trained with has been spotted with the enemy troops, commanding a decently large force. Find him and kill him, and you earn a nice bonus.",
        "",
        "\a3\ui_f\data\gui\cfg\hints\Annoucning_ca.paa",
        1,
        []
        ];
        _array_of_missions = _array_of_missions + [_missionArray];
    };
    
    case 6: // mission DESTROY
    {
        //add the mission into the strat map
        _radius = 300;
        MissionNameCase6 = call Recurring_fnc_generateSideMissionName;
        PosOfCase6Mission = _foundSafepos;
        
        _missionArray = [[(_foundSafepos select 0)+(random _radius)-(random _radius),(_foundSafepos select 1)+(random _radius)-(random _radius)],
        {_handle = [PosOfCase6Mission] execVM "missions\missions\destroy\mission.sqf"; _handle = execVM "missions\missionTimer.sqf"},
        MissionNameCase6,
        "Destroy the radio tower<br/>Find the commandeered radio tower and demolish it<br/><br/>The enemy has captured a radio tower in the mountains, and is broadcasting some sort of ECM signal. It shuts down radio broadcasts near it, cellphones, pagers, even security cameras. Find the tower and demolish it, men.",
        "",
        "\a3\ui_f\data\gui\cfg\hints\IEDs_ca.paa",
        1,
        []
        ];
        _array_of_missions = _array_of_missions + [_missionArray];
    };
    
    case 7: // mission PILOT
    {
        //add the mission into the strat map
        _radius = 300;
        MissionNameCase7 = call Recurring_fnc_generateSideMissionName;
        PosOfCase7Mission = _foundSafepos;
        
        _missionArray = [[(_foundSafepos select 0)+(random _radius)-(random _radius),(_foundSafepos select 1)+(random _radius)-(random _radius)],
        {_handle = [PosOfCase7Mission] execVM "missions\missions\pilot\mission.sqf"; _handle = execVM "missions\missionTimer.sqf"},
        MissionNameCase7,
        "Rescue the pilot<br/>Find Hawk and bring him back to HQ safely<br/><br/>Men, grave news. Yesterday at 0900 a G4S aircraft carrying supplies and backup troops to you was shot down somewhere in the mountains. The Pilot, codenamed Hawk, survived the crash and is radioing in for assistance Now, Hawk’s tough, as tough as a two-dollar steak, but in the jungle lies tigers. Find him and bring him back to HQ. I won’t leave one of my own bleeding on the field.",
        "",
        "\a3\ui_f\data\gui\cfg\hints\Direction_ca.paa", 
        1,
        []
        ];
        _array_of_missions = _array_of_missions + [_missionArray];
    };
    
    case 8: // mission SABOTAGE
    {
        //add the mission into the strat map
        _radius = 300;
        MissionNameCase8 = call Recurring_fnc_generateSideMissionName;
        PosOfCase8Mission = _foundSafepos;
        
        _missionArray = [[(_foundSafepos select 0)+(random _radius)-(random _radius),(_foundSafepos select 1)+(random _radius)-(random _radius)],
        {_handle = [PosOfCase8Mission] execVM "missions\missions\sabotage\mission.sqf"; _handle = execVM "missions\missionTimer.sqf"},
        MissionNameCase8,
        "Destroy power supplies<br/>Sabotage the power supply<br/><br/>The enemy’s been using a power supply for some time now, and the power it’s outputting is pretty intense. We don’t know what it’s going to but with that kind of power consumption, it’d be better for them not to have it Go destroy the power supply.",
        "",
        "\a3\ui_f\data\gui\cfg\hints\Rules_ca.paa",
        1,
        []
        ];
        _array_of_missions = _array_of_missions + [_missionArray];
    };

    case 9: // mission ARMORY
    {
        //add the mission into the strat map
        _radius = 300;
        MissionNameCase9 = call Recurring_fnc_generateSideMissionName;
        PosOfCase9Mission = _foundSafepos;

        _missionArray = [[(_foundSafepos select 0)+(random _radius)-(random _radius),(_foundSafepos select 1)+(random _radius)-(random _radius)],
        {_handle = [PosOfCase9Mission] execVM "missions\missions\armory\mission.sqf"; _handle = execVM "missions\missionTimer.sqf"},
        MissionNameCase9,
        "Recover the mobile armory<br/>Recover the MAB<br/><br/>The enemy managed to get their hands on a Mobile Armory Building. We’re not sure what’s inside it, if anything, but the MAB itself is the prize here. In the back of it is enough secure storage to carry an entire building’s worth of supplies. It’d be worth it to take it out of their hands and put it into ours.",
        "",
        "\a3\ui_f\data\gui\cfg\hints\Annoucning_ca.paa",
        1,
        []
        ];
        _array_of_missions = _array_of_missions + [_missionArray];
    };

    case 10: // mission TRANSPORTHELI
    {
        //add the mission into the strat map
        _radius = 300;
        MissionNameCase10 = call Recurring_fnc_generateSideMissionName;
        PosOfCase10Mission = _foundSafepos;

        _missionArray = [[(_foundSafepos select 0)+(random _radius)-(random _radius),(_foundSafepos select 1)+(random _radius)-(random _radius)],
        {_handle = [PosOfCase10Mission] execVM "missions\missions\transportheli\mission.sqf"; _handle = execVM "missions\missionTimer.sqf"},
        MissionNameCase10,
        "Recover transport helicopter<br/>Find and capture the CH-49 Mohawk<br/><br/>Eagle, hope the beach mission back in N’Ziwasogo wasn’t a one time thing, because the enemy got their hands on a CH-49 Mohawk. Take it from them, and you’ll be able to parachute into enemy territory.",
        "",
        "\a3\ui_f\data\gui\cfg\hints\Annoucning_ca.paa",
        1,
        []
        ];
        _array_of_missions = _array_of_missions + [_missionArray];
    };

    case 11: // mission build
    {
        //add the mission into the strat map
        _radius = 300;
        MissionNameCase11 = call Recurring_fnc_generateSideMissionName;
        PosOfCase11Mission = _foundSafepos;

        _missionArray = [[(_foundSafepos select 0)+(random _radius)-(random _radius),(_foundSafepos select 1)+(random _radius)-(random _radius)],
        {_handle = [PosOfCase11Mission] execVM "missions\missions\builder\mission.sqf"; _handle = execVM "missions\missionTimer.sqf"},
        MissionNameCase11,
        "Recover the MCU<br/>Find and capture the Mobile Construction Unit<br/><br/>Putin’s got his eyes on the Ukraine Rebellions, men, and as such, he’s not too concerned with some assholes shacked up on the edges of Siberia. As such, we’re working with a skeleton crew here, only the barest bones of what Mother Russia could afford. First priority here is to find a Mobile Construction Unit, and to start building some defences.",
        "",
        "\a3\ui_f\data\gui\cfg\hints\Annoucning_ca.paa",
        1,
        []
        ];
        _array_of_missions = _array_of_missions + [_missionArray];
    };

	case 12: // mission RADAR
    {
        //add the mission into the strat map
        _radius = 300;
        MissionNameCase12 = call Recurring_fnc_generateSideMissionName;
        PosOfCase12Mission = _foundSafepos;
        
        _missionArray = [[(_foundSafepos select 0)+(random _radius)-(random _radius),(_foundSafepos select 1)+(random _radius)-(random _radius)],
        {_handle = [PosOfCase12Mission] execVM "missions\missions\radar\mission.sqf"; _handle = execVM "missions\missionTimer.sqf"},
        MissionNameCase12,
        "Destroy the Anti Air<br/>Find and destroy the Anti Air emplacements<br/><br/>Men, we’ve managed to track down the AA that shot down Hawk last night. It’s time to take blood back for blood. We’re not 100% on the placements or what they have, but whatever it is, it’s defended by at least one ZSU-23-4 Shilka. It’s imperative that this radar’s found and destroyed ASAP.",
        "",
        "\a3\ui_f\data\gui\cfg\hints\Rules_ca.paa",
        1,
        []
        ];
        _array_of_missions = _array_of_missions + [_missionArray];
    };

    case 13: // mission Hunt
    {
        //add the mission into the strat map
        _radius = 300;
        MissionNameCase13 = call Recurring_fnc_generateSideMissionName;
        PosOfCase13Mission = _foundSafepos;
        
        _missionArray = [[(_foundSafepos select 0)+(random _radius)-(random _radius),(_foundSafepos select 1)+(random _radius)-(random _radius)],
        {_handle = [PosOfCase13Mission] execVM "missions\missions\sniper\mission.sqf"; _handle = execVM "missions\missionTimer.sqf"},
        MissionNameCase13,
        "Find and kill the G4S deserters<br/>Find and eliminate the ex-G4S sniper team<br/><br/>Alright men, it’s time for a more personal mission. This isn’t coming from Andropov, but from higher up the command in G4S. It seems that two former G4S soldiers are operating in the AO, a sniper team by the names of the Eye and the Finger. They operated out of Fallujah for a long while before going AWOL, leading to total defeat in the region. Find them and eliminate them, men, but be careful. They’re geared as well as you are, and are surely on guard. I handled them myself, and they know to shake with your right hand, but hold a rock in your left.",
        "",
        "\a3\ui_f\data\gui\cfg\hints\Annoucning_ca.paa",
        1,
        []
        ];
        _array_of_missions = _array_of_missions + [_missionArray];
    };

    case 14: // mission ARMOUR
    {
        //add the mission into the strat map
        _radius = 300;
        MissionNameCase14 = call Recurring_fnc_generateSideMissionName;
        PosOfCase14Mission = _foundSafepos;
        
        _missionArray = [[(_foundSafepos select 0)+(random _radius)-(random _radius),(_foundSafepos select 1)+(random _radius)-(random _radius)],
        {_handle = [PosOfCase14Mission] execVM "missions\missions\sdv\mission.sqf"; _handle = execVM "missions\missionTimer.sqf"},
        MissionNameCase14,
        "Recover the device<br/>Find and capture the strange device<br/><br/>For once, the fog over the urals cleared a little, letting us get some solid pictures with our satellites. We’ve found a couple command points, one in a small town to the east, another in what looks like a russian gulag, and we’ve also found a patrol carrying… Something. We don’t know what it is. It looks like nothing we’ve seen before. Go find it and bring it back, and maybe we can figure out what these people are capable of.",
        "",
        "\a3\ui_f\data\gui\cfg\hints\BasicSpeed_ca.paa",
        1,
        []
        ];
        _array_of_missions = _array_of_missions + [_missionArray];
    };	
	
	case 15: // mission ARMS
    {
        //add the mission into the strat map
        _radius = 300;
        MissionNameCase15 = call Recurring_fnc_generateSideMissionName;
        PosOfCase15Mission = _foundSafepos;
        
        _missionArray = [[(_foundSafepos select 0)+(random _radius)-(random _radius),(_foundSafepos select 1)+(random _radius)-(random _radius)],
        {_handle = [PosOfCase15Mission] execVM "missions\missions\arms\mission.sqf"; _handle = execVM "missions\missionTimer.sqf"},
        MissionNameCase15,
        "Capture the weapons cache<br/>Find and capture a weapons shipment<br/><br/>Men, we’ve sent a shipment of weapons towards your location. The problem is, whoever’s in the mountains got to it first. Without those arms, you’re about as dangerous as a declawed kitten. Get on it.",
        "",
        "\a3\ui_f\data\gui\cfg\hints\BasicSpeed_ca.paa",
        1,
        []
        ];
        _array_of_missions = _array_of_missions + [_missionArray];
    };

	case 16: // mission Armour
    {
        //add the mission into the strat map
        _radius = 300;
        MissionNameCase16 = call Recurring_fnc_generateSideMissionName;
        PosOfCase16Mission = _foundSafepos;
        
        _missionArray = [[(_foundSafepos select 0)+(random _radius)-(random _radius),(_foundSafepos select 1)+(random _radius)-(random _radius)],
        {_handle = [PosOfCase16Mission] execVM "missions\missions\armour\mission.sqf"; _handle = execVM "missions\missionTimer.sqf"},
        MissionNameCase16,
        "Kill The Tank Commander<br/>There's an elite tank commander in the area, who has been decimating our forces in one on one combat. Go find him, disable his tank, and kill him.",
        "",
        "\a3\ui_f\data\gui\cfg\hints\BasicSpeed_ca.paa",
        1,
        []
        ];
        _array_of_missions = _array_of_missions + [_missionArray];
    };
	
	case 17: // mission Sling
    {
        //add the mission into the strat map
        _radius = 300;
        MissionNameCase17 = call Recurring_fnc_generateSideMissionName;
        PosOfCase17Mission = _foundSafepos;
        
        _missionArray = [[(_foundSafepos select 0)+(random _radius)-(random _radius),(_foundSafepos select 1)+(random _radius)-(random _radius)],
        {_handle = [PosOfCase17Mission] execVM "missions\missions\sling\mission.sqf"; _handle = execVM "missions\missionTimer.sqf"},
        MissionNameCase17,
        "We have to sling load stuff<br/>We have reports of what appears to be an unknown cargo box around this area. Find it and return it back to base. You will require a heavy lift helicopter for this task.",
        "",
        "\a3\ui_f\data\gui\cfg\hints\BasicSpeed_ca.paa",
        1,
        []
        ];
        _array_of_missions = _array_of_missions + [_missionArray];
    };
	
	case 18: // mission CQC
    {
        //add the mission into the strat map
        _radius = 300;
        MissionNameCase18 = call Recurring_fnc_generateSideMissionName;
		
		_towns = nearestLocations [getPosATL hq_blu1, ["NameVillage","NameCity","NameCityCapital"], 25000];

		_RandomTownPosition = position (_towns select (floor (random (count _towns))));
		
        PosOfCase18Mission = _RandomTownPosition;
        
        _missionArray = [[(_RandomTownPosition select 0),(_RandomTownPosition select 1)],
        {_handle = [PosOfCase18Mission] execVM "missions\missions\cqc\mission.sqf"; _handle = execVM "missions\missionTimer.sqf"},
        MissionNameCase18,
        "Clear the town<br/>We have reports that a town has been occupied by enemy forces. Go murder them terries.",
        "",
        "\a3\ui_f\data\gui\cfg\hints\BasicSpeed_ca.paa",
        1,
        []
        ];
        _array_of_missions = _array_of_missions + [_missionArray];
    };
	
	};
    _counter = _counter + 1;
    _kibot_pos_array_missionPos = _kibot_pos_array_missionPos + [_foundSafePos];
    };
	
};
endLoadingScreen;

// -------****- NOW OPEN THE MAP

_isNight = false;
if ((20 < daytime) OR (daytime < 5)) then {_isNight=true};


[(findDisplay 46),                                                                          // 0: DISPLAY - parent display. When empty, mission display is used.
getpos player,                                                                // 1: ARRAY - default view position in format [x,y,y] or [x,y]
_array_of_missions,                                                              // 2: ARRAY - list of missions in format:             
[],                                                                           // 3: ARRAY - list of ORBAT groups in format:
[],                                                                           // 4: ARRAY - list of markers revealed in strategic map (will be hidden when map is closed)
[],                                                                           // 5: ARRAY - list of custom images in format:
1,                                                                            // 6: NUMBER - value in range <0-1> defining weather on strategic map (i.e. density of clouds)
_isNight                                                                         // 7: BOOL - true for night version of strategic map (darker with blue tone)
] call BIS_fnc_strategicMapOpen;

/*
Parameter(s):
		0: DISPLAY - parent display. When empty, mission display is used.
		1: ARRAY - default view position in format [x,y,y] or [x,y]
		2: ARRAY - list of missions in format:
			0: ARRAY - mission position in format [x,y,y] or [x,y]
			1: CODE - expression executed when user clicks on mission icon
			2: STRING - mission name
			3: STRING - short description
			4: STRING - name of mission's player
			5: STRING - path to overview image
			6: NUMBER - size multiplier, 1 means default size
			7: ARRAY - parameters for the -on click- code; referenced from the script as (_this select 9)
		3: ARRAY - list of ORBAT groups in format:
			0: ARRAY - group position in format [x,y,y] or [x,y]
			1: CONFIG - preview CfgORBAT group
			2: CONFIG - topmost displayed CfgORBAT group
			3: ARRAY - list of allowed tags
			4: NUMBER - maximum number of displayed tiers
		4: ARRAY - list of markers revealed in strategic map (will be hidden when map is closed)
		5: ARRAY - list of custom images in format:
			0: STRING - texture path
			1: ARRAY - color in format [R,G,B,A]
			2: ARRAY - image position
			3: NUMBER - image width (in metres)
			4: NUMBER - image height (in metres)
			5: NUMBER - image angle (in degrees)
			6: STRING - text displayed next to the image
			7: BOOL - true to display shadow
		6: NUMBER - value in range <0-1> defining weather on strategic map (i.e. density of clouds)
		7: BOOL - true for night version of strategic map (darker with blue tone)

	Returns:
	DISPLAY - RscDisplayStrategicMap
	*/
