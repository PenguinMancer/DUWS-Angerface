_handle = createDialog "ressourceheadervehiclefob";
waitUntil {dialog};
ctrlSetText [7607, format["%1",commandpointsblu1]];
ctrlSetText [7609, format["%1%2",USDbudget,"K"]];

// VEHICLES
_index1 = lbAdd [7611, "ATV (1CP)"];                       		// 0
_index1 = lbAdd [7611, "Transport Truck 6 seats (4CP)"];       	// 1
_index1 = lbAdd [7611, "Transport Truck 9 seats (6CP)"];       	// 2
_index1 = lbAdd [7611, "HEMTT Transport Covered (8CP)"];        // 3
_index1 = lbAdd [7611, "American Troop Transport (8CP)"];       // 4
//Semi Armored
_index1 = lbAdd [7611, "American Humvee Unarmed (5CP)"]; 		// 5
_index1 = lbAdd [7611, "American Humvee Armed (18CP)"]; 		// 6
//APCS
_index1 = lbAdd [7611, "M2A3 Bradley (30CP)"]; 					// 7
_index1 = lbAdd [7611, "M113A3 APC (30CP)"]; 					// 8
_index1 = lbAdd [7611, "Ridgeback PPV (35CP)"]; 				// 9
//Artillery
_index1 = lbAdd [7611, "MLRS Artillary (75CP)"];      		    // 10
_index1 = lbAdd [7611, "M109 Paladin (75CP)"]; 					// 11
//Tanks
_index1 = lbAdd [7611, "M1A2 Abrams SEP (60CP)"]; 				// 12
//Unarmed Copters
_index1 = lbAdd [7611, "MH-9 Hummingbird (15CP)"];         		// 13
//Armed Copters
_index1 = lbAdd [7611, "AH-9 Pawnee (25CP)"];             		// 14
_index1 = lbAdd [7611, "AH-64D (50CP)"];    					// 15
//Fighter Jets
_index1 = lbAdd [7611, "A-164 CAS (45CP)"];     				// 16
_index1 = lbAdd [7611, "A-10C (60CP)"];    						// 17
_index1 = lbAdd [7611, "C-130J (40CP)"]; 						// 18
lbSetCurSel [7611, 0];

// VEHICLES
_index1 = lbAdd [7612, "ATV (5K)"];                       		// 0
_index1 = lbAdd [7612, "Transport Truck 6 seats (10K)"];       	// 1
_index1 = lbAdd [7612, "Transport Truck 9 seats (12K)"];       	// 2
_index1 = lbAdd [7612, "UAZ open (7K)"];       					// 3
_index1 = lbAdd [7612, "Transport Truck Armed (15K)"];       	// 4
_index1 = lbAdd [7612, "Black SUV Armed (150K)"];       		// 5
_index1 = lbAdd [7612, "HEMTT Transport Covered (20K)"];        // 6
_index1 = lbAdd [7612, "Russian Troop Transport (18K)"];       	// 7
_index1 = lbAdd [7612, "American Troop Transport (18K)"];       // 8
//Semi Armored
_index1 = lbAdd [7612, "American Humvee Unarmed (50K)"]; 		// 9
_index1 = lbAdd [7612, "American Humvee Armed (70K)"]; 			// 10
_index1 = lbAdd [7612, "GAZ Tigr (45K)"];  						// 11
_index1 = lbAdd [7612, "Hunter Unarmed (75K)"];            		// 12
_index1 = lbAdd [7612, "Hunter HMG (95K)"];               		// 13
_index1 = lbAdd [7612, "Hunter GMG (100K)"];               		// 14
//APCS
_index1 = lbAdd [7612, "IFV-6c Panther (2M)"];           		// 15
_index1 = lbAdd [7612, "CRV-6e Bobcat (2M)"];            		// 16
_index1 = lbAdd [7612, "M2A3 Bradley (1M)"]; 					// 17
_index1 = lbAdd [7612, "M113A3 APC (300K)"]; 					// 18
_index1 = lbAdd [7612, "BTR-80A (1M)"]; 						// 19
_index1 = lbAdd [7612, "Ridgeback PPV (500K)"]; 				// 20
_index1 = lbAdd [7612, "AMV-7 Marshall (1.5M)"];           		// 21
_index1 = lbAdd [7612, "BMD-4 (1.5M)"]; 						// 22
//AA gun
_index1 = lbAdd [7612, "IFV-6c Cheetah (3M)"];           		// 23
//Artillery
_index1 = lbAdd [7612, "BM-21 GRAD (1M)"]; 						// 24
_index1 = lbAdd [7612, "MLRS Artillary (1.5M)"];      		    // 25
_index1 = lbAdd [7612, "Scorcher Artillary (2M)"];      		// 26
_index1 = lbAdd [7612, "M109 Paladin (1.5)"]; 					// 27
_index1 = lbAdd [7612, "2S3M Artillery (1M)"]; 					// 28
//Tanks
_index1 = lbAdd [7612, "M2A1 Slammer (8M)"];             		// 29
_index1 = lbAdd [7612, "M2A4 SlammerUP (8M)"];    				// 30
_index1 = lbAdd [7612, "T-80U (3M)"]; 							// 31
_index1 = lbAdd [7612, "M1A2 Abrams SEP (6M)"]; 				// 32
//Unarmed Copters
_index1 = lbAdd [7612, "M-900 Civilian Copter (500K)"];         // 33
_index1 = lbAdd [7612, "MH-9 Hummingbird (1.25M)"];         	// 34
_index1 = lbAdd [7612, "UH-80 Ghosthawk (4M)"];          		// 35
_index1 = lbAdd [7612, "Mi8 MTV3 (3M)"]; 						// 36
_index1 = lbAdd [7612, "CH-67 Huron (5M)"];          			// 37
//Armed Copters
_index1 = lbAdd [7612, "AH-9 Pawnee (3.5M)"];             		// 38
_index1 = lbAdd [7612, "KA-60 (M32) (10M)"]; 					// 39
_index1 = lbAdd [7612, "MI8 MTV3 (8.5M)"]; 						// 40
_index1 = lbAdd [7612, "AH-99 Blackfoot (15M)"];          		// 41
_index1 = lbAdd [7612, "AH-64D (15M)"];    						// 42
_index1 = lbAdd [7612, "Ka-52 (8M)"];    						// 43
//Fighter Jets
_index1 = lbAdd [7612, "SU-25SM (15M)"];    					// 44
_index1 = lbAdd [7612, "A-164 CAS (20M)"];     					// 45
_index1 = lbAdd [7612, "A-10C (20M)"];    						// 46
_index1 = lbAdd [7612, "C-130J (15M)"]; 						// 47
//Boats
_index1 = lbAdd [7612, "Water Scooter (6K)"]; 					// 48
_index1 = lbAdd [7612, "Assault Boat (15K)"]; 					// 49
_index1 = lbAdd [7612, "RHIB (250K)"]; 							// 50
_index1 = lbAdd [7612, "MK-V SOC (2M)"]; 						// 51
_index1 = lbAdd [7612, "SDV (200K)"]; 							// 52
lbSetCurSel [7612, 0];