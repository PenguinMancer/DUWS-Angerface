WARCOM_blu_patrol_type = "";

[] spawn {
		  
          while {True} do {
		  
				// Type of attack wave
				if (WARCOM_blufor_ap>40) then {
					if (WARCOM_blufor_ap>85) then {
						if (WARCOM_blufor_ap>130) then {
							if (WARCOM_blufor_ap>175) then {
								WARCOM_blu_attack_wave_type = (configfile >> "CfgGroups" >> "West" >> "BLU_DUWS" >> "Mechanized" >> "BUS_MechInf_AT");
							} else {
							WARCOM_blu_attack_wave_type = (configfile >> "CfgGroups" >> "West" >> "BLU_DUWS" >> "Mechanized" >> "BUS_MechInfSquad");
							};
						} else {
						WARCOM_blu_attack_wave_type = (configfile >> "CfgGroups" >> "West" >> "BLU_DUWS" >> "Infantry" >> "BUS_InfSquad_Weapons");
						};
					} else {
					WARCOM_blu_attack_wave_type = (configfile >> "CfgGroups" >> "West" >> "BLU_DUWS" >> "Infantry" >> "BUS_InfSquad");
					};
				} else {
				WARCOM_blu_attack_wave_type = (configFile >> "CfgGroups" >> "West" >> "BLU_DUWS" >> "Infantry" >> "BUS_InfTeam");
				};
		  
			  if (count WARCOM_zones_controled_by_BLUFOR > 1) then { // make sure blufor is controlling at least 2 zones
			  sleep 2;
			  
			  // find a zone where to spawn OPF wave *** BEGIN
			  _found = false;
			  _randomZone = [];
			  _failSafe = 0;
				while {!_found} do {
				_randomZone = WARCOM_zones_controled_by_BLUFOR call BIS_fnc_selectRandom;
				if (_randomZone distance player>900) then {_found=true;};
				sleep 0.2;
	
				_failSafe = _failSafe + 1;
				if (_failsafe>5) then {sleep 300; _failsafe = 0;};
				};
				_randomZone = [(_randomZone select 0)+40,_randomZone select 1];
				
				// find a zone *** end /////Spawn Troops
				_randomZonesafe = [_randomZone, 0,100,10,0,0.2,0,[],[[0,0],[0,0]]] call BIS_fnc_findSafePos;//Find a safe spawn position.
				if (0 == _randomZonesafe select 0 && 0 == _randomZonesafe select 1) then {//If not found, then simply default to the center again.
				_randomZonesafe = [(_randomZone select 0)+20,_randomZone select 1];
				};
			  _group = [_randomZonesafe, WEST, WARCOM_blu_patrol_type,[],[],WARCOM_blu_ai_skill_range] call BIS_fnc_spawnGroup;			   
			  _opf_assault = [_group] spawn Warcom_fnc_WARCOM_wp_blu_patrol;
			  
				// spawn armored
				
				sleep 2;
				aliveAllTanks = {alive _x AND _x isKindOf "Tank" || _x isKindOf "car"} count vehicles;
				if ((WARCOM_blufor_ap>75) && (aliveAllTanks<12)) then {
									
					[_randomZone] spawn SoldierSpawn_fnc_randomvehpatrolbluground;
										
				};
				
				// spawn air
				
				sleep 2;
				aliveAllAir = {_x isKindOf "Air" AND alive _x} count vehicles;
				
				if ((Attack) && (WARCOM_blufor_ap>149) && (aliveAllAir<4)) then {
										
					[_randomZone] spawn SoldierSpawn_fnc_randomvehpatrolbluair;
					
				};
			};
		sleep (900 + (random 900)); //15-30min was 1200 //1200/900
	};
};