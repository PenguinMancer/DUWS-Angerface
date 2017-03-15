_handle = createDialog "ressourceheader3";
waitUntil {dialog};
ctrlSetText [1665, format["%1",commandpointsblu1]];

// VEHICLES
_index1 = lbAdd [1667, "Transport Truck 6 seats (6CP)"];       		// 0
_index1 = lbAdd [1667, "Transport Truck 9 seats (9CP)"];       		// 1
_index1 = lbAdd [1667, "HEMTT Transport Covered (12CP)"];        	// 2
_index1 = lbAdd [1667, "American Troop Transport (12CP)"];       	// 3
_index1 = lbAdd [1667, "American Humvee Unarmed (8CP)"]; 			// 4
lbSetCurSel [1667, 0];