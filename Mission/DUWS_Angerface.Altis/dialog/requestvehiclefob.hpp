class ressourceheadervehiclefob
{
	idd = -1;
	movingenable = true;
	//  onLoad = "_this call FRAME_01_Load";

	class controls
	{
		class background_request: RscText
		{
			idc = 7600;
			x = 6.5 * GUI_GRID_W + GUI_GRID_X;
			y = 16 * GUI_GRID_H + GUI_GRID_Y;
			w = 27.5 * GUI_GRID_W;
			h = 9.5 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.3};
		};
		class mainframebackground: RscFrame
		{
			idc = 7601;
			moving = 1;
			x = 7 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 26.5 * GUI_GRID_W;
			h = 8.5 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class emptyvehicleframelocal: RscFrame
		{
			idc = 7602;
			text = "LOCAL VEHICLE";
			x = 20.5 * GUI_GRID_W + GUI_GRID_X;
			y = 19 * GUI_GRID_H + GUI_GRID_Y;
			w = 12.5 * GUI_GRID_W;
			h = 4 * GUI_GRID_H;
		};
		class emptyvehicleframeg4s: RscFrame
		{
			idc = 7603;
			text = "G4S VEHICLE";
			x = 7.5 * GUI_GRID_W + GUI_GRID_X;
			y = 19 * GUI_GRID_H + GUI_GRID_Y;
			w = 12.5 * GUI_GRID_W;
			h = 4 * GUI_GRID_H;
		};
		class requestvehiclebuttonlocal: RscButton
		{
			idc = 7604;
			text = "REQUEST LOCAL";
			x = 21 * GUI_GRID_W + GUI_GRID_X;
			y = 21.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			tooltip = "Request an empty vehicle to spawn at your position";
			action = "_nil=[]ExecVM ""dialog\request_vehicle_localfob.sqf""";
		};
		class requestvehiclebuttong4s: RscButton
		{
			idc = 7605;
			text = "REQUEST G4S";
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 21.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			tooltip = "Request an empty vehicle to spawn at your position";
			action = "_nil=[]ExecVM ""dialog\request_vehicle_G4Sfob.sqf""";
		};
		class exitbutton: RscButton
		{
			idc = 7606;
			text = "EXIT";
			x = 16 * GUI_GRID_W + GUI_GRID_X;
			y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 8 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			action = "closeDialog 0";
		};
		class CPtotal: RscText
		{
			idc = 7607;
			text = "CP: XXX";
			x = 21 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4 * GUI_GRID_W;
			h = 2.5 * GUI_GRID_H;
			colorText[] = {1,1,1,1};
		};
		class RscFrame_1805: RscFrame
		{
			idc = 7608;
			text = "Command points";
			x = 20.5 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 12.5 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
			tooltip = "Command points available";
		};
		class USDtotal: RscText
		{
			idc = 7609;
			text = "USD: XXX";
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4 * GUI_GRID_W;
			h = 2.5 * GUI_GRID_H;
			colorText[] = {1,1,1,1};
		};
		class RscFrame_2935: RscFrame
		{
			idc = 7610;
			text = "USD";
			x = 7.5 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 12.5 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
			tooltip = "USD available";
		};
		class emptyvehiclelistlocal: RscCombo
		{
			idc = 7611;
			x = 21 * GUI_GRID_W + GUI_GRID_X;
			y = 20 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			sizeEx = 0.025;
		};
		class emptyvehiclelistg4s: RscCombo
		{
			idc = 7612;
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 20 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			sizeEx = 0.025;
		};
	};
};
