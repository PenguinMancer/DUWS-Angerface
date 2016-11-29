WARCOM_blu_attack_wave_type = "";

// Attack waves main
[] spawn {
          while {true} do {
		  [West,"HQ"] sidechat "This is HQ, BLUFOR troops just arrived on the island, we'll soon be able to push through the enemy lines";
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
		  
          sleep 30;
		  _group = [WARCOM_blu_hq_pos, WEST, WARCOM_blu_attack_wave_type,[],[],blufor_ai_skill] call BIS_fnc_spawnGroup;
           _TFname = [] call Recurring_fnc_getRandomCallsign;
          [West,"HQ"] sidechat format["This is HQ, We are sending Task Force %1, we will try to push as far as possible into enemy territory",_TFname];
          _blu_assault = [_group] execVM "WARCOM\WARCOM_wp.sqf";
          _blu_assault = [_group,_TFname] execVM "WARCOM\WARCOM_gps_marker.sqf";		  
          sleep (WARCOM_blu_attack_delay + (random 1800));
          };
};