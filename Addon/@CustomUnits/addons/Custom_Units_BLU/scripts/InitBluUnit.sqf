_unit = _this select 0; 
_typeofUnit = toLower (_this select 1); 

if (isServer && !(_unit getvariable ["BLU_invset", false])) then { 
	#include "SetIdentityBlu.sqf"			//It's important that identity is randomized first. The general and pilot identities are set secondly after this script is run, overwriting it. 
    #include "Randomize_blu_soldiers.sqf"
} 
else { // Check for JIP from standard slots.  
            if (local _unit) then  
            { 
                If (isNil "BLU_isJIP") then  
                { 
                    BLU_isJIP = false; 
                    //If not JIP then skip all this. 
                    if (isNull player) then  
                    { 
                        if !(isDedicated || !isMultiplayer) then  
                        { 
                        BLU_isJIP = true; 
                        }; 
                    }; 
                }; 
                If (isNil "BLU_isJIP") then {diag_log format ["BLU WARNING BLU_isJIP = %1",BLU_isJIP]}; 
                If (BLU_isJIP || time>10) then  
                {  
				#include "SetIdentityBlu.sqf"
				#include "Randomize_blu_soldiers.sqf"
                }; 
            }; 
};