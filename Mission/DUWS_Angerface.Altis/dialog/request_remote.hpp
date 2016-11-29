
class ressourceheader3
{
	idd = -1;
	movingenable = true;
//  onLoad = "_this call FRAME_01_Load";

class controls
{
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by kibot, v1.062, #Foputi)
////////////////////////////////////////////////////////
class background_request: RscText
{
	idc = 1769;
	x = -0.5 * GUI_GRID_W + GUI_GRID_X;
	y = 9 * GUI_GRID_H + GUI_GRID_Y;
	w = 14.5 * GUI_GRID_W;
	h = 10 * GUI_GRID_H;
	colorBackground[] = {0,0,0,0.3};
};
class mainframebackground: RscFrame
{
	idc = 1800;
	moving = 1;
	text = "Remote Request";
	x = 0 * GUI_GRID_W + GUI_GRID_X;
	y = 9.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 13.5 * GUI_GRID_W;
	h = 9 * GUI_GRID_H;
	colorBackground[] = {0,0,0,0.5};
};
class emptyvehicleframe: RscFrame
{
	idc = 1803;
	text = "EMPTY VEHICLE";
	x = 0.5 * GUI_GRID_W + GUI_GRID_X;
	y = 112.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 12.5 * GUI_GRID_W;
	h = 4 * GUI_GRID_H;
};
class requestvehiclebutton: RscButton
{
	idc = 1602;
	text = "REQUEST";
	x = 1 * GUI_GRID_W + GUI_GRID_X;
	y = 15 * GUI_GRID_H + GUI_GRID_Y;
	w = 11.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
 	tooltip = "Request an EMPTY vehicle to spawn at your position";
	action = "_nil=[]ExecVM ""dialog\request_vehicle_mobile.sqf""";
};
class exitbutton: RscButton
{
	idc = 1604;
	text = "EXIT";
	x = 2.5 * GUI_GRID_W + GUI_GRID_X;
	y = 17 * GUI_GRID_H + GUI_GRID_Y;
	w = 8 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	action = "closeDialog 0";
};
class RscText_1000: RscText
{
	idc = 1000;
	text = "CP: XXX";
	x = 2.5 * GUI_GRID_W + GUI_GRID_X;
	y = 10.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 4 * GUI_GRID_W;
	h = 2.5 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
};
class RscFrame_1805: RscFrame
{
	idc = 1805;
	text = "Command points";
	x = 2.5 * GUI_GRID_W + GUI_GRID_X;
	y = 10.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 9 * GUI_GRID_W;
	h = 2 * GUI_GRID_H;
	tooltip = "Command points available";
};
class emptyvehiclelist3: RscCombo
{
	idc = 2152;
	x = 1 * GUI_GRID_W + GUI_GRID_X;
	y = 13.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 11.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
		sizeEx = 0.025;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////




};
};
