
class startup_dialog
{
	idd = -1;
	movingenable = false;
	onUnload = "_nul = execVM ""dialog\startup\startup_closed.sqf"""; //UI event handler
	
//  onLoad = "_this call FRAME_01_Load";

class controls
{
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Lex, v1.063, #Lulaqy)
////////////////////////////////////////////////////////
class background_request: RscText
{
	idc = 1469;

	x = 0 * GUI_GRID_W + GUI_GRID_X;
	y = -0.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 40 * GUI_GRID_W;
	h = 31.5 * GUI_GRID_H;
	colorBackground[] = {0,0,0,0.3};
};
class campaign_definer_mainframe: RscFrame
{
	idc = 1800;

	text = "DEFINE THE PARAMETERS FOR YOUR CAMPAIGN";
	x = 0 * GUI_GRID_W + GUI_GRID_X;
	y = 0 * GUI_GRID_H + GUI_GRID_Y;
	w = 40 * GUI_GRID_W;
	h = 31 * GUI_GRID_H;
};
class zone_max_radius_frame: RscFrame
{
	idc = 1801;

	text = "Maximum radius of a zone";
	x = 1 * GUI_GRID_W + GUI_GRID_X;
	y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 18.5 * GUI_GRID_W;
	h = 2.5 * GUI_GRID_H;
	tooltip = "Define the maximum possible radius of an enemy zone";
};
class zone_min_radius_frame: RscFrame
{
	idc = 1802;

	text = "Minimum radius of a zone";
	x = 20.5 * GUI_GRID_W + GUI_GRID_X;
	y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 18.5 * GUI_GRID_W;
	h = 2.5 * GUI_GRID_H;
	tooltip = "Define the minimum possible radius of an enemy zone";
};
class zone_max_radius_combo: RscCombo
{
	idc = 2100;

	x = 1.5 * GUI_GRID_W + GUI_GRID_X;
	y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 17.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	tooltip = "Define the maximum possible radius of a zone when the enemy zones will be generated";
};
class zone_min_radius_combo: RscCombo
{
	idc = 2101;

	x = 21 * GUI_GRID_W + GUI_GRID_X;
	y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 17.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	tooltip = "Define the minimum possible radius of a zone when the enemy zones will be generated";
};
class zone_number_frame: RscFrame
{
	idc = 1803;

	text = "Number of enemy zones";
	x = 1 * GUI_GRID_W + GUI_GRID_X;
	y = 4.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 18.5 * GUI_GRID_W;
	h = 2.5 * GUI_GRID_H;
	tooltip = "Define how many enemy zones will be generated";
};
class zone_number_combo: RscCombo
{
	idc = 2102;

	x = 1.5 * GUI_GRID_W + GUI_GRID_X;
	y = 5.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 17.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	tooltip = "How many enemy zones will be generated";
};
class cp_start_frame: RscFrame
{
	idc = 1804;

	text = "Starting available Command Points (CP)";
	x = 20.5 * GUI_GRID_W + GUI_GRID_X;
	y = 4.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 18.5 * GUI_GRID_W;
	h = 2.5 * GUI_GRID_H;
	tooltip = "Define how much Command Points you start with";
};
class cp_start_combo: RscCombo
{
	idc = 2103;

	x = 21 * GUI_GRID_W + GUI_GRID_X;
	y = 5.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 17.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	tooltip = "Define how much Command Points you start with";
};
class bap_start_frame: RscFrame
{
	idc = 1805;

	text = "Starting BLUFOR Army Power";
	x = 1 * GUI_GRID_W + GUI_GRID_X;
	y = 7.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 18.5 * GUI_GRID_W;
	h = 2.5 * GUI_GRID_H;
	tooltip = "Define the starting resources of your HQ at the beginning of the mission";
};
class bap_start_combo: RscCombo
{
	idc = 2104;

	x = 1.5 * GUI_GRID_W + GUI_GRID_X;
	y = 8.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 17.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	tooltip = "Define the starting ressources your HQ has at the beginning";
};
class oap_start_frame: RscFrame
{
	idc = 1806;

	text = "Starting OPFOR Army Power";
	x = 20.5 * GUI_GRID_W + GUI_GRID_X;
	y = 7.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 18.5 * GUI_GRID_W;
	h = 2.5 * GUI_GRID_H;
	tooltip = "Define the starting ressources the OPFOR has at the beginning";
};
class oap_start_combo: RscCombo
{
	idc = 2105;

	x = 21 * GUI_GRID_W + GUI_GRID_X;
	y = 8.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 17.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	tooltip = "Define the starting resources the OPFOR has at the beginning";
};
class text_information: RscText
{
	idc = 1000;
	style = 16;

	text = "Before generating the campaign with non-default parameters, make sure that the island you are playing on is capable to host all the zones. Otherwise the DUWS may not be able to generate the zones.";
	x = 0.5 * GUI_GRID_W + GUI_GRID_X;
	y = 25.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 39 * GUI_GRID_W;
	h = 4 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
};
class start_button: RscButton
{
	idc = 1600;

	text = "RANDOM START";
	x = 1.5 * GUI_GRID_W + GUI_GRID_X;
	y = 23 * GUI_GRID_H + GUI_GRID_Y;
	w = 8 * GUI_GRID_W;
	h = 1.5 * GUI_GRID_H;
	colorBackground[] = {1,0,0,0.5};
	tooltip = "Randomly generate the zones and start the campaign";
	action = "_nul = [] execvm ""dialog\startup\startup_random_start.sqf""";
};
class start_button2: RscButton
{
	idc = 1601;

	text = "MANUAL START";
	x = 16 * GUI_GRID_W + GUI_GRID_X;
	y = 23 * GUI_GRID_H + GUI_GRID_Y;
	w = 8 * GUI_GRID_W;
	h = 1.5 * GUI_GRID_H;
	colorBackground[] = {1,0,0,0.5};
	tooltip = "Manually generate the zones, then start the campaign";
	action = "_nul = [] execvm ""dialog\startup\startup_manual_start.sqf""";
};
class start_button3: RscButton
{
	idc = 1601;

	text = "ADVANCED START";
	x = 31.5 * GUI_GRID_W + GUI_GRID_X;
	y = 23 * GUI_GRID_H + GUI_GRID_Y;
	w = 8 * GUI_GRID_W;
	h = 1.5 * GUI_GRID_H;
	colorBackground[] = {1,0,0,0.5};
	tooltip = "Manually generate the zones, allowing you to change zone settings after every placement, then start the campaign";
	action = "_nul = [] execvm ""dialog\startup\startup_advance_start.sqf""";
};
class weather_type_frame: RscFrame
{
	idc = 1807;

	text = "Weather type";
	x = 1 * GUI_GRID_W + GUI_GRID_X;
	y = 10.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 18.5 * GUI_GRID_W;
	h = 2.5 * GUI_GRID_H;
	tooltip = "The weather will be dinamically generated according to the type of weather you have chosen";
};
class weather_type_combo: RscCombo
{
	idc = 2106;

	x = 1.5 * GUI_GRID_W + GUI_GRID_X;
	y = 11.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 17.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	tooltip = "The weather will be dinamically generated according to the type of weather you have chosen";
};
class frame_opf_skill: RscFrame
{
	idc = 1808;

	text = "Enemy AI skill";
	x = 20.5 * GUI_GRID_W + GUI_GRID_X;
	y = 10.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 18.5 * GUI_GRID_W;
	h = 2.5 * GUI_GRID_H;
	tooltip = "Set the desired AI skill range for the enemy units";
};
class combo_opf_skill: RscCombo
{
	idc = 2107;

	x = 21 * GUI_GRID_W + GUI_GRID_X;
	y = 11.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 17.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	tooltip = "Set the desired AI skill range for the enemy units";
};
class frame_blufor_ai_skill: RscFrame
{
	idc = 1809;

	text = "Base friendly AI skill";
	x = 20.5 * GUI_GRID_W + GUI_GRID_X;
	y = 13.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 18.5 * GUI_GRID_W;
	h = 2.5 * GUI_GRID_H;
	tooltip = "Set the desired base AI skill range for friendly units. Affects every created BLUFOR units.";
};
class combo_blufor_ai_skill: RscCombo
{
	idc = 2108;

	x = 21 * GUI_GRID_W + GUI_GRID_X;
	y = 14.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 17.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	tooltip = "Set the desired base AI skill range for friendly units. Affects every created BLUFOR units.";
};
class helo_fast_travel_frame: RscFrame
{
	idc = 1810;

	text = "Fast travel with Helo taxi ?";
	x = 1 * GUI_GRID_W + GUI_GRID_X;
	y = 13.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 18.5 * GUI_GRID_W;
	h = 2.5 * GUI_GRID_H;
	tooltip = "When using the support ""Helo taxi"", determines if the helicopter will directly teleport near the LZ";
};
class helo_taxi_fasttravel_list: RscCombo
{
	idc = 2109;

	x = 1.5 * GUI_GRID_W + GUI_GRID_X;
	y = 14.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 17.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	tooltip = "When using the support ""Helo taxi"", determines if the helicopter will directly teleport near the LZ";
};
class fast_travel_frame: RscFrame
{
	idc = 1810;

	text = "Allow fast travel";
	x = 20.5 * GUI_GRID_W + GUI_GRID_X;
	y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 18.5 * GUI_GRID_W;
	h = 2.5 * GUI_GRID_H;
	tooltip = "Allow fast travel between FOBs";
};
class fast_travel_list: RscCombo
{
	idc = 2714;

	x = 21 * GUI_GRID_W + GUI_GRID_X;
	y = 17.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 17.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	tooltip = "Allow fast travel between FOBs";
};
class max_dist_from_hq_frame: RscFrame
{
	idc = 1888;

	text = "Maximum distance from the HQ";
	x = 1 * GUI_GRID_W + GUI_GRID_X;
	y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 18.5 * GUI_GRID_W;
	h = 2.5 * GUI_GRID_H;
	tooltip = "Set the max. distance between the created zones and the HQ";
};
class max_dist_from_hq_list: RscCombo
{
	idc = 2188;

	x = 1.5 * GUI_GRID_W + GUI_GRID_X;
	y = 17.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 17.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	tooltip = "Set the max. distance between the created zones and the HQ";
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
};
};
