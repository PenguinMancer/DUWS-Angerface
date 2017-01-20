_handle = createDialog "ressourceheader3";
waitUntil {dialog};
ctrlSetText [1000, format["%1",commandpointsblu1]];
ctrlSetText [1001, format["%1",zoneundercontrolblu]];
ctrlSetText [1002, format["%1",WARCOM_blufor_ap]];

// VEHICLES
_index1 = lbAdd [2152, "Small Transport Truck 6 seats (6CP)"]; 				// 0
_index1 = lbAdd [2152, "Small Transport Truck 9 seats (9CP)"];    	  	 	// 1
_index1 = lbAdd [2152, "Hunter Unarmed(8CP)"];           					// 2
_index1 = lbAdd [2152, "Hunter HMG(24CP)"];               					// 3
_index1 = lbAdd [2152, "HEMTT Transport Covered(12CP)"];                    // 4
_index1 = lbAdd [2152, "ATV(2CP)"];                      					// 5

lbSetCurSel [2152, 0];