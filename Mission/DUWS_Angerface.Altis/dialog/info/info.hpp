
class info_radio
{
	idd = -1;
	movingenable = false;
//  onLoad = "_this call FRAME_01_Load";

class controls
{
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by kibot, v1.062, #Denyfu)
////////////////////////////////////////////////////////

class infoBackground: RscFrame
{
	idc = 1800;
	text = "CAMPAIGN INFO";
	x = 0 * GUI_GRID_W + GUI_GRID_X;
	y = 0 * GUI_GRID_H + GUI_GRID_Y;
	w = 40 * GUI_GRID_W;
	h = 25 * GUI_GRID_H;
	colorBackground[] = {0,0,0,0.5};
	tooltip = "These stats are persistent and will stay updated during your different mini-campaigns";
};
class RscButton_1604: RscButton
{
	idc = 1604;
	text = "OK";
	x = 11.5 * GUI_GRID_W + GUI_GRID_X;
	y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 8 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	action = "closeDialog 0";
};
class zones_captured_total_frame: RscFrame
{
	idc = 1806;
	text = "Zones captured in total";
	x = 1 * GUI_GRID_W + GUI_GRID_X;
	y = 1 * GUI_GRID_H + GUI_GRID_Y;
	w = 18.5 * GUI_GRID_W;
	h = 2 * GUI_GRID_H;
};
class RscFrame_1803: RscFrame
{
	idc = 1803;
	text = "Side missions completed in total";
	x = 20.5 * GUI_GRID_W + GUI_GRID_X;
	y = 1 * GUI_GRID_H + GUI_GRID_Y;
	w = 18.5 * GUI_GRID_W;
	h = 2 * GUI_GRID_H;
};
class RscText_1001: RscText
{
	idc = 1211;
	text = "ZUC:XXX";
	x = 1 * GUI_GRID_W + GUI_GRID_X;
	y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 18.5 * GUI_GRID_W;
	h = 1.5 * GUI_GRID_H;
	tooltip = "Total amount of zones you have captured";
};
class missionsuccess: RscText
{
	idc = 1224;
	text = "XXX";
	x = 21 * GUI_GRID_W + GUI_GRID_X;
	y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 17 * GUI_GRID_W;
	h = 1.5 * GUI_GRID_H;
	tooltip = "Total amount of side missions you have completed";
};
class island_captured_frame: RscFrame
{
	idc = 1801;
	text = "Islands captured";
	x = 1 * GUI_GRID_W + GUI_GRID_X;
	y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 18.5 * GUI_GRID_W;
	h = 6.5 * GUI_GRID_H;
	tooltip = "This is a list of all the islands you have captured";	
};
class islandscapturedlistbox: RscListbox
{
	idc = 1551;
	x = 1.5 * GUI_GRID_W + GUI_GRID_X;
	y = 4.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 17.5 * GUI_GRID_W;
	h = 5 * GUI_GRID_H;
	tooltip = "This is a list of all the islands you have captured"; 
};
class reset_stats_button: RscButton
{
	idc = 1600;
	text = "RESET STATS";
	x = 20.5 * GUI_GRID_W + GUI_GRID_X;
	y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 8 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	tooltip = "Reset your stats to 0";
  action = "_handle = createDialog ""reset_confirm""";
	colorBackground[] = {1, 0, 0,0.5};
	colorBackgroundActive[] = {1,0.2,0.2,1};
	colorFocused[] = {1,0.2,0.2,0};
};
class frame_player_xp: RscFrame
{
	idc = 1802;
	text = "(player) total experience";
	x = 20.5 * GUI_GRID_W + GUI_GRID_X;
	y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 18.5 * GUI_GRID_W;
	h = 2 * GUI_GRID_H;
	tooltip = "Experience of the player";
};
class player_experience_text: RscText
{
	idc = 1000;
	text = "XXX";
	x = 21 * GUI_GRID_W + GUI_GRID_X;
	y = 4 * GUI_GRID_H + GUI_GRID_Y;
	w = 17 * GUI_GRID_W;
	h = 1.5 * GUI_GRID_H;
	tooltip = "Experience of the player";
};
///
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////


};
};

