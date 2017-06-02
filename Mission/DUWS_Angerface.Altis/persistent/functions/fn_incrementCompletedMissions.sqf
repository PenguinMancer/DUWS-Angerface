mission_number_of_missions_done = (mission_number_of_missions_done + 1);  
profileNamespace setVariable ["profile_number_of_missions_done", mission_number_of_missions_done]; 
saveProfileNamespace; // sauvegarde le profil

if (isServer) then {
	finishedMissionsNumber = finishedMissionsNumber + 1;
	publicVariable "finishedMissionsNumber";
};