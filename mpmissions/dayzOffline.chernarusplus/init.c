#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\EditorFiles\\crab.c"

void main()
{
	//INIT WEATHER BEFORE ECONOMY INIT------------------------   
	Weather weather = g_Game.GetWeather();
	weather.MissionWeather(true);    // false = use weather controller from Weather.c
	weather.GetRain().SetLimits( 0.0 , 0.0 );
    weather.GetOvercast().SetLimits( 0.0 , 0.0 );
    weather.GetFog().SetLimits( 0.0 , 0.01 ); 
    weather.GetOvercast().SetForecastChangeLimits( 0.0, 0.4 );
    weather.GetRain().SetForecastChangeLimits( 0.0, 0.0 );
    weather.GetFog().SetForecastChangeLimits( 0.0, 0.0 ); 
    weather.GetOvercast().SetForecastTimeLimits( 1800 , 1800 );
    weather.GetRain().SetForecastTimeLimits( 600 , 600 );
    weather.GetFog().SetForecastTimeLimits( 1800 , 1800 ); 
    weather.GetOvercast().Set( Math.RandomFloatInclusive(0.0, 0.5), 0, 0);
    weather.GetRain().Set( Math.RandomFloatInclusive(0.0, 0.0), 0, 0);
    weather.GetFog().Set( Math.RandomFloatInclusive(0.0, 0.1), 0, 0); 
    weather.SetWindMaximumSpeed(15);
    weather.SetWindFunctionParams(0.1, 0.3, 50);
	
	//INIT ECONOMY--------------------------------------
	Hive ce = CreateHive();
	if ( ce )
		ce.InitOffline();

	//DATE RESET AFTER ECONOMY INIT-------------------------
	int year, month, day, hour, minute;
	int reset_month = 9, reset_day = 20;
	GetGame().GetWorld().GetDate(year, month, day, hour, minute);

	if ((month == reset_month) && (day < reset_day))
	{
		GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
	}
	else
	{
		if ((month == reset_month + 1) && (day > reset_day))
		{
			GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
		}
		else
		{
			if ((month < reset_month) || (month > reset_month + 1))
			{
				GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
			}
		}
	}
	SpawnCrab();
}

class CustomMission: MissionServer
{
	override PlayerBase CreateCharacter(PlayerIdentity identity, vector pos, ParamsReadContext ctx, string characterName)
	{
		Entity playerEnt;
		playerEnt = GetGame().CreatePlayer( identity, characterName, pos, 0, "NONE" );
		Class.CastTo( m_player, playerEnt );
		GetGame().SelectPlayer( identity, m_player );
		return m_player;
	}

	override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
	{
		player.GetStatEnergy().Set(5000);
		player.GetStatWater().Set(2500);
		player.RemoveAllItems();
		player.GetInventory().CreateInInventory("TShirt_SouthAmericanSouth");
		player.GetInventory().CreateInInventory("Jeans_Black");
		player.GetInventory().CreateInInventory("JoggingShoes_Black");			
		string ChemlightArray[] = {"Chemlight_White","Chemlight_Yellow","Chemlight_Green","Chemlight_Red"};
		string FoodArray[] = {"Apple","Pear","Plum","Banana","Orange"};			
		player.GetInventory().CreateInInventory("ImprovisedBag");
		player.GetInventory().CreateInInventory("BandageDressing");
		player.GetInventory().CreateInInventory("StoneKnife");				
		player.GetInventory().CreateInInventory(ChemlightArray[Math.RandomInt(0,4)]);	
		player.GetInventory().CreateInInventory(FoodArray[Math.RandomInt(0,5)]);
	}
};

Mission CreateCustomMission(string path)
{
	return new CustomMission();
}