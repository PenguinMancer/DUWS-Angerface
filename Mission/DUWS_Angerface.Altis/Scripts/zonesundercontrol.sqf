while {true} do {

 waitUntil {sleep 60;zoneundercontrolblu > 0};  // make sure there is at least 1 zone under control
 sleep 1800;
 waitUntil {sleep 60;zoneundercontrolblu > 0}; // check if there is still at least 1 zone under control
 ["USDzonehold",[(zoneundercontrolblu*5),zoneundercontrolblu]] call bis_fnc_showNotification;
 USDbudget = USDbudget + (zoneundercontrolblu*30);
 publicVariable "USDbudget";
 ctrlSetText [1000, format["%1",USDbudget]];

};
