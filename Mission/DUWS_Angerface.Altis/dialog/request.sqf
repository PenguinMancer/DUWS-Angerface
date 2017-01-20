_handle = createDialog "ressourceheader";
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

// Supports  !!! CHECK TO ADD AT INIT
index_support_camera = lbAdd [2103, "SATCOM (30CP)"];               				// 0
index_support_supply = lbAdd [2103, "Supply drop(10CP)"];           			    // 1
index_support_arty = lbAdd [2103, "Artillary strike(15CP)"];         			    // 2
index_support_mortar = lbAdd [2103, "Mortar strike(10CP)"];             			// 3
index_support_paradrop = lbAdd [2103, "Airborne troops(15CP)"];   	   			   	// 4
index_support_jdam = lbAdd [2103, "JDAM strike(15CP)"];               			  	// 5
index_support_pFLIR = lbAdd [2103, "Personal FLIR display(12CP)"];    			 	// 6
index_support_uavrecon = lbAdd [2103, "UAV Recon(15CP)"];             		 		// 7
index_support_refit = lbAdd [2103, "Vehicle Refit(5CP)"];             		  		// 8
index_support_helotaximh9 = lbAdd [2103, "HeliTaxi MH9-6PAX (10CP)"];          		// 9
index_support_helotaxi80 = lbAdd [2103, "HeliTaxi CH67-18PAX (10CP)"];          	// 10
index_support_helotaxi290 = lbAdd [2103, "HeliTaxi TARU bench-8PAX (10CP)"];        // 11
index_support_cluster = lbAdd [2103, "Mk.20 II CBU(15CP)"];             			// 12
index_support_training = lbAdd [2103, "Specialized Infantry training(20CP)"];		// 13
index_support_boattaxi = lbAdd [2103, "Boat Taxi(2CP)"];				 			// 14
index_support_halo = lbAdd [2103, "Halo(15CP)"];                     				// 15
index_support_hcCAS = lbAdd [2103, "High Command Close Air Support(20CP)"];         // 16
index_support_hcAttChop = lbAdd [2103, "High Command Attack Chopper(20CP)"];        // 17
index_support_hcAIRTRANS = lbAdd [2103, "High Command Air Transport(10CP)"];        // 18
index_support_hcGRTRANS = lbAdd [2103, "High Command Ground Transport(8CP)"];       // 19
index_support_hcBob = lbAdd [2103, "High Command Bobcat Refit(25CP)"];              // 20
index_support_hcREPAIR = lbAdd [2103, "High Command Repair Team(8CP)"];             // 21
index_support_hcREFUEL = lbAdd [2103, "High Command Refuel Team(8CP)"];             // 22
index_support_vehicle = lbAdd [2103, "Remote Vehicle Request(10CP)"];				// 23
index_support_fob = lbAdd [2103, "**911 ONLY!** ADD FOB Reqst to 0-8"];             // 24

if (support_satcom_available) then
{
  lbSetColor [2103, 0, [0, 1, 0, 1]];
};
if (support_supplydrop_available) then
{
  lbSetColor [2103, 1, [0, 1, 0, 1]];
};
if (support_arty_available) then
{
  lbSetColor [2103, 2, [0, 1, 0, 1]];
};
  if (support_mortar_available) then
{
  lbSetColor [2103, 3, [0, 1, 0, 1]];
};
if (support_paradrop_available) then
{
  lbSetColor [2103, 4, [0, 1, 0, 1]];
};
if (support_jdam_available) then
{
  lbSetColor [2103, 5, [0, 1, 0, 1]];
};
if (support_pflir_available) then
{
  lbSetColor [2103, 6, [0, 1, 0, 1]];
};
if (support_uav_recon_available) then
{
  lbSetColor [2103, 7, [0, 1, 0, 1]];
};
  if (support_veh_refit_available) then
{
  lbSetColor [2103, 8, [0, 1, 0, 1]];
};
if (support_helotaximh9_available) then
{
  lbSetColor [2103, 9, [0, 1, 0, 1]];
};
if (support_helotaxi80_available) then
{
  lbSetColor [2103, 10, [0, 1, 0, 1]];
};
if (support_helotaxi290_available) then
{
  lbSetColor [2103, 11, [0, 1, 0, 1]];
};
if (support_cluster_available) then
{
  lbSetColor [2103, 12, [0, 1, 0, 1]];
};
if (support_specialized_training_available) then
{
  lbSetColor [2103, 13, [0, 1, 0, 1]];
};
if (support_boattaxi_available) then
{
  lbSetColor [2103, 14, [0, 1, 0, 1]];
};
if (support_halo_available) then
{
  lbSetColor [2103, 15, [0, 1, 0, 1]];
};
if (support_hcCAS_available) then
{
  lbSetColor [2103, 16, [0, 1, 0, 1]];
};
if (support_hcAttChop_available) then
{
  lbSetColor [2103, 17, [0, 1, 0, 1]];
};
if (support_hcAIRTRANS_available) then
{
  lbSetColor [2103, 18, [0, 1, 0, 1]];
};
if (support_hcGRTRANS_available) then
{
  lbSetColor [2103, 19, [0, 1, 0, 1]];
};
if (support_hcBob_available) then
{
  lbSetColor [2103, 20, [0, 1, 0, 1]];
};
if (support_hcREPAIR_available) then
{
  lbSetColor [2103, 21, [0, 1, 0, 1]];
};
if (support_hcREFUEL_available) then
{
  lbSetColor [2103, 22, [0, 1, 0, 1]];
};
if (support_vehicledrop_available) then
{
  lbSetColor [2103, 23, [0, 1, 0, 1]];
};
if (support_FOB_available) then
{
  lbSetColor [2103, 24, [0, 1, 0, 1]];
};
