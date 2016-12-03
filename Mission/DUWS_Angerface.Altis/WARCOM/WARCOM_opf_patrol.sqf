WARCOM_opf_patrol_type = "";

// Attack waves main

[] spawn {
		while {True} do {
		
			// Type of attack wave
			if (WARCOM_opfor_ap>40) then {
				if (WARCOM_opfor_ap>85) then {
					if (WARCOM_opfor_ap>130) then {
						if (WARCOM_opfor_ap>175) then {
							WARCOM_opf_patrol_type = (configfile >> "CfgGroups" >> "East" >> "OPFOR_DUWS" >> "Mechanized" >> "OIA_MechInf_AT");
						} else {
						WARCOM_opf_patrol_type = (configfile >> "CfgGroups" >> "East" >> "OPFOR_DUWS" >> "Mechanized" >> "OIA_MechInfSquad");
						};
					} else {
					WARCOM_opf_patrol_type = (configfile >> "CfgGroups" >> "East" >> "OPFOR_DUWS" >> "Infantry" >> "OIA_InfSquad_Weapons");
					};
				} else {
				WARCOM_opf_patrol_type = (configfile >> "CfgGroups" >> "East" >> "OPFOR_DUWS" >> "Infantry" >> "OIA_InfSquad");
				};
			} else {
			WARCOM_opf_patrol_type = (configFile >> "CfgGroups" >> "East" >> "OPFOR_DUWS" >> "Infantry" >> "OIA_InfTeam");
			};
		
			  if (count WARCOM_zones_controled_by_OPFOR > 1) then { // make sure opfor is controlling at least 2 zones
			  sleep 2;
			  
			  // find a zone where to spawn OPF wave *** BEGIN
			  _found = false;
			  _randomZone = [];
			  _failSafe = 0;
				while {!_found} do {
				_randomZone = WARCOM_zones_controled_by_OPFOR call BIS_fnc_selectRandom;
				if (_randomZone distance player > 900) then {_found=true;};
				sleep 0.2;
	
				_failSafe = _failSafe + 1;
				if (_failsafe > 5) then {sleep 300; _failsafe = 0;};
				};
			  // find a zone *** end Spawn Troops
			  _randomZonesafe = [_randomZone, 0,100,10,0,0.2,0,[],[[0,0],[0,0]]] call BIS_fnc_findSafePos;//Find a safe spawn position.
		      if (0 == _randomZonesafe select 0 && 0 == _randomZonesafe select 1) then {//If not found, then simply default to the center again.
		      _randomZonesafe = [(_randomZone select 0)+20,_randomZone select 1];
		      };
			  _group = [_randomZonesafe, EAST, WARCOM_opf_patrol_type,[],[],WARCOM_opf_ai_skill_range] call BIS_fnc_spawnGroup;			  
			  _opf_assault = [_group] execVM "WARCOM\WARCOM_wp_opf_patrol.sqf";
			    
				if (debugmode) then {
			    _null = [_group,"patrol"] execvm "debuglocation.sqf";
			    };
			
				// spawn armored
				sleep 2;
				aliveAllTanks = {alive _x AND _x isKindOf "Tank" || _x isKindOf "car"} count vehicles;
				
				if ((WARCOM_opfor_ap>75) && (aliveAllTanks<12)) then {				
				  	[_randomZone] spawn SoldierSpawn_fnc_randomvehpatrolopfground;
					};
				
				// spawn air
				sleep 2;
				aliveAllAir = {_x isKindOf "Air" AND alive _x} count vehicles;
				
				if ((Attack) && (WARCOM_opfor_ap>149) && (aliveAllAir<4)) then {				
					[_randomZone] spawn SoldierSpawn_fnc_randomvehpatrolopfair;
					
				};
			};
		sleep (WARCOM_opf_attack_delay + (random 900));	// patrol delay		  
	};
};