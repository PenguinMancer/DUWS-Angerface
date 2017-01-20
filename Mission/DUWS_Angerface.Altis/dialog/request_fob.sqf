_handle = createDialog "ressourceheader2";
waitUntil {dialog};
ctrlSetText [1000, format["%1",commandpointsblu1]];
ctrlSetText [1001, format["%1",zoneundercontrolblu]];
ctrlSetText [1002, format["%1",WARCOM_blufor_ap]];

// UNITS
_index = lbAdd [2100, "Rifleman(2CP)"];                  // 0
_index = lbAdd [2100, "Grenadier(3CP)"];                 // 1
_index = lbAdd [2100, "Automatic Rifleman(3CP)"];        // 2
_index = lbAdd [2100, "AT Rifleman(3CP)"];               // 3
_index = lbAdd [2100, "Medic(4CP)"];                     // 4
_index = lbAdd [2100, "AA Specialist(4CP)"];             // 5
_index = lbAdd [2100, "Repair Specialist(4CP)"];         // 6
_index = lbAdd [2100, "AT Specialist(4CP)"];             // 7
_index = lbAdd [2100, "Marksman(3CP)"];                  // 8
_index = lbAdd [2100, "Sniper(4CP)"]; 	                 // 9
_index = lbAdd [2100, "Spotter(3CP)"];                   // 10
_index = lbAdd [2100, "Explosive specialist(4CP)"];      // 11
lbSetCurSel [2100, 0];

// SQUADS
_index0 = lbAdd [2101, "Fireteam(8CP)"];                   // 0
_index0 = lbAdd [2101, "Rifle Squad(16CP)"];               // 1
_index0 = lbAdd [2101, "Weapons Squad(18CP)"];             // 2
_index0 = lbAdd [2101, "AT Team(12CP)"];                   // 3
_index0 = lbAdd [2101, "AA Team(15CP)"];                   // 4
_index0 = lbAdd [2101, "SF Recon Team(12CP)"];             // 5
_index0 = lbAdd [2101, "SF Recon Squad(20CP)"];            // 6
_index0 = lbAdd [2101, "Sniper Team(8CP)"];                // 7
_index0 = lbAdd [2101, "Medical Team(10CP)"];              // 8
_index0 = lbAdd [2101, "Motorized scouts(28CP)"];          // 9
_index0 = lbAdd [2101, "Mechanized squad(36CP)"];          // 10
_index0 = lbAdd [2101, "Tank Section Slammer(40CP)"];      // 11
_index0 = lbAdd [2101, "Tank Platoon AA(40CP)"];           // 12
lbSetCurSel [2101, 0];