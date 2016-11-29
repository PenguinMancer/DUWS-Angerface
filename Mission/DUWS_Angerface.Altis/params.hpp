class Params {
	class DeathPenalty {
		title = "CP death penalty";
		values[] = {1,2,3,4,5,6,7,8,9,10,0};
		texts[] = {"1","2","3","4","5","6","7","8","9","10","No penalty"};
		default = 0;
	};
	
	class PlayerFatigue {
		title = "Player Fatigue";
		values[] = {0,1};
		texts[] = {"Disable Fatigue","Enable Fatigue"};
		default = 1;
	};
	
	class TimeOfDay {
        title = "Time of Day:";
        values[] = {5,14,19,23};
        texts[] = {"Dawn","Afternoon","Dusk","Evening"};
        default = 14;
    };

	class AttackHelis {
        title = "Attack Aircraft:";
        values[] = {0,1};
        texts[] = {"Disabled","Enabled"};
        default = 0;
    };

	class TrkAllPlayers {
        title = "Show Player Markers on Map:";
        values[] = {0,1};
        texts[] = {"Disabled","Enabled"};
        default = 1;
    };

    class SirenWarn {
        title = "Enemy Warning Siren:";
        values[] = {0,1};
        texts[] = {"Disabled","Enabled"};
        default = 1;
    };

   class MisEnd {
        title = "Mission Win/Lose Condition:";
        values[] = {0,1};
        texts[] = {"Cap All Zones/Officer Killed","Cap All Zones/Officer & Players Killed"};
        default = 0;
    };

   class ZbeCache {
        title = "Zbe Cache status:";
        values[] = {0,1};
        texts[] = {"Disabled","Enabled"};
        default = 1;
    };
}
