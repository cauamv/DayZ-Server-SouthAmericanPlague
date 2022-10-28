#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\_vipvehicle\\VehicleSpawnBlindado.c"
modded class MissionServer
{		
	protected ref TStringArray VIPS_UIDS_VEH_BLINDADO = new TStringArray;	
	PlayerBase m_player;
	
    void MissionServer()
    {				
		GetRPCManager().AddRPC( "VipVehicle_Server", "ApplyVipVehicleB", this, SingeplayerExecutionType.Server );		
    }	
	
	override void OnInit()
	{
		super.OnInit();
		GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(this.RefreshVIP_Vehicle, 60000, true); // 30000 = 30seg || 60000 = 1 min || 300000 = 5min || 600000 = 10min		
		RefreshVIP_Vehicle();
	}
	
	void RefreshVIP_Vehicle()
	{		
		VIPS_UIDS_VEH_BLINDADO.Clear();		
		string UID_DATA;	
		int AnoAtual, MesAtual, DiaAtual, Dia, Mes, Ano;
		GetYearMonthDayUTC(AnoAtual, MesAtual, DiaAtual);
		array<string> VipLinha = new array<string>;	
		array<string> DataLinha = new array<string>;		
		FileHandle VIPS_LISTA = OpenFile("$profile:_VIP/VIPS_VEHICLE.ini", FileMode.READ);			

		if (VIPS_LISTA != 0)
		{
			string linha_Vips;					
			while ( FGets(VIPS_LISTA,linha_Vips) > 0 )
			{
				VipLinha.Clear();
				DataLinha.Clear();
				bool Expirado = false;
				linha_Vips.Split ("|",VipLinha);
				string NOME_VIP = VipLinha[0];
				string UID_VIP = VipLinha[1];
				string NICK_PLAYER = VipLinha[3];
				UID_DATA = VipLinha[2];	
				UID_DATA.Split ("/",DataLinha);				
				Dia = DataLinha[0].ToInt();
				Mes = DataLinha[1].ToInt();
				Ano = DataLinha[2].ToInt();				

				if (Ano > AnoAtual)				
					Expirado = false;				
				else if ((Mes < MesAtual) && (Ano <= AnoAtual))				
					Expirado = true;				
				else if ((Mes <= MesAtual) && (Dia < DiaAtual))				
					Expirado = true;				
				else				
					Expirado = false;													
				
				if (Expirado)
				{											
					GetGame().AdminLog("[VIP VEICULO SUPREME] VIP DO "+ NICK_PLAYER +" COM UID "+ UID_VIP +" EXPIROU NA DATA " +Dia+"/"+Mes+"/"+Ano+ " ! FOI IGNORADO PELO SERVER ! **");		
				}
				else
				{
					if (NOME_VIP == "ADMIN")									
						VIPS_UIDS_VEH_BLINDADO.Insert(UID_VIP); 										
					else if (NOME_VIP == "BLINDADO")					
						VIPS_UIDS_VEH_BLINDADO.Insert(UID_VIP);						
				}				
			}			
			CloseFile(VIPS_LISTA);
		}			
		SetarVIP();
	}		
	
	void InvokeOnConnect(PlayerBase player, PlayerIdentity identity)
	{
		super.InvokeOnConnect(player,identity);		
		string PlayerUID = identity.GetPlainId();		
		if(player)
		{				
			if (VIPS_UIDS_VEH_BLINDADO.Find(PlayerUID) >= 0)					
				player.SetVIPVehicle(true);
			else
				player.SetVIPVehicle(false);
		}
	}
	
	void OnClientRespawnEvent(PlayerIdentity identity, PlayerBase player)
	{
		super.OnClientRespawnEvent(identity,player);		
		string PlayerUID = identity.GetPlainId(); 			
		if(player)
		{			
			if (VIPS_UIDS_VEH_BLINDADO.Find(PlayerUID) >= 0)					
				player.SetVIPVehicle(true);
			else
				player.SetVIPVehicle(false);
		}
	}
	
	void OnClientReconnectEvent(PlayerIdentity identity, PlayerBase player)
	{
		super.OnClientReconnectEvent(identity,player);		
		string PlayerUID = identity.GetPlainId(); 		
		if ( player )
		{			
			if (VIPS_UIDS_VEH_BLINDADO.Find(PlayerUID) >= 0)					
				player.SetVIPVehicle(true);
			else
				player.SetVIPVehicle(false);
		}
	}	
	
	void SetarVIP()
	{
		ref array<Man> players = new array<Man>;
		GetGame().GetPlayers( players );			
		for ( int i = 0; i < players.Count(); i++ )
		{
			PlayerBase player;
			Class.CastTo(player, players.Get(i));
			if( player )
			{
				PlayerIdentity identity = player.GetIdentity();
				string PlayerUID = identity.GetPlainId(); 	
				
				if (VIPS_UIDS_VEH_BLINDADO.Find(PlayerUID) >= 0)					
					player.SetVIPVehicle(true);
				else
					player.SetVIPVehicle(false);			
			}
		}		
	}
	
	vector GetPositionV(PlayerBase player)
	{
		float heading = MiscGameplayFunctions.GetHeadingAngle(player);
		vector posModifier = Vector(-(6 * Math.Sin(heading)), 0, 6 * Math.Cos(heading));		
		return posModifier + player.GetPosition();
	}		
	
	void ApplyVipVehicleB( CallType type, ref ParamsReadContext ctx, ref PlayerIdentity sender, ref Object target )
	{		
        if ( type == CallType.Server )
        {
            Param2<PlayerBase, int> data;
            if ( !ctx.Read( data ) ) return;						
			PlayerBase survivorp = data.param1;
			int Vehicle = data.param2;
			SpawnNowB(survivorp, Vehicle);				
		}
	}				
	
	void SpawnNowB(PlayerBase player, int Vehicle)
	{				
		PlayerIdentity identity = player.GetIdentity();
		string UID = identity.GetPlainId(); 		
		float PlayerID = UID.ToFloat();		
		SearchCar(PlayerID);		
		VehicleSpawnBlindado(player, Vehicle, GetPositionV(player));		
	}	
	
	void SearchCar(float PlayerID)
	{		
		array<EntityAI> Carros = new array<EntityAI>;
		DayZPlayerUtils.SceneGetEntitiesInBox("0 0 0", "20000.0 1200.0 20000.0", Carros);		
		for (int i = 0; i < Carros.Count(); ++i)
		{
			CarScript Carro;
			Class.CastTo(Carro, Carros.Get(i));
			if (Carro)
			{
				if(PlayerID == Carro.GetIDCar())								
					Carro.DamageCarVIP(PlayerID);						
			}
		}		
	}
}