#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\_vip\\VIP_MASTER.c"
#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\_vip\\VIP_SUPER.c"
#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\_vip\\VIP_SNIPER.c"
#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\_vip\\VIP_ASSALTO.c"
modded class MissionServer
{	
	protected ref TStringArray VIPS_UIDS_MASTER = new TStringArray;
	protected ref TStringArray VIPS_UIDS_SUPER = new TStringArray;
	protected ref TStringArray VIPS_UIDS_SNIPER = new TStringArray;
	protected ref TStringArray VIPS_UIDS_ASSALTO = new TStringArray;	
	bool VIPTODOS = true; //Libera o vip para todos; sim = true; não = false;
	int ClothingV_N;
	int WeaponP_N;
	int WeaponS_N;	
	PlayerBase survivor;	
	
	override void OnInit()
	{
		super.OnInit();
		GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(this.RefreshVIP, 60000, true); // 30000 = 30seg || 60000 = 1 min || 300000 = 5min || 600000 = 10min		
		RefreshVIP();
	}

    void MissionServer()
    {
		n_VipResistencia_RPCManager = null;
		VipResistencia_RPCManager();			
		n_VipResistencia_RPCManager_Mega = null;
		VipResistencia_RPCManager_Mega();		
		n_VipResistencia_RPCManager_Sniper = null;
		VipResistencia_RPCManager_Sniper();		
		n_VipResistencia_RPCManager_Assault = null;
		VipResistencia_RPCManager_Assault();				
		GetRPCManager().AddRPC( "VipMenu_Server", "ApplyVip", this, SingeplayerExecutionType.Server );
		GetRPCManager().AddRPC( "VipMenu_Server_Mega", "ApplyVipMega", this, SingeplayerExecutionType.Server );	
		GetRPCManager().AddRPC( "VipMenu_Server_Sniper", "ApplyVipSniper", this, SingeplayerExecutionType.Server );	
		GetRPCManager().AddRPC( "VipMenu_Server_Assault", "ApplyVipAssault", this, SingeplayerExecutionType.Server );	
    }
	
	void RefreshVIP()
	{		
		VIPS_UIDS_MASTER.Clear();
		VIPS_UIDS_SUPER.Clear();
		VIPS_UIDS_SNIPER.Clear();
		VIPS_UIDS_ASSALTO.Clear();
		string UID_DATA;		
		int AnoAtual, MesAtual, DiaAtual, Dia, Mes, Ano;
		GetYearMonthDayUTC(AnoAtual, MesAtual, DiaAtual);
		array<string> VipLinha = new array<string>;	
		array<string> DataLinha = new array<string>;		
		FileHandle VIPS_LISTA = OpenFile("$profile:_VIP/VIPS.ini", FileMode.READ);			
			
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
					//GetGame().AdminLog("[VIP SOUTH AMERICAN PLAGUE SUPREME] VIP DO "+ NICK_PLAYER +" COM UID "+ UID_VIP +" EXPIROU NA DATA " +Dia+"/"+Mes+"/"+Ano+ " ! FOI IGNORADO PELO SERVER ! **");					
				}
				else
				{
					if (NOME_VIP == "ADMIN")
					{					
						VIPS_UIDS_MASTER.Insert(UID_VIP); //ADICIONA UID 							
						//GetGame().AdminLog("[VIP SOUTH AMERICAN PLAGUE SUPREME]  "+NICK_PLAYER+" com UID "+ UID_VIP +" foi adicionado na lista de vips ADMIN!");
					}
					else if (NOME_VIP == "MASTER")
					{
						VIPS_UIDS_MASTER.Insert(UID_VIP); //ADICIONA UID 							
						//GetGame().AdminLog("[VIP SOUTH AMERICAN PLAGUE SUPREME] "+NICK_PLAYER+" com UID "+ UID_VIP +" foi adicionado na lista de vips SUPREME!");
					}	
					else if (NOME_VIP == "SUPER")
					{
						VIPS_UIDS_SUPER.Insert(UID_VIP); //ADICIONA UID 							
						//GetGame().AdminLog("[VIP SOUTH AMERICAN PLAGUE MEGA] "+NICK_PLAYER+" com UID "+ UID_VIP +" foi adicionado na lista de vips MEGA!");
					}
					else if (NOME_VIP == "SNIPER")
					{
						VIPS_UIDS_SNIPER.Insert(UID_VIP); //ADICIONA UID 							
						//GetGame().AdminLog("[VIP SOUTH AMERICAN PLAGUE SNIPER] "+NICK_PLAYER+" com UID "+ UID_VIP +" foi adicionado na lista de vips SNIPER!");
					}
					else if (NOME_VIP == "ASSALTO")
					{
						VIPS_UIDS_ASSALTO.Insert(UID_VIP); //ADICIONA UID 							
						//GetGame().AdminLog("[VIP SOUTH AMERICAN PLAGUE ASSAULT] "+NICK_PLAYER+" com UID "+ UID_VIP +" foi adicionado na lista de vips ASSAULT!");
					}
				}				
			}			
			CloseFile(VIPS_LISTA);
		}
		//GetGame().AdminLog("[VIP SOUTH AMERICAN PLAGUE] ATUALIZADO !");			
	}		
				
	void ApplyVip( CallType type, ref ParamsReadContext ctx, ref PlayerIdentity sender, ref Object target )
	{		
        if ( type == CallType.Server )
        {
            Param4<PlayerBase, int, int, int> data;
            if (!ctx.Read( data )) return;	
			
			survivor = data.param1;
			int ClothingV = data.param2;
			int WeaponP = data.param3;
			int WeaponS = data.param4;			
			survivor.RemoveAllItems();				
			ClothingV_N = ClothingV;
			WeaponP_N = WeaponP;
			WeaponS_N = WeaponS;				
			
			Equipment_VIP(survivor, ClothingV_N, WeaponP_N, WeaponS_N);
			/*if(GetSpawnSelectServer().GetCurrentSpawnsystemMode() == 1)
					GetSpawnSelectServer().SendClientToSpawnSelectMenu(sender);	*/			
		}
	}	
	void ApplyVipMega( CallType type, ref ParamsReadContext ctx, ref PlayerIdentity sender, ref Object target )
	{		
        if ( type == CallType.Server )
        {
            Param4<PlayerBase, int, int, int> data;
            if (!ctx.Read( data )) return;	
			
			survivor = data.param1;
			int ClothingV = data.param2;
			int WeaponP = data.param3;
			int WeaponS = data.param4;			
			survivor.RemoveAllItems();				
			ClothingV_N = ClothingV;
			WeaponP_N = WeaponP;
			WeaponS_N = WeaponS;					
			
			Equipment_VIP_Mega(survivor, ClothingV_N, WeaponP_N, WeaponS_N);
			/*if(GetSpawnSelectServer().GetCurrentSpawnsystemMode() == 1)
					GetSpawnSelectServer().SendClientToSpawnSelectMenu(sender);	*/				
		}
	}
	void ApplyVipSniper( CallType type, ref ParamsReadContext ctx, ref PlayerIdentity sender, ref Object target )
	{		
        if ( type == CallType.Server )
        {
            Param3<PlayerBase, int, int> data;
            if (!ctx.Read( data )) return;	
			
			survivor = data.param1;
			int ClothingV = data.param2;
			int WeaponP = data.param3;				
			survivor.RemoveAllItems();				
			ClothingV_N = ClothingV;
			WeaponP_N = WeaponP;				
			
			Equipment_VIP_Sniper(survivor, ClothingV_N, WeaponP_N);		
			/*if(GetSpawnSelectServer().GetCurrentSpawnsystemMode() == 1)
					GetSpawnSelectServer().SendClientToSpawnSelectMenu(sender);	*/				
		}
	}
	void ApplyVipAssault( CallType type, ref ParamsReadContext ctx, ref PlayerIdentity sender, ref Object target )
	{		
        if ( type == CallType.Server )
        {
            Param3<PlayerBase, int, int> data;
            if (!ctx.Read( data )) return;	
			
			survivor = data.param1;
			int ClothingV = data.param2;
			int WeaponP = data.param3;				
			survivor.RemoveAllItems();				
			ClothingV_N = ClothingV;
			WeaponP_N = WeaponP;			

			Equipment_VIP_Assault(survivor, ClothingV_N, WeaponP_N);
			/*if(GetSpawnSelectServer().GetCurrentSpawnsystemMode() == 1)
					GetSpawnSelectServer().SendClientToSpawnSelectMenu(sender);	*/			
		}
	}
	
	override PlayerBase OnClientNewEvent(PlayerIdentity identity, vector pos, ParamsReadContext ctx)
	{
		string characterType;		
		if ( ProcessLoginData(ctx) && (m_RespawnMode == GameConstants.RESPAWN_MODE_CUSTOM) && !GetGame().GetMenuDefaultCharacterData(false).IsRandomCharacterForced() )
		{
			if (GetGame().ListAvailableCharacters().Find(GetGame().GetMenuDefaultCharacterData().GetCharacterType()) > -1)
				characterType = GetGame().GetMenuDefaultCharacterData().GetCharacterType();
			else 
				characterType = GetGame().CreateRandomPlayer();
		}
		else
		{
			characterType = GetGame().CreateRandomPlayer();
			GetGame().GetMenuDefaultCharacterData().GenerateRandomEquip();
		}
		
		if (CreateCharacter(identity, pos, ctx, characterType))
		{			
			EquipCharacter(GetGame().GetMenuDefaultCharacterData());			
			string PlayerUID = identity.GetPlainId(); 	
			
			if(VIPTODOS) //SE VIPTODOS FOR TRUE TODOS RECEBEM			
				GetRPCManager().SendRPC("VipMenu_Server_Mega", "OpenMenuMega", null, true, identity);			
			else 			
				if (VIPS_UIDS_MASTER.Find(PlayerUID) >= 0)					
					GetRPCManager().SendRPC("VipMenu_Server", "OpenMenu", null, true, identity);			
				else if(VIPS_UIDS_SUPER.Find(PlayerUID) >= 0)			
					GetRPCManager().SendRPC("VipMenu_Server_Mega", "OpenMenuMega", null, true, identity);
				else if(VIPS_UIDS_SNIPER.Find(PlayerUID) >= 0)				
					GetRPCManager().SendRPC("VipMenu_Server_Sniper", "OpenMenuSniper", null, true, identity);
				else if(VIPS_UIDS_ASSALTO.Find(PlayerUID) >= 0)
					GetRPCManager().SendRPC("VipMenu_Server_Assault", "OpenMenuAssault", null, true, identity);			
		}		
		return m_player;
	}		
}