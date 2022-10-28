void Equipment_VIP_Assault(PlayerBase player, int ClothingV, int WeaponP)
{
	EntityAI Capacete; //CAPACETE
	EntityAI Blusa; //BLUSA
	EntityAI Calca; //CALÇA
	EntityAI Bota; //BOTA
	EntityAI Mochila; //MOCHILA
	EntityAI Colete;//COLETE		
	EntityAI Cinto;//CINTO	
	EntityAI Pente; //PENTE			
	EntityAI Arma; //ARMA
	EntityAI ArmaSeg; //ARMA SEG
	EntityAI Scope;//SCOPE
	EntityAI LanternaArma; //LANTERNA ARMA
	EntityAI Lanterna; //LANTERNA 
	EntityAI Coldre;//COLDRE
	EntityAI Visor; //VISOR
	EntityAI Range; //TELEMETRO
	EntityAI Pistola; //PISTOLA
	EntityAI Walktalk; //RADIO
	EntityAI Melee; //ARMA BRANCA
	
	bool BLACK = false;
	bool TAN = false;	
	
	ref TStringArray AssaultchemlightArray = {"Chemlight_White","Chemlight_Yellow","Chemlight_Green","Chemlight_Red"};		
	//M4
	ref TStringArray M4bttstock = {"M4_OEBttstck","M4_MPBttstck","M4_CQBBttstck"};
	ref TStringArray M4handguard = {"M4_PlasticHndgrd","M4_RISHndgrd","M4_MPHndgrd"};		
	ref TStringArray M4bttstockGreen = {"M4_OEBttstck_Green","M4_MPBttstck_Green","M4_CQBBttstck_Green"};			
	ref TStringArray M4bttstockBlack = {"M4_OEBttstck_Black","M4_MPBttstck_Black","M4_CQBBttstck_Black"};
	ref TStringArray M4handguardGreen = {"M4_PlasticHndgrd_Green","M4_RISHndgrd_Green","M4_MPHndgrd_Green"};
	ref TStringArray M4handguardBlack = {"M4_PlasticHndgrd_Black","M4_RISHndgrd_Black","M4_MPHndgrd_Black"};		
	//AKM
	ref TStringArray AKMbttstock = {"AK_WoodBttstck","AK_FoldingBttstck","AK_PlasticBttstck"};
	ref TStringArray AKMhandguard = {"AK_WoodHndgrd","AK_RailHndgrd"};		
	ref TStringArray AKMbttstockGreen = {"AK_WoodBttstck_Camo","AK_FoldingBttstck_Green","AK_PlasticBttstck_Green"};				
	ref TStringArray AKMbttstockBlack = {"AK_WoodBttstck_Black","AK_FoldingBttstck_Black","AK_PlasticBttstck_Black"};			
	ref TStringArray AKMhandguardBlack = {"AK_WoodHndgrd_Black","AK_RailHndgrd_Black","AK_PlasticHndgrd"};
	ref TStringArray AKMhandguardGreen = {"AK_WoodHndgrd_Camo","AK_RailHndgrd_Green"};		
	//AK101
	ref TStringArray AK101bttstock = {"AK_WoodBttstck","AK_FoldingBttstck","AK_PlasticBttstck"};
	ref TStringArray AK101handguard = {"AK_WoodHndgrd","AK_RailHndgrd","AK_PlasticHndgrd"};		
	ref TStringArray AK101bttstockGreen = {"AK_WoodBttstck_Camo","AK_FoldingBttstck_Green","AK_PlasticBttstck_Green"};			
	ref TStringArray AK101bttstockBlack = {"AK_WoodBttstck_Black","AK_FoldingBttstck_Black","AK_PlasticBttstck_Black"};			
	ref TStringArray AK101handguardBlack = {"AK_WoodHndgrd_Black","AK_RailHndgrd_Black","AK_PlasticHndgrd"};
	ref TStringArray AK101handguardGreen = {"AK_WoodHndgrd_Camo","AK_RailHndgrd_Green"};
	//FAL 
	ref TStringArray FALBttstock = {"Fal_FoldingBttstck","Fal_OeBttstck"};
	
	int RandomSeg = Math.RandomInt(0,3);
	
	switch ( ClothingV )
	{
		//GREEN
		case 0 :
			Colete = player.GetInventory().CreateInInventory("UKAssVest_Olive");
			player.GetInventory().CreateInInventory("TacticalShirt_Olive");
			player.GetInventory().CreateInInventory("CargoPants_Green");
			player.GetInventory().CreateInInventory("MilitaryBoots_Brown");
			player.GetInventory().CreateInInventory("TacticalGloves_Green");
			player.GetInventory().CreateInInventory("BalaclavaMask_Green");
			player.GetInventory().CreateInInventory("mmg_tac_goggles_clear_green");
			Mochila = player.GetInventory().CreateInInventory("IMP_Bag_MiniMilitaryBag_Green");
			Mochila.GetInventory().CreateAttachment("IMP_Pouch_Tactical_Green");
			Mochila.GetInventory().CreateAttachment("IMP_Pouch_Tactical_Green");
			Mochila.GetInventory().CreateAttachment("IMP_Pouch_NBCBag_EMR");
			player.GetInventory().CreateInInventory("MilitaryBelt");
			Capacete = player.GetInventory().CreateInInventory("IMP_Helmet_Tactic_Green");
			Visor = Capacete.GetInventory().CreateAttachment("mmg_gp_nvg_green");
			Visor.GetInventory().CreateAttachment("Battery9V");	
			Melee = player.GetInventory().CreateInInventory("FirefighterAxe_Green");
			break;		
		
		//BLACK
	    case 1 :
			BLACK=true;
			Capacete = player.GetInventory().CreateInInventory("MMG_tactical_helmet_black");
			Capacete.GetInventory().CreateAttachment("MMG_ballistic_earcover_multicamblack");
			Visor = Capacete.GetInventory().CreateAttachment("mmg_gp_nvg_black");
			Visor.GetInventory().CreateAttachment("Battery9V");				
			player.GetInventory().CreateInInventory("MMG_balaclava_black");
			player.GetInventory().CreateInInventory("MMG_combatshirt_black");
			player.GetInventory().CreateInInventory("MMG_falcon_b1_belt_black");
			player.GetInventory().CreateInInventory("MMG_combatpants_black");
			player.GetInventory().CreateInInventory("MMG_assault_pack_black");
			Colete = player.GetInventory().CreateInInventory("MMG_JPC_Vest_Black");
			Colete.GetInventory().CreateAttachment("MMG_ammo_pouch_black");	
			Colete.GetInventory().CreateAttachment("MMG_Med_Pouch_black");
			Colete.GetInventory().CreateAttachment("MMG_Mag_Pouch_Black");	
			player.GetInventory().CreateInInventory("mmg_tactical_gloves_black");
			player.GetInventory().CreateInInventory("MilitaryBoots_Black");
			player.GetInventory().CreateInInventory("mmg_tac_goggles_clear_black");
			Melee = player.GetInventory().CreateInInventory("FirefighterAxe_Black");
			break;
		
		//TAN
		case 2 :
			TAN = true;
			player.GetInventory().CreateInInventory("MMG_balaclava_tan");
			player.GetInventory().CreateInInventory("MMG_combatpants_tan");
			player.GetInventory().CreateInInventory("MMG_combatshirt_tan");
			player.GetInventory().CreateInInventory("MilitaryBoots_Beige");
			player.GetInventory().CreateInInventory("TacticalGloves_Beige");
			Colete = player.GetInventory().CreateInInventory("MMG_tt_vest_tan");
			Colete.GetInventory().CreateAttachment("MMG_bottle_tan");	
			Colete.GetInventory().CreateAttachment("MMG_tactical_pouch_tan");
			Colete.GetInventory().CreateAttachment("MMG_Med_Pouch_tan");
			Colete.GetInventory().CreateAttachment("MMG_double_magpouch_tan");
			Colete.GetInventory().CreateAttachment("MMG_double_magpouch_tan");
			player.GetInventory().CreateInInventory("mmg_tac_goggles_clear_tan");
			Capacete = player.GetInventory().CreateInInventory("MMG_tactical_helmet_tan");
			Capacete.GetInventory().CreateAttachment("MMG_headphones_tan");	
			Visor = Capacete.GetInventory().CreateAttachment("mmg_gp_nvg_tan");	
			Visor.GetInventory().CreateAttachment("Battery9V");	
			player.GetInventory().CreateInInventory("MMG_falcon_b1_belt_tan");
			player.GetInventory().CreateInInventory("MMG_assault_pack_tan");			
			Melee = player.GetInventory().CreateInInventory("FirefighterAxe");
			break;
	}	
	
	switch (WeaponP) 
	{
		case 0 :		
			//M4A1						
			Arma = player.GetHumanInventory().CreateInHands("M4A1");							
			Arma.GetInventory().CreateAttachment(M4bttstock.GetRandomElement());
			Arma.GetInventory().CreateAttachment(M4handguard.GetRandomElement());
			Arma.GetInventory().CreateAttachment("M4_Suppressor");			
			Arma.GetInventory().CreateAttachment("AtlasBipod");
			Scope = Arma.GetInventory().CreateAttachment("M4_T3NRDSOptic");	
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");					
			Arma.GetInventory().CreateAttachment("Mag_STANAGCoupled_30Rnd");
			player.GetInventory().CreateInInventory("Mag_STANAGCoupled_30Rnd");
			player.GetInventory().CreateInInventory("Mag_STANAGCoupled_30Rnd");			
			break;
		
		case 1 :		
			//M4A1 VERDE
			Arma = player.GetHumanInventory().CreateInHands("M4A1_Green");					
			Arma.GetInventory().CreateAttachment(M4bttstockGreen.GetRandomElement());
			Arma.GetInventory().CreateAttachment(M4handguardGreen.GetRandomElement());
			Arma.GetInventory().CreateAttachment("M4_Suppressor");			
			Arma.GetInventory().CreateAttachment("AtlasBipod");
			Scope = Arma.GetInventory().CreateAttachment("M4_T3NRDSOptic");	
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");				
			Arma.GetInventory().CreateAttachment("Mag_STANAGCoupled_30Rnd");
			player.GetInventory().CreateInInventory("Mag_STANAGCoupled_30Rnd");
			player.GetInventory().CreateInInventory("Mag_STANAGCoupled_30Rnd");		
			break;
		
		case 2 :		
			//M4A1 PRETA
			Arma = player.GetHumanInventory().CreateInHands("M4A1_Black");	
			Arma.GetInventory().CreateAttachment(M4bttstockBlack.GetRandomElement());
			Arma.GetInventory().CreateAttachment(M4handguardBlack.GetRandomElement());
			Arma.GetInventory().CreateAttachment("M4_Suppressor");			
			Arma.GetInventory().CreateAttachment("AtlasBipod");
			Scope = Arma.GetInventory().CreateAttachment("M4_T3NRDSOptic");	
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("Mag_STANAGCoupled_30Rnd");
			player.GetInventory().CreateInInventory("Mag_STANAGCoupled_30Rnd");
			player.GetInventory().CreateInInventory("Mag_STANAGCoupled_30Rnd");						
			break;
		
		case 3 :		
			//AKM
			Arma = player.GetHumanInventory().CreateInHands("AKM");				
			Arma.GetInventory().CreateAttachment(AKMbttstock.GetRandomElement());
			Arma.GetInventory().CreateAttachment(AKMhandguard.GetRandomElement());
			Arma.GetInventory().CreateAttachment("AK_Supressor");		
			Scope = Arma.GetInventory().CreateAttachment("KobraOptic");
			Scope.GetInventory().CreateAttachment("Battery9V");	
			Arma.GetInventory().CreateAttachment("Mag_AKM_Drum75Rnd");
			player.GetInventory().CreateInInventory("Mag_AKM_Drum75Rnd");
			player.GetInventory().CreateInInventory("Mag_AKM_Drum75Rnd");			
			break;
		
		case 4 :		
			//AKM CAMO
			Arma = player.GetHumanInventory().CreateInHands("AKM");				
			Arma.GetInventory().CreateAttachment("AK_WoodBttstck_Camo");
			Arma.GetInventory().CreateAttachment("AK_WoodHndgrd_Camo");	
			Arma.GetInventory().CreateAttachment("AK_Supressor");			
			Scope = Arma.GetInventory().CreateAttachment("KobraOptic");
			Scope.GetInventory().CreateAttachment("Battery9V");	
			Arma.GetInventory().CreateAttachment("Mag_AKM_Drum75Rnd_Green");
			player.GetInventory().CreateInInventory("Mag_AKM_Drum75Rnd_Green");
			player.GetInventory().CreateInInventory("Mag_AKM_Drum75Rnd_Green");			
			break;
		
		case 5 :		
			//AKM VERDE
			Arma = player.GetHumanInventory().CreateInHands("AKM");					
			Arma.GetInventory().CreateAttachment(AKMbttstockGreen.GetRandomElement());
			Arma.GetInventory().CreateAttachment(AKMhandguardGreen.GetRandomElement());	
			Arma.GetInventory().CreateAttachment("AK_Supressor");			
			Scope = Arma.GetInventory().CreateAttachment("KobraOptic");
			Scope.GetInventory().CreateAttachment("Battery9V");	
			Arma.GetInventory().CreateAttachment("Mag_AKM_Drum75Rnd_Green");
			player.GetInventory().CreateInInventory("Mag_AKM_Drum75Rnd_Green");
			player.GetInventory().CreateInInventory("Mag_AKM_Drum75Rnd_Green");					
			break;
			
		
		case 6 :		
			//AKM PRETA
			Arma = player.GetHumanInventory().CreateInHands("AKM");					
			Arma.GetInventory().CreateAttachment(AKMbttstockBlack.GetRandomElement());
			Arma.GetInventory().CreateAttachment(AKMhandguardBlack.GetRandomElement());	
			Arma.GetInventory().CreateAttachment("AK_Supressor");		
			Scope = Arma.GetInventory().CreateAttachment("KobraOptic");
			Scope.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("Mag_AKM_Drum75Rnd_Black");
			player.GetInventory().CreateInInventory("Mag_AKM_Drum75Rnd_Black");
			player.GetInventory().CreateInInventory("Mag_AKM_Drum75Rnd_Black");					
			break;
		
		case 7 :		
			//AK101
			Arma = player.GetHumanInventory().CreateInHands("AK101");				
			Arma.GetInventory().CreateAttachment(AK101bttstock.GetRandomElement());
			Arma.GetInventory().CreateAttachment(AK101handguard.GetRandomElement());
			Arma.GetInventory().CreateAttachment("AK_Supressor");			
			Scope = Arma.GetInventory().CreateAttachment("KobraOptic");
			Scope.GetInventory().CreateAttachment("Battery9V");	
			Arma.GetInventory().CreateAttachment("Mag_AK101_30Rnd");
			player.GetInventory().CreateInInventory("Mag_AK101_30Rnd");
			player.GetInventory().CreateInInventory("Mag_AK101_30Rnd");
			player.GetInventory().CreateInInventory("Mag_AK101_30Rnd");			
			break;
		
		case 8 :
			//AK101 CAMO				
			Arma = player.GetHumanInventory().CreateInHands("AK101_Green");
			Arma.GetInventory().CreateAttachment("AK_WoodBttstck_Camo");
			Arma.GetInventory().CreateAttachment("AK_WoodHndgrd_Camo");
			Arma.GetInventory().CreateAttachment("AK_Supressor");			
			Scope = Arma.GetInventory().CreateAttachment("KobraOptic");
			Scope.GetInventory().CreateAttachment("Battery9V");		
			Arma.GetInventory().CreateAttachment("Mag_AK101_30Rnd_Green");
			player.GetInventory().CreateInInventory("Mag_AK101_30Rnd_Green");
			player.GetInventory().CreateInInventory("Mag_AK101_30Rnd_Green");
			player.GetInventory().CreateInInventory("Mag_AK101_30Rnd_Green");	
			break;			
		
		case 9 :		
			//AK101 VERDE				
			Arma = player.GetHumanInventory().CreateInHands("AK101_Green");
			Arma.GetInventory().CreateAttachment(AK101bttstockGreen.GetRandomElement());
			Arma.GetInventory().CreateAttachment(AK101handguardGreen.GetRandomElement());
			Arma.GetInventory().CreateAttachment("AK_Supressor");			
			Scope = Arma.GetInventory().CreateAttachment("KobraOptic");
			Scope.GetInventory().CreateAttachment("Battery9V");	
			Arma.GetInventory().CreateAttachment("Mag_AK101_30Rnd_Green");
			player.GetInventory().CreateInInventory("Mag_AK101_30Rnd_Green");
			player.GetInventory().CreateInInventory("Mag_AK101_30Rnd_Green");
			player.GetInventory().CreateInInventory("Mag_AK101_30Rnd_Green");	
			break;	
		
		case 10 :		
			//AK101 PRETA				
			Arma = player.GetHumanInventory().CreateInHands("AK101_Black");
			Arma.GetInventory().CreateAttachment(AK101bttstockBlack.GetRandomElement());
			Arma.GetInventory().CreateAttachment(AK101handguardBlack.GetRandomElement());
			Arma.GetInventory().CreateAttachment("AK_Supressor");			
			Scope = Arma.GetInventory().CreateAttachment("KobraOptic");
			Scope.GetInventory().CreateAttachment("Battery9V");	
			Arma.GetInventory().CreateAttachment("Mag_AK101_30Rnd_Black");
			player.GetInventory().CreateInInventory("Mag_AK101_30Rnd_Black");
			player.GetInventory().CreateInInventory("Mag_AK101_30Rnd_Black");
			player.GetInventory().CreateInInventory("Mag_AK101_30Rnd_Black");			
			break;	
		
		case 11 :		
			//AUG AUR AX		
			Arma = player.GetHumanInventory().CreateInHands("Aug");				
			Arma.GetInventory().CreateAttachment("M4_Suppressor");
			Scope = Arma.GetInventory().CreateAttachment("ACOGOptic");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");		
			Arma.GetInventory().CreateAttachment("Mag_Aug_30Rnd");
			player.GetInventory().CreateInInventory("Mag_Aug_30Rnd");
			player.GetInventory().CreateInInventory("Mag_Aug_30Rnd");
			player.GetInventory().CreateInInventory("Mag_Aug_30Rnd");			
			break;
		
		case 12 :		
			//AUG AUR A1		
			Arma = player.GetHumanInventory().CreateInHands("AugShort");				
			Arma.GetInventory().CreateAttachment("TTC_Universal_Suppressor_BLACK");	
			Arma.GetInventory().CreateAttachment("Mag_Aug_30Rnd");
			player.GetInventory().CreateInInventory("Mag_Aug_30Rnd");
			player.GetInventory().CreateInInventory("Mag_Aug_30Rnd");	
			player.GetInventory().CreateInInventory("Mag_Aug_30Rnd");
			break;
		
		case 13 :		
			//M16A2
			Arma = player.GetHumanInventory().CreateInHands("M16A2");	
			Arma.GetInventory().CreateAttachment("M4_Suppressor");
			Arma.GetInventory().CreateAttachment("Mag_STANAGCoupled_30Rnd");
			player.GetInventory().CreateInInventory("Mag_STANAGCoupled_30Rnd");
			player.GetInventory().CreateInInventory("Mag_STANAGCoupled_30Rnd");	
			player.GetInventory().CreateInInventory("Mag_STANAGCoupled_30Rnd");
			break;
		
		case 14 :		
			//AK74
			Arma = player.GetHumanInventory().CreateInHands("AK74");	
			Arma.GetInventory().CreateAttachment("AK74_Hndgrd");
			Arma.GetInventory().CreateAttachment("AK74_WoodBttstck");				
			Arma.GetInventory().CreateAttachment("AK_Suppressor");
			Scope = Arma.GetInventory().CreateAttachment("KobraOptic");	
			Scope.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("Mag_AK74_30Rnd");
			player.GetInventory().CreateInInventory("Mag_AK74_30Rnd");
			player.GetInventory().CreateInInventory("Mag_AK74_30Rnd");
			player.GetInventory().CreateInInventory("Mag_AK74_30Rnd");
			player.GetInventory().CreateInInventory("Mag_AK74_30Rnd");
			break;
		
		case 15 :		
			//AK74 CAMO
			Arma = player.GetHumanInventory().CreateInHands("AK74_Green");	
			Arma.GetInventory().CreateAttachment("AK74_Hndgrd_Camo");
			Arma.GetInventory().CreateAttachment("AK74_WoodBttstck_Camo");				
			Arma.GetInventory().CreateAttachment("AK_Suppressor");
			Scope = Arma.GetInventory().CreateAttachment("KobraOptic");	
			Scope.GetInventory().CreateAttachment("Battery9V");	
			Arma.GetInventory().CreateAttachment("Mag_AK74_30Rnd_Green");
			player.GetInventory().CreateInInventory("Mag_AK74_30Rnd_Green");
			player.GetInventory().CreateInInventory("Mag_AK74_30Rnd_Green");
			player.GetInventory().CreateInInventory("Mag_AK74_30Rnd_Green");
			player.GetInventory().CreateInInventory("Mag_AK74_30Rnd_Green");
			break;
		
		case 16 :
			//AK74 PRETA
			Arma = player.GetHumanInventory().CreateInHands("AK74_Black");	
			Arma.GetInventory().CreateAttachment("AK74_WoodBttstck_Black");
			Arma.GetInventory().CreateAttachment("AK74_Hndgrd_Black");				
			Arma.GetInventory().CreateAttachment("AK_Suppressor");
			Scope = Arma.GetInventory().CreateAttachment("KobraOptic");	
			Scope.GetInventory().CreateAttachment("Battery9V");	
			Arma.GetInventory().CreateAttachment("Mag_AK74_30Rnd_Black");
			player.GetInventory().CreateInInventory("Mag_AK74_30Rnd_Black");
			player.GetInventory().CreateInInventory("Mag_AK74_30Rnd_Black");
			player.GetInventory().CreateInInventory("Mag_AK74_30Rnd_Black");
			player.GetInventory().CreateInInventory("Mag_AK74_30Rnd_Black");
			break;
		
		case 17 :
			//SAIGA
			Arma = player.GetHumanInventory().CreateInHands("Saiga");	
			Arma.GetInventory().CreateAttachment("Saiga_Bttstck");					
			Scope = Arma.GetInventory().CreateAttachment("KobraOptic");	
			Scope.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("Mag_Saiga_Drum20Rnd");
			player.GetInventory().CreateInInventory("Mag_Saiga_Drum20Rnd");
			player.GetInventory().CreateInInventory("Mag_Saiga_Drum20Rnd");	
			player.GetInventory().CreateInInventory("Mag_Saiga_Drum20Rnd");	
			player.GetInventory().CreateInInventory("Mag_Saiga_Drum20Rnd");	
			break;
		
		case 18 :
			//FAL
			Arma = player.GetHumanInventory().CreateInHands("FAL");	
			Arma.GetInventory().CreateAttachment(FALBttstock.GetRandomElement());					
			Arma.GetInventory().CreateAttachment("TTC_Universal_Suppressor_BLACK");
			Scope = Arma.GetInventory().CreateAttachment("ACOGOptic");	
			Arma.GetInventory().CreateAttachment("Mag_FAL_20Rnd");
			player.GetInventory().CreateInInventory("Mag_FAL_20Rnd");
			player.GetInventory().CreateInInventory("Mag_FAL_20Rnd");
			player.GetInventory().CreateInInventory("Mag_FAL_20Rnd");
			player.GetInventory().CreateInInventory("Mag_FAL_20Rnd");
			break;
		
		case 19 :
			//BIZON				
			Arma = player.GetHumanInventory().CreateInHands("PP19");				
			Arma.GetInventory().CreateAttachment("PP19_Bttstck");	
			Arma.GetInventory().CreateAttachment("TTC_Universal_Suppressor_BLACK");
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_AKWalther");
			Scope.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("Mag_PP19_64Rnd");
			player.GetInventory().CreateInInventory("Mag_PP19_64Rnd");
			player.GetInventory().CreateInInventory("Mag_PP19_64Rnd");	
			player.GetInventory().CreateInInventory("Mag_PP19_64Rnd");
			player.GetInventory().CreateInInventory("Mag_PP19_64Rnd");
			break;			
		
		case 20 :
			//LE-MAS
			Arma = player.GetHumanInventory().CreateInHands("FAMAS");				
			Arma.GetInventory().CreateAttachment("TTC_Universal_Suppressor_BLACK");	
			Arma.GetInventory().CreateAttachment("Mag_FAMAS_25Rnd");
			player.GetInventory().CreateInInventory("Mag_FAMAS_25Rnd");
			player.GetInventory().CreateInInventory("Mag_FAMAS_25Rnd");
			player.GetInventory().CreateInInventory("Mag_FAMAS_25Rnd");
			player.GetInventory().CreateInInventory("Mag_FAMAS_25Rnd");
			break;
			
		case 21 :
			//SCAR-H					
			Arma = player.GetHumanInventory().CreateInHands("Snafu_ScarH_OD_GUN");				
			Arma.GetInventory().CreateAttachment("SNAFUScar_AFG_BK");	
			Arma.GetInventory().CreateAttachment("SNAFUGevar_Suppressor_Green");
			Arma.GetInventory().CreateAttachment("SNAFU_ModBipod");
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_Tango6T_Wood");
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("SNAFU_ScarH_100RND_Mag_Black");			
			player.GetInventory().CreateInInventory("SNAFU_ScarH_100RND_Mag_Black");
			player.GetInventory().CreateInInventory("SNAFU_ScarH_100RND_Mag_Black");
			break;	

		case 22 :
			//FN-SCAR
			Arma = player.GetHumanInventory().CreateInHands("SCAR_Gun");				
			Arma.GetInventory().CreateAttachment("Snafu_ScarH_SIL_Tan");	
			Arma.GetInventory().CreateAttachment("SNAFUScar_AFG_Tan");			
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_Tango6T_Wood");
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("SNAFU_CMAG60556_Tan");			
			player.GetInventory().CreateInInventory("SNAFU_CMAG60556_Tan");	
			player.GetInventory().CreateInInventory("SNAFU_CMAG60556_Tan");
			player.GetInventory().CreateInInventory("SNAFU_CMAG60556_Tan");
			break;
			
		case 23 :
			//SG552
			Arma = player.GetHumanInventory().CreateInHands("SG552_Gun");				
			Arma.GetInventory().CreateAttachment("SNAFU_Standardized_Suppressor_Black");				
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_Trijicon_Docter");
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("SG550_Mag");			
			player.GetInventory().CreateInInventory("SG550_Mag");	
			player.GetInventory().CreateInInventory("SG550_Mag");
			player.GetInventory().CreateInInventory("SG550_Mag");
			break;
			
		case 24 :
			//RPK-16
			Arma = player.GetHumanInventory().CreateInHands("SNAFU_RPK16_Black");				
			Arma.GetInventory().CreateAttachment("SNAFU_LStandardized_Suppressor_Black");				
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_Walther");
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("SNAFU_RPK16_Black_Mag");				
			player.GetInventory().CreateInInventory("SNAFU_RPK16_Black_Mag");
			player.GetInventory().CreateInInventory("SNAFU_RPK16_Black_Mag");
			break;
			
		case 25 :
			//AUG A3
			Arma = player.GetHumanInventory().CreateInHands("SNAFUAUG");				
			Arma.GetInventory().CreateAttachment("SNAFU_LStandardized_Suppressor_Green");
			Arma.GetInventory().CreateAttachment("SNAFU_FGKAC_Grip");			
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_Trijicon_Docter");
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("SNAFU_BMAG556_Black");				
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");
			break;
	}
	
	if(BLACK)
		Arma.GetInventory().CreateAttachment("GhillieAtt_Black");	
	else if (TAN)
		Arma.GetInventory().CreateAttachment("GhillieAtt_Brown");		
	else
		Arma.GetInventory().CreateAttachment("GhillieAtt_Woodland");	
	
	switch (RandomSeg) 
	{				
		case 0 :
			ArmaSeg = player.GetInventory().CreateInInventory("CZ61");	
			ArmaSeg.GetInventory().CreateAttachment("PistolSuppressor");
			ArmaSeg.GetInventory().CreateAttachment("Mag_CZ61_20Rnd");
			Mochila.GetInventory().CreateInInventory("Mag_CZ61_20Rnd");
			Mochila.GetInventory().CreateInInventory("Mag_CZ61_20Rnd");			
			break;					
		
		case 1 :
			//GLOCK
			ArmaSeg = player.GetInventory().CreateInInventory("Glock19");
			ArmaSeg.GetInventory().CreateAttachment("PistolSuppressor");
			Lanterna = ArmaSeg.GetInventory().CreateAttachment("TLRLight");
			Lanterna.GetInventory().CreateAttachment("Battery9V");
			Scope = ArmaSeg.GetInventory().CreateAttachment("FNP45_MRDSOptic"); 
			Scope.GetInventory().CreateAttachment("Battery9V");
			ArmaSeg.GetInventory().CreateAttachment("Mag_Glock_15Rnd");
			player.GetInventory().CreateInInventory("Mag_Glock_15Rnd");
			player.GetInventory().CreateInInventory("Mag_Glock_15Rnd");									
			break;					
		
		case 2 :
			//FNX45
			ArmaSeg = player.GetInventory().CreateInInventory("FNX45");	
			ArmaSeg.GetInventory().CreateAttachment("PistolSuppressor");
			Lanterna = ArmaSeg.GetInventory().CreateAttachment("TLRLight");
			Lanterna.GetInventory().CreateAttachment("Battery9V");
			Scope = ArmaSeg.GetInventory().CreateAttachment("FNP45_MRDSOptic"); 
			Scope.GetInventory().CreateAttachment("Battery9V");
			ArmaSeg.GetInventory().CreateAttachment("Mag_FNX45_15Rnd");
			player.GetInventory().CreateInInventory("Mag_FNX45_15Rnd");			
			player.GetInventory().CreateInInventory("Mag_FNX45_15Rnd");			
			break;						
	}		
	
	//ITEMS	
	Mochila.GetInventory().CreateAttachment(AssaultchemlightArray.GetRandomElement());			
	Walktalk = Mochila.GetInventory().CreateAttachment("PersonalRadio");
	Walktalk.GetInventory().CreateAttachment("Battery9V");
	Colete.GetInventory().CreateAttachment("M67Grenade");	
	player.GetInventory().CreateInInventory("SalineBagIV");
	player.GetInventory().CreateInInventory("ChernarusMap");	
	Bota.GetInventory().CreateAttachment("CombatKnife");
	player.GetInventory().CreateInInventory("BandageDressing");				
	player.GetInventory().CreateInInventory("Epinephrine");
	player.GetInventory().CreateInInventory("Morphine");
	player.GetInventory().CreateInInventory("CanOpener");	
	Cinto.GetInventory().CreateAttachment("Canteen");				
	player.GetInventory().CreateInInventory("TacticalBaconCan");
	player.GetInventory().CreateInInventory("SpaghettiCan");
	
	player.SetQuickBarEntityShortcut( Arma, 0, true );
	player.SetQuickBarEntityShortcut( ArmaSeg, 1, true );
	player.SetQuickBarEntityShortcut( Melee, 2, true );	
}