if (isServer) exitWith {};
waitUntil {sleep .1;weatherdone};
sleep 5;

if (!isServer) then{

0 setOvercast OvercastVar;
60 setFog FogVar;
60 setRainbow RainbowVar;

sleep 1000;

while {true} do {

0 setOvercast OvercastVar;
60 setFog FogVar;
60 setRainbow RainbowVar;

sleep 1300;
};
};