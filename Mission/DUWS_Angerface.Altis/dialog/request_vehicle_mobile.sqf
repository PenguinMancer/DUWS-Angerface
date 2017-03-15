_index = lbCurSel 1667;

switch (_index) do
{
    case 0:
    {
          if (commandpointsblu1 >= 6) then
          {
           _pointcost =  6;
           _vehic = "I_G_Offroad_01_F";
		   _request = [_vehic, _pointcost] spawn Support_fnc_Vehicledrop;
          }
          else
          {
          hint "Not enough command points";
          };
    };

	case 1:
    {
          if (commandpointsblu1 >= 9) then
          {
           _pointcost = 9;
           _vehic = "I_G_Van_01_transport_F";
		   _request = [_vehic, _pointcost] spawn Support_fnc_Vehicledrop;
          }
          else
          {
          hint "Not enough command points";
          };
    };

	case 2:
    {
          if (commandpointsblu1 >= 8) then
          {
           _pointcost = 8;
           _vehic = "B_Truck_01_covered_F";
		   _request = [_vehic, _pointcost] spawn Support_fnc_Vehicledrop;
          }
          else
          {
          hint "Not enough command points";
          };
    };

    case 3:
    {
          if (commandpointsblu1 >= 24) then
          {
           _pointcost = 24;
           _vehic = "rhsusf_M1078A1P2_wd_fmtv_usarmy";
		   _request = [_vehic, _pointcost] spawn Support_fnc_Vehicledrop;
          }
          else
          {
          hint "Not enough command points";
          };
    };



    case 4:
    {
          if (commandpointsblu1 >= 12) then
          {
           _pointcost = 12;
           _vehic = "rhsusf_m1025_w";
		   _request = [_vehic, _pointcost] spawn Support_fnc_Vehicledrop;
          }
          else
          {
          hint "Not enough command points";
          };
    };
};
publicVariable "commandpointsblu1";
//hint format["index: %1",_index];

