class ressourceheadervehiclefob
{
	idd = -1;
	movingenable = true;
	//  onLoad = "_this call FRAME_01_Load";

	class controls
	{
		class background_request: RscText
		{
			idc = 4500;
			x = 6.5 * GUI_GRID_W + GUI_GRID_X;
			y = 16 * GUI_GRID_H + GUI_GRID_Y;
			w = 27.5 * GUI_GRID_W;
			h = 9.5 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.3};
		};
		class mainframebackground: RscFrame
		{
			idc = 4501;
			moving = 1;
			x = 7 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 26.5 * GUI_GRID_W;
			h = 8.5 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class emptyvehicleframelocal: RscFrame
		{
			idc = 4502;
			text = "LOCAL VEHICLE";
			x = 20.5 * GUI_GRID_W + GUI_GRID_X;
			y = 19 * GUI_GRID_H + GUI_GRID_Y;
			w = 12.5 * GUI_GRID_W;
			h = 4 * GUI_GRID_H;
		};
		class emptyvehicleframeg4s: RscFrame
		{
			idc = 5602;
			text = "G4S VEHICLE";
			x = 7.5 * GUI_GRID_W + GUI_GRID_X;
			y = 19 * GUI_GRID_H + GUI_GRID_Y;
			w = 12.5 * GUI_GRID_W;
			h = 4 * GUI_GRID_H;
		};
		class requestvehiclebuttonlocal: RscButton
		{
			idc = 4503;
			text = "REQUEST LOCAL";
			x = 21 * GUI_GRID_W + GUI_GRID_X;
			y = 21.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			tooltip = "Request an empty vehicle to spawn at your position";
			action = "_nil=[]ExecVM ""dialog\request_vehicle_local.sqf""";
		};
		class requestvehiclebuttong4s: RscButton
		{
			idc = 5603;
			text = "REQUEST G4S";
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 21.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			tooltip = "Request an empty vehicle to spawn at your position";
			action = "_nil=[]ExecVM ""dialog\request_vehicle_G4S.sqf""";
		};
		class exitbutton: RscButton
		{
			idc = 4504;
			text = "EXIT";
			x = 16 * GUI_GRID_W + GUI_GRID_X;
			y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 8 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			action = "closeDialog 0";
		};
		class CPtotal: RscText
		{
			idc = 4505;
			text = "CP: XXX";
			x = 21 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4 * GUI_GRID_W;
			h = 2.5 * GUI_GRID_H;
			colorText[] = {1,1,1,1};
		};
		class RscFrame_1805: RscFrame
		{
			idc = 4506;
			text = "Command points";
			x = 20.5 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 12.5 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
			tooltip = "Command points available";
		};
		class USDtotal: RscText
		{
			idc = 5605;
			text = "USD: XXX";
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4 * GUI_GRID_W;
			h = 2.5 * GUI_GRID_H;
			colorText[] = {1,1,1,1};
		};
		class RscFrame_2935: RscFrame
		{
			idc = 5639;
			text = "USD";
			x = 7.5 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 12.5 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
			tooltip = "USD available";
		};
		class emptyvehiclelistlocal: RscCombo
		{
			idc = 4507;
			x = 21 * GUI_GRID_W + GUI_GRID_X;
			y = 20 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			sizeEx = 0.025;
		};
		class emptyvehiclelistg4s: RscCombo
		{
			idc = 5607;
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 20 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			sizeEx = 0.025;
		};
	};
};
