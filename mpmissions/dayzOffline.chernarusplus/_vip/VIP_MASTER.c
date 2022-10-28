void Equipment_VIP(PlayerBase player, int ClothingV, int WeaponP, int WeaponS)
{		
	EntityAI Capacete; //CAPACETE
	EntityAI Blusa; //BLUSA
	EntityAI Calca; //CALÇA
	EntityAI Bota; //BOTA
	EntityAI Mochila; //MOCHILA
	EntityAI MochilaColete; //MOCHILA
	EntityAI Colete; //COLETE		
	EntityAI Cinto; //CINTO	
	EntityAI Pente; //PENTE			
	EntityAI Arma; //ARMA
	EntityAI ArmaSeg; //ARMA SEG
	EntityAI Scope; //SCOPE
	EntityAI LanternaArma; //LANTERNA ARMA
	EntityAI Lanterna; //LANTERNA 
	EntityAI Coldre; //COLDRE
	EntityAI Visor; //VISOR
	EntityAI Range; //TELEMETRO
	EntityAI Pistola; //PISTOLA
	EntityAI Walktalk; //RADIO
	EntityAI Melee; //ARMA BRANCA
	EntityAI NVG; //ARMA BRANCA
	
	bool BLACK = false;
	bool TAN = false;
	bool SNOW = false;
	
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
	
	switch(ClothingV)
	{
		case 0:
			//COMBATE MMG OLIVE
			Capacete = player.GetInventory().CreateInInventory("MMG_tactical_helmet_green");
			Capacete.GetInventory().CreateAttachment("MMG_headphones_green");	
			Visor = Capacete.GetInventory().CreateAttachment("mmg_gp_nvg_green");	
			Visor.GetInventory().CreateAttachment("Battery9V");	
			Lanterna = Capacete.GetInventory().CreateAttachment("UniversalLight");	
			Lanterna.GetInventory().CreateAttachment("Battery9V");
			player.GetInventory().CreateInInventory("MMG_balaclava_olive");
			player.GetInventory().CreateInInventory("mmg_tactical_gloves_green");	
			player.GetInventory().CreateInInventory("mmg_tac_goggles_clear_green");
			Blusa = player.GetInventory().CreateInInventory("MMG_combatshirt_green");
			Colete = player.GetInventory().CreateInInventory("MMG_tt_vest_green");		
			Colete.GetInventory().CreateAttachment("MMG_ammo_pouch_olive");	
			Colete.GetInventory().CreateAttachment("MMG_double_magpouch_green");	
			Colete.GetInventory().CreateAttachment("MMG_double_magpouch_green");
			Colete.GetInventory().CreateAttachment("MMG_bottle_olive");		
			Colete.GetInventory().CreateAttachment("M67Grenade");
			Colete.GetInventory().CreateAttachment("M67Grenade");			
			Colete.GetInventory().CreateAttachment("MMG_Med_Pouch_Olive");				
			Calca = player.GetInventory().CreateInInventory("MMG_combatpants_olive");	
			Cinto = player.GetInventory().CreateInInventory("MMG_falcon_b1_belt_olive");
			Cinto.GetInventory().CreateAttachment("MMG_tactical_pouch_green");	
			Cinto.GetInventory().CreateAttachment("MMG_Holster_green");	
			Cinto.GetInventory().CreateAttachment("MMG_bottle_olive");
			Cinto.GetInventory().CreateAttachment("MMG_carbine_green");
			Cinto.GetInventory().CreateAttachment("MMG_sheath_olive");
			Cinto.GetInventory().CreateAttachment("MMG_Med_Pouch_Olive");
			Mochila = player.GetInventory().CreateInInventory("MMG_carrier_backpack_olive");		
			Bota = player.GetInventory().CreateInInventory("MilitaryBoots_Brown");	
			Melee = player.GetInventory().CreateInInventory("FirefighterAxe_Green");
			Mochila.GetInventory().CreateAttachment(AssaultchemlightArray.GetRandomElement());
			Walktalk = Mochila.GetInventory().CreateAttachment("PersonalRadio");
			Walktalk.GetInventory().CreateAttachment("Battery9V");
			break;				
				
		case 1:
			//COMBATE MMG BLACK
			BLACK = true;
			Capacete = player.GetInventory().CreateInInventory("MMG_tactical_helmet_black");
			Capacete.GetInventory().CreateAttachment("MMG_headphones_black");	
			Visor = Capacete.GetInventory().CreateAttachment("mmg_gp_nvg_black");	
			Visor.GetInventory().CreateAttachment("Battery9V");	
			Lanterna = Capacete.GetInventory().CreateAttachment("UniversalLight");	
			Lanterna.GetInventory().CreateAttachment("Battery9V");
			player.GetInventory().CreateInInventory("MMG_balaclava_black");
			player.GetInventory().CreateInInventory("mmg_tactical_gloves_black");	
			player.GetInventory().CreateInInventory("mmg_tac_goggles_clear_black");
			Blusa = player.GetInventory().CreateInInventory("MMG_combatshirt_black");
			Colete = player.GetInventory().CreateInInventory("MMG_tt_vest_black");		
			Colete.GetInventory().CreateAttachment("MMG_ammo_pouch_black");	
			Colete.GetInventory().CreateAttachment("MMG_double_magpouch_black");	
			Colete.GetInventory().CreateAttachment("MMG_bottle_black");
			Colete.GetInventory().CreateAttachment("M67Grenade");		
			Colete.GetInventory().CreateAttachment("M67Grenade");
			Colete.GetInventory().CreateAttachment("MMG_Med_Pouch_black");
			Colete.GetInventory().CreateAttachment("MMG_tactical_pouch_black");				
			Calca = player.GetInventory().CreateInInventory("MMG_combatpants_black");	
			Cinto = player.GetInventory().CreateInInventory("MMG_falcon_b1_belt_black");
			Cinto.GetInventory().CreateAttachment("MMG_tactical_pouch_black");	
			Cinto.GetInventory().CreateAttachment("MMG_Holster_black");	
			Cinto.GetInventory().CreateAttachment("MMG_bottle_black");
			Cinto.GetInventory().CreateAttachment("MMG_carbine_red");
			Cinto.GetInventory().CreateAttachment("MMG_sheath_black");
			Cinto.GetInventory().CreateAttachment("MMG_Med_Pouch_black");
			Mochila = player.GetInventory().CreateInInventory("MMG_carrier_backpack_black");		
			Bota = player.GetInventory().CreateInInventory("MilitaryBoots_black");	
			Melee = player.GetInventory().CreateInInventory("FirefighterAxe_black");
			Mochila.GetInventory().CreateAttachment(AssaultchemlightArray.GetRandomElement());
			Walktalk = Mochila.GetInventory().CreateAttachment("PersonalRadio");
			Walktalk.GetInventory().CreateAttachment("Battery9V");
			break;							
		
		case 2:
			//COMBATE MMG TAN
			TAN = true;
			Capacete = player.GetInventory().CreateInInventory("MMG_tactical_helmet_tan");
			Capacete.GetInventory().CreateAttachment("MMG_headphones_tan");	
			Visor = Capacete.GetInventory().CreateAttachment("mmg_gp_nvg_tan");	
			Visor.GetInventory().CreateAttachment("Battery9V");	
			Lanterna = Capacete.GetInventory().CreateAttachment("UniversalLight");	
			Lanterna.GetInventory().CreateAttachment("Battery9V");
			player.GetInventory().CreateInInventory("MMG_balaclava_tan");
			player.GetInventory().CreateInInventory("mmg_tactical_gloves_tan");	
			player.GetInventory().CreateInInventory("mmg_tac_goggles_clear_tan");
			Blusa = player.GetInventory().CreateInInventory("MMG_combatshirt_tan");
			Colete = player.GetInventory().CreateInInventory("MMG_tt_vest_tan");		
			Colete.GetInventory().CreateAttachment("MMG_ammo_pouch_tan");	
			Colete.GetInventory().CreateAttachment("MMG_double_magpouch_tan");	
			Colete.GetInventory().CreateAttachment("MMG_bottle_tan");
			Colete.GetInventory().CreateAttachment("M67Grenade");		
			Colete.GetInventory().CreateAttachment("M67Grenade");
			Colete.GetInventory().CreateAttachment("MMG_Med_Pouch_tan");
			Colete.GetInventory().CreateAttachment("MMG_tactical_pouch_tan");				
			Calca = player.GetInventory().CreateInInventory("MMG_combatpants_tan");	
			Cinto = player.GetInventory().CreateInInventory("MMG_falcon_b1_belt_tan");
			Cinto.GetInventory().CreateAttachment("MMG_tactical_pouch_tan");	
			Cinto.GetInventory().CreateAttachment("MMG_Holster_tan");	
			Cinto.GetInventory().CreateAttachment("MMG_bottle_tan");
			Cinto.GetInventory().CreateAttachment("MMG_carbine_orange");
			Cinto.GetInventory().CreateAttachment("MMG_sheath_tan");
			Cinto.GetInventory().CreateAttachment("MMG_Med_Pouch_tan");
			Mochila = player.GetInventory().CreateInInventory("MMG_carrier_backpack_tan");		
			Bota = player.GetInventory().CreateInInventory("MilitaryBoots_brown");	
			Melee = player.GetInventory().CreateInInventory("FirefighterAxe_green");
			Mochila.GetInventory().CreateAttachment(AssaultchemlightArray.GetRandomElement());
			Walktalk = Mochila.GetInventory().CreateAttachment("PersonalRadio");
			Walktalk.GetInventory().CreateAttachment("Battery9V");
			break;							
			
		case 3:
			//COMBATE MMG MULTICAM
			TAN = true;
			Capacete = player.GetInventory().CreateInInventory("MMG_tactical_helmet_multicam");
			Capacete.GetInventory().CreateAttachment("MMG_headphones_tan");	
			Visor = Capacete.GetInventory().CreateAttachment("mmg_gp_nvg_tan");	
			Visor.GetInventory().CreateAttachment("Battery9V");	
			Lanterna = Capacete.GetInventory().CreateAttachment("UniversalLight");	
			Lanterna.GetInventory().CreateAttachment("Battery9V");
			player.GetInventory().CreateInInventory("MMG_balaclava_multicam");
			player.GetInventory().CreateInInventory("mmg_tactical_gloves_multicam");	
			player.GetInventory().CreateInInventory("mmg_tac_goggles_clear_tan");
			Blusa = player.GetInventory().CreateInInventory("MMG_combatshirt_multicam");
			Colete = player.GetInventory().CreateInInventory("MMG_tt_vest_multicam");		
			Colete.GetInventory().CreateAttachment("MMG_ammo_pouch_multicam");	
			Colete.GetInventory().CreateAttachment("MMG_double_magpouch_multicam");	
			Colete.GetInventory().CreateAttachment("MMG_bottle_multicam");
			Colete.GetInventory().CreateAttachment("M67Grenade");		
			Colete.GetInventory().CreateAttachment("M67Grenade");
			Colete.GetInventory().CreateAttachment("MMG_Med_Pouch_multicam");
			Colete.GetInventory().CreateAttachment("MMG_tactical_pouch_multicam");				
			Calca = player.GetInventory().CreateInInventory("MMG_combatpants_multicam");	
			Cinto = player.GetInventory().CreateInInventory("MMG_falcon_b1_belt_multicam");
			Cinto.GetInventory().CreateAttachment("MMG_tactical_pouch_multicam");	
			Cinto.GetInventory().CreateAttachment("MMG_Holster_multicam");	
			Cinto.GetInventory().CreateAttachment("MMG_bottle_multicam");
			Cinto.GetInventory().CreateAttachment("MMG_carbine_orange");
			Cinto.GetInventory().CreateAttachment("MMG_sheath_multicam");
			Cinto.GetInventory().CreateAttachment("MMG_Med_Pouch_multicam");
			Mochila = player.GetInventory().CreateInInventory("MMG_carrier_backpack_multicam");		
			Bota = player.GetInventory().CreateInInventory("MilitaryBoots_brown");	
			Melee = player.GetInventory().CreateInInventory("FirefighterAxe_green");
			Mochila.GetInventory().CreateAttachment(AssaultchemlightArray.GetRandomElement());
			Walktalk = Mochila.GetInventory().CreateAttachment("PersonalRadio");
			Walktalk.GetInventory().CreateAttachment("Battery9V");
			break;									
		
		case 4:
			//COMBATE MMG ERDL		
			BLACK=true;
			Capacete = player.GetInventory().CreateInInventory("MMG_tactical_helmet_erdl");
			Capacete.GetInventory().CreateAttachment("MMG_headphones_green");	
			Visor = Capacete.GetInventory().CreateAttachment("mmg_gp_nvg_black");	
			Visor.GetInventory().CreateAttachment("Battery9V");	
			Lanterna = Capacete.GetInventory().CreateAttachment("UniversalLight");	
			Lanterna.GetInventory().CreateAttachment("Battery9V");
			player.GetInventory().CreateInInventory("MMG_balaclava_erdl");
			player.GetInventory().CreateInInventory("mmg_tactical_gloves_erdl");	
			player.GetInventory().CreateInInventory("mmg_tac_goggles_clear_black");
			Blusa = player.GetInventory().CreateInInventory("MMG_combatshirt_erdl");
			Colete = player.GetInventory().CreateInInventory("MMG_tt_vest_erdl");		
			Colete.GetInventory().CreateAttachment("MMG_ammo_pouch_erdl");	
			Colete.GetInventory().CreateAttachment("MMG_double_magpouch_erdl");	
			Colete.GetInventory().CreateAttachment("MMG_bottle_erdl");
			Colete.GetInventory().CreateAttachment("M67Grenade");		
			Colete.GetInventory().CreateAttachment("M67Grenade");
			Colete.GetInventory().CreateAttachment("MMG_Med_Pouch_erdl");
			Colete.GetInventory().CreateAttachment("MMG_tactical_pouch_erdl");				
			Calca = player.GetInventory().CreateInInventory("MMG_combatpants_erdl");	
			Cinto = player.GetInventory().CreateInInventory("MMG_falcon_b1_belt_erdl");
			Cinto.GetInventory().CreateAttachment("MMG_tactical_pouch_erdl");	
			Cinto.GetInventory().CreateAttachment("MMG_Holster_erdl");	
			Cinto.GetInventory().CreateAttachment("MMG_bottle_erdl");
			Cinto.GetInventory().CreateAttachment("MMG_carbine_green");
			Cinto.GetInventory().CreateAttachment("MMG_sheath_erdl");
			Cinto.GetInventory().CreateAttachment("MMG_Med_Pouch_erdl");
			Mochila = player.GetInventory().CreateInInventory("MMG_carrier_backpack_erdl");		
			Bota = player.GetInventory().CreateInInventory("MilitaryBoots_brown");	
			Melee = player.GetInventory().CreateInInventory("FirefighterAxe_green");
			Mochila.GetInventory().CreateAttachment(AssaultchemlightArray.GetRandomElement());
			Walktalk = Mochila.GetInventory().CreateAttachment("PersonalRadio");
			Walktalk.GetInventory().CreateAttachment("Battery9V");
			break;								
				
		case 5:
			//COMBATE MMG MULTICAM BLACK
			BLACK=true;			
			Capacete = player.GetInventory().CreateInInventory("MMG_tactical_helmet_multicamblack");
			Capacete.GetInventory().CreateAttachment("MMG_headphones_black");	
			Visor = Capacete.GetInventory().CreateAttachment("mmg_gp_nvg_black");	
			Visor.GetInventory().CreateAttachment("Battery9V");	
			Lanterna = Capacete.GetInventory().CreateAttachment("UniversalLight");	
			Lanterna.GetInventory().CreateAttachment("Battery9V");
			player.GetInventory().CreateInInventory("MMG_balaclava_multicamblack");
			player.GetInventory().CreateInInventory("mmg_tactical_gloves_multicamblack");	
			player.GetInventory().CreateInInventory("mmg_tac_goggles_clear_black");
			Blusa = player.GetInventory().CreateInInventory("MMG_combatshirt_multicamblack");
			Colete = player.GetInventory().CreateInInventory("MMG_tt_vest_multicamblack");		
			Colete.GetInventory().CreateAttachment("MMG_ammo_pouch_multicamblack");	
			Colete.GetInventory().CreateAttachment("MMG_double_magpouch_multicamblack");	
			Colete.GetInventory().CreateAttachment("MMG_bottle_multicamblack");
			Colete.GetInventory().CreateAttachment("M67Grenade");		
			Colete.GetInventory().CreateAttachment("M67Grenade");
			Colete.GetInventory().CreateAttachment("MMG_Med_Pouch_multicamblack");
			Colete.GetInventory().CreateAttachment("MMG_tactical_pouch_multicamblack");				
			Calca = player.GetInventory().CreateInInventory("MMG_combatpants_multicamblack");	
			Cinto = player.GetInventory().CreateInInventory("MMG_falcon_b1_belt_multicamblack");
			Cinto.GetInventory().CreateAttachment("MMG_tactical_pouch_multicamblack");	
			Cinto.GetInventory().CreateAttachment("MMG_Holster_multicamblack");	
			Cinto.GetInventory().CreateAttachment("MMG_bottle_multicamblack");
			Cinto.GetInventory().CreateAttachment("MMG_carbine_green");
			Cinto.GetInventory().CreateAttachment("MMG_sheath_multicamblack");
			Cinto.GetInventory().CreateAttachment("MMG_Med_Pouch_multicamblack");
			Mochila = player.GetInventory().CreateInInventory("MMG_carrier_backpack_multicamblack");		
			Bota = player.GetInventory().CreateInInventory("MilitaryBoots_black");	
			Melee = player.GetInventory().CreateInInventory("FirefighterAxe_black");
			Mochila.GetInventory().CreateAttachment(AssaultchemlightArray.GetRandomElement());
			Walktalk = Mochila.GetInventory().CreateAttachment("PersonalRadio");
			Walktalk.GetInventory().CreateAttachment("Battery9V");
			break;									
		
		case 6:
			//COMBATE MMG DARK WOOD		
			BLACK=true;
			Capacete = player.GetInventory().CreateInInventory("MMG_tactical_helmet_dark_woodland");
			Capacete.GetInventory().CreateAttachment("MMG_headphones_black");	
			Visor = Capacete.GetInventory().CreateAttachment("mmg_gp_nvg_black");	
			Visor.GetInventory().CreateAttachment("Battery9V");	
			Lanterna = Capacete.GetInventory().CreateAttachment("UniversalLight");	
			Lanterna.GetInventory().CreateAttachment("Battery9V");
			player.GetInventory().CreateInInventory("MMG_balaclava_dark_woodland");
			player.GetInventory().CreateInInventory("mmg_tactical_gloves_dark_woodland");	
			player.GetInventory().CreateInInventory("mmg_tac_goggles_clear_black");
			Blusa = player.GetInventory().CreateInInventory("MMG_combatshirt_dark_woodland");
			Colete = player.GetInventory().CreateInInventory("MMG_tt_vest_dark_woodland");		
			Colete.GetInventory().CreateAttachment("MMG_ammo_pouch_dark_woodland");	
			Colete.GetInventory().CreateAttachment("MMG_double_magpouch_dark_woodland");	
			Colete.GetInventory().CreateAttachment("MMG_bottle_dark_woodland");
			Colete.GetInventory().CreateAttachment("M67Grenade");		
			Colete.GetInventory().CreateAttachment("M67Grenade");
			Colete.GetInventory().CreateAttachment("MMG_Med_Pouch_dark_woodland");
			Colete.GetInventory().CreateAttachment("MMG_tactical_pouch_dark_woodland");				
			Calca = player.GetInventory().CreateInInventory("MMG_combatpants_dark_woodland");	
			Cinto = player.GetInventory().CreateInInventory("MMG_falcon_b1_belt_dark_woodland");
			Cinto.GetInventory().CreateAttachment("MMG_tactical_pouch_dark_woodland");	
			Cinto.GetInventory().CreateAttachment("MMG_Holster_dark_woodland");	
			Cinto.GetInventory().CreateAttachment("MMG_bottle_dark_woodland");
			Cinto.GetInventory().CreateAttachment("MMG_carbine_red");
			Cinto.GetInventory().CreateAttachment("MMG_sheath_dark_woodland");
			Cinto.GetInventory().CreateAttachment("MMG_Med_Pouch_dark_woodland");
			Mochila = player.GetInventory().CreateInInventory("MMG_carrier_backpack_dark_woodland");		
			Bota = player.GetInventory().CreateInInventory("MilitaryBoots_black");	
			Melee = player.GetInventory().CreateInInventory("FirefighterAxe_black");
			Mochila.GetInventory().CreateAttachment(AssaultchemlightArray.GetRandomElement());
			Walktalk = Mochila.GetInventory().CreateAttachment("PersonalRadio");
			Walktalk.GetInventory().CreateAttachment("Battery9V");
			break;	
		
		case 7:
			//GHILLIE NATO
			player.GetInventory().CreateInInventory("MassA2_GhillieHoodNato");
			player.GetInventory().CreateInInventory("Bandana_CamoPattern");	
			player.GetInventory().CreateInInventory("TacticalGloves_Green");
			Visor = player.GetInventory().CreateInInventory("NVGHeadstrap");
			NVG = Visor.GetInventory().CreateAttachment("NVGoggles");
			NVG.GetInventory().CreateAttachment("Battery9V");
			Colete = player.GetInventory().CreateInInventory("SmershVest");				
			Blusa = player.GetInventory().CreateInInventory("MassA2_GhillieTopNato");
			Calca = player.GetInventory().CreateInInventory("MassA2_GhilliePantsNato");	
			MochilaColete = Colete.GetInventory().CreateAttachment("SmershBag");
			Mochila = player.GetInventory().CreateAttachment("AssaultBag_Green");		
			Bota = player.GetInventory().CreateInInventory("MilitaryBoots_Black");	
			Melee = player.GetInventory().CreateInInventory("FirefighterAxe_Green");
			MochilaColete.GetInventory().CreateAttachment(AssaultchemlightArray.GetRandomElement());	
			Walktalk = MochilaColete.GetInventory().CreateAttachment("PersonalRadio");
			Walktalk.GetInventory().CreateAttachment("Battery9V");
			break;								
		
		case 8:
			//GHILLIE EAST
			player.GetInventory().CreateInInventory("MassA2_GhillieHoodEast");
			player.GetInventory().CreateInInventory("Bandana_CamoPattern");	
			player.GetInventory().CreateInInventory("TacticalGloves_Green");
			Visor = player.GetInventory().CreateInInventory("NVGHeadstrap");
			NVG = Visor.GetInventory().CreateAttachment("NVGoggles");
			NVG.GetInventory().CreateAttachment("Battery9V");
			Colete = player.GetInventory().CreateInInventory("SmershVest");				
			Blusa = player.GetInventory().CreateInInventory("MassA2_GhillieTopEast");
			Calca = player.GetInventory().CreateInInventory("MassA2_GhilliePantsEast");	
			MochilaColete = Colete.GetInventory().CreateAttachment("SmershBag");	
			Mochila = player.GetInventory().CreateAttachment("AssaultBag_Green");		
			Bota = player.GetInventory().CreateInInventory("MilitaryBoots_Black");
			Melee = player.GetInventory().CreateInInventory("FirefighterAxe_Green");
			MochilaColete.GetInventory().CreateAttachment(AssaultchemlightArray.GetRandomElement());	
			Walktalk = MochilaColete.GetInventory().CreateAttachment("PersonalRadio");
			Walktalk.GetInventory().CreateAttachment("Battery9V");
			break;									
		
		case 9:
			//GHILLIE GENERIC
			player.GetInventory().CreateInInventory("MassA2_GhillieHoodGeneric");
			player.GetInventory().CreateInInventory("Bandana_CamoPattern");	
			player.GetInventory().CreateInInventory("TacticalGloves_Green");	
			Visor = player.GetInventory().CreateInInventory("NVGHeadstrap");
			NVG = Visor.GetInventory().CreateAttachment("NVGoggles");
			NVG.GetInventory().CreateAttachment("Battery9V");
			Colete = player.GetInventory().CreateInInventory("SmershVest");				
			Blusa = player.GetInventory().CreateInInventory("MassA2_GhillieTopGeneric");
			Calca = player.GetInventory().CreateInInventory("MassA2_GhilliePantsGeneric");	
			MochilaColete = Colete.GetInventory().CreateAttachment("SmershBag");	
			Mochila = player.GetInventory().CreateAttachment("AssaultBag_Green");		
			Bota = player.GetInventory().CreateInInventory("MilitaryBoots_Black");	
			Melee = player.GetInventory().CreateInInventory("FirefighterAxe_Black");
			MochilaColete.GetInventory().CreateAttachment(AssaultchemlightArray.GetRandomElement());	
			Walktalk = MochilaColete.GetInventory().CreateAttachment("PersonalRadio");
			Walktalk.GetInventory().CreateAttachment("Battery9V");
			break;				
		
		case 10:
			//GHILLIE OFICIAL				
			player.GetInventory().CreateInInventory("GhillieHood_Woodland");
			player.GetInventory().CreateInInventory("Bandana_CamoPattern");	
			player.GetInventory().CreateInInventory("TacticalGloves_Green");	
			Visor = player.GetInventory().CreateInInventory("NVGHeadstrap");
			NVG = Visor.GetInventory().CreateAttachment("NVGoggles");
			NVG.GetInventory().CreateAttachment("Battery9V");
			Colete = player.GetInventory().CreateInInventory("SmershVest");				
			Blusa = player.GetInventory().CreateInInventory("MMG_combatshirt_green");
			Calca = player.GetInventory().CreateInInventory("MMG_combatpants_olive");	
			Cinto = player.GetInventory().CreateInInventory("GhillieSuit_Woodland");	
			MochilaColete = Colete.GetInventory().CreateAttachment("SmershBag");	
			Mochila = player.GetInventory().CreateAttachment("AssaultBag_Green");		
			Bota = player.GetInventory().CreateInInventory("MilitaryBoots_Black");	
			Melee = player.GetInventory().CreateInInventory("FirefighterAxe_Green");
			MochilaColete.GetInventory().CreateAttachment(AssaultchemlightArray.GetRandomElement());	
			Walktalk = MochilaColete.GetInventory().CreateAttachment("PersonalRadio");
			Walktalk.GetInventory().CreateAttachment("Battery9V");
			break;	

		case 11 :
			//GHILLIE SNOW	
			SNOW = true;
			player.GetInventory().CreateInInventory("MMG_balaclava_alpine");
			player.GetInventory().CreateInInventory("MMG_combatpants_alpine");	
			player.GetInventory().CreateInInventory("MMG_combatshirt_alpine");				
			Colete = player.GetInventory().CreateInInventory("MMG_JPC_Vest_alpine");	
			Colete.GetInventory().CreateAttachment("MMG_ammo_pouch_alpine");
			Colete.GetInventory().CreateAttachment("MMG_Med_Pouch_alpine");
			Colete.GetInventory().CreateAttachment("MMG_Mag_Pouch_alpine");
			Colete.GetInventory().CreateAttachment("MMG_bottle_alpine");
			player.GetInventory().CreateInInventory("GhillieHood_White");
			player.GetInventory().CreateInInventory("MMG_assault_pack_alpine");			
			Capacete = player.GetInventory().CreateInInventory("NVGHeadstrap");	
			Visor = Capacete.GetInventory().CreateAttachment("NVGoggles");
			Visor.GetInventory().CreateAttachment("Battery9V");
			player.GetInventory().CreateInInventory("MilitaryBoots_Bluerock");
			player.GetInventory().CreateInInventory("mmg_tactical_gloves_alpine");
			player.GetInventory().CreateInInventory("GhillieSuit_White");				
			Melee = player.GetInventory().CreateInInventory("FirefighterAxe_Black");		
			break;				
	}		
	
	switch(WeaponS)
	{
		case 0 :		
			//MOSIN 
			ArmaSeg = player.GetInventory().CreateInInventory("Mosin9130");
			ArmaSeg.GetInventory().CreateAttachment("PUScopeOptic");			
			ArmaSeg.GetInventory().CreateAttachment("Mosin_Compensator");
			player.GetInventory().CreateInInventory("ImprovisedSuppressor");
			player.GetInventory().CreateInInventory("Mag_CLIP762x54_5Rnd");
			player.GetInventory().CreateInInventory("Mag_CLIP762x54_5Rnd");
			player.GetInventory().CreateInInventory("Ammo_762x54");
			player.GetInventory().CreateInInventory("Ammo_762x54");				
			break;
	
		case 1 :
			//MOSIN CAMO
			ArmaSeg = player.GetInventory().CreateInInventory("Mosin9130_Camo");
			ArmaSeg.GetInventory().CreateAttachment("PUScopeOptic");			
			ArmaSeg.GetInventory().CreateAttachment("Mosin_Compensator");
			player.GetInventory().CreateInInventory("ImprovisedSuppressor");
			player.GetInventory().CreateInInventory("Mag_CLIP762x54_5Rnd");
			player.GetInventory().CreateInInventory("Mag_CLIP762x54_5Rnd");
			player.GetInventory().CreateInInventory("Ammo_762x54");
			player.GetInventory().CreateInInventory("Ammo_762x54");				
			break;
		
		case 2 :
			//MOSIN VERDE
			ArmaSeg = player.GetInventory().CreateInInventory("Mosin9130_Green");
			ArmaSeg.GetInventory().CreateAttachment("PUScopeOptic");			
			ArmaSeg.GetInventory().CreateAttachment("Mosin_Compensator");
			player.GetInventory().CreateInInventory("ImprovisedSuppressor");
			player.GetInventory().CreateInInventory("Mag_CLIP762x54_5Rnd");
			player.GetInventory().CreateInInventory("Mag_CLIP762x54_5Rnd");
			player.GetInventory().CreateInInventory("Ammo_762x54");
			player.GetInventory().CreateInInventory("Ammo_762x54");				
			break;
		
		case 3 :
			//MOSIN PRETA
			ArmaSeg = player.GetInventory().CreateInInventory("Mosin9130_Black");
			ArmaSeg.GetInventory().CreateAttachment("PUScopeOptic");			
			ArmaSeg.GetInventory().CreateAttachment("Mosin_Compensator");
			player.GetInventory().CreateInInventory("ImprovisedSuppressor");
			player.GetInventory().CreateInInventory("Mag_CLIP762x54_5Rnd");
			player.GetInventory().CreateInInventory("Mag_CLIP762x54_5Rnd");
			player.GetInventory().CreateInInventory("Ammo_762x54");
			player.GetInventory().CreateInInventory("Ammo_762x54");				
			break;
	
		case 4 :
			//SVD
			ArmaSeg = player.GetInventory().CreateInInventory("SVD");						
			Scope = ArmaSeg.GetInventory().CreateAttachment("PSO1Optic");
			Scope.GetInventory().CreateAttachment("Battery9V");				
			ArmaSeg.GetInventory().CreateAttachment("ImprovisedSuppressor");
			ArmaSeg.GetInventory().CreateAttachment("TTC_Universal_Suppressor_BLACK");	
			ArmaSeg.GetInventory().CreateAttachment("Mag_SVD_10Rnd");	
			player.GetInventory().CreateInInventory("Mag_SVD_10Rnd");
			player.GetInventory().CreateInInventory("Mag_SVD_10Rnd");	
			player.GetInventory().CreateInInventory("Mag_SVD_10Rnd");
			player.GetInventory().CreateInInventory("Mag_SVD_10Rnd");		
			break;				
	
		case 5 :
			//SKS
			ArmaSeg = player.GetInventory().CreateInInventory("SKS");						
			ArmaSeg.GetInventory().CreateAttachment("PUScopeOptic");			
			ArmaSeg.GetInventory().CreateAttachment("SKS_Bayonet");
			player.GetInventory().CreateInInventory("ImprovisedSuppressor");
			player.GetInventory().CreateInInventory("Mag_CLIP762x39_10Rnd");
			player.GetInventory().CreateInInventory("Mag_CLIP762x39_10Rnd");
			player.GetInventory().CreateInInventory("Mag_CLIP762x39_10Rnd");
			player.GetInventory().CreateInInventory("Ammo_762x39");
			player.GetInventory().CreateInInventory("Ammo_762x39");				
			break;				
		
		case 6 :
			//SKS VERDE
			ArmaSeg = player.GetInventory().CreateInInventory("SKS_Green");						
			ArmaSeg.GetInventory().CreateAttachment("PUScopeOptic");			
			ArmaSeg.GetInventory().CreateAttachment("SKS_Bayonet");
			player.GetInventory().CreateInInventory("ImprovisedSuppressor");
			player.GetInventory().CreateInInventory("Mag_CLIP762x39_10Rnd");
			player.GetInventory().CreateInInventory("Mag_CLIP762x39_10Rnd");
			player.GetInventory().CreateInInventory("Ammo_762x39");
			player.GetInventory().CreateInInventory("Ammo_762x39");				
			break;				
		
		case 7 :
			//SKS PRETA
			ArmaSeg = player.GetInventory().CreateInInventory("SKS_Black");						
			ArmaSeg.GetInventory().CreateAttachment("PUScopeOptic");			
			ArmaSeg.GetInventory().CreateAttachment("SKS_Bayonet");
			player.GetInventory().CreateInInventory("ImprovisedSuppressor");
			player.GetInventory().CreateInInventory("Mag_CLIP762x39_10Rnd");
			player.GetInventory().CreateInInventory("Mag_CLIP762x39_10Rnd");
			player.GetInventory().CreateInInventory("Ammo_762x39");
			player.GetInventory().CreateInInventory("Ammo_762x39");				
			break;				
		
		case 8 :
			//VSS
			ArmaSeg = player.GetInventory().CreateInInventory("VSS");	
			Scope = ArmaSeg.GetInventory().CreateAttachment("PSO1Optic");
			Scope.GetInventory().CreateAttachment("Battery9V");
			ArmaSeg.GetInventory().CreateAttachment("TTC_Universal_Suppressor_BLACK");	
			ArmaSeg.GetInventory().CreateAttachment("Mag_VSS_10Rnd");
			player.GetInventory().CreateInInventory("Mag_VSS_10Rnd");
			player.GetInventory().CreateInInventory("Mag_VSS_10Rnd");
			player.GetInventory().CreateInInventory("Mag_VSS_10Rnd");
			player.GetInventory().CreateInInventory("Mag_VSS_10Rnd");			
			break;				
		
		case 9 :
			//WINCHESTER 			
			ArmaSeg = player.GetInventory().CreateInInventory("Winchester70");	
			ArmaSeg.GetInventory().CreateAttachment("HuntingOptic");
			ArmaSeg.GetInventory().CreateAttachment("ImprovisedSuppressor");			
			player.GetInventory().CreateInInventory("Ammo_308Win");
			player.GetInventory().CreateInInventory("Ammo_308Win");
			player.GetInventory().CreateInInventory("Ammo_308Win");			
			break;				
		
		case 10 :
			//WINCHESTER VERDE				
			ArmaSeg = player.GetInventory().CreateInInventory("Winchester70_Green");	
			ArmaSeg.GetInventory().CreateAttachment("HuntingOptic");
			ArmaSeg.GetInventory().CreateAttachment("ImprovisedSuppressor");			
			player.GetInventory().CreateInInventory("Ammo_308Win");
			player.GetInventory().CreateInInventory("Ammo_308Win");
			player.GetInventory().CreateInInventory("Ammo_308Win");			
			break;				
		
		case 11 :
			//WINCHESTER PRETA				
			ArmaSeg = player.GetInventory().CreateInInventory("Winchester70_Black");	
			ArmaSeg.GetInventory().CreateAttachment("HuntingOptic");
			ArmaSeg.GetInventory().CreateAttachment("ImprovisedSuppressor");			
			player.GetInventory().CreateInInventory("Ammo_308Win");
			player.GetInventory().CreateInInventory("Ammo_308Win");
			player.GetInventory().CreateInInventory("Ammo_308Win");			
			break;				
		
		case 12 :
			//PIONEER 		
			ArmaSeg = player.GetInventory().CreateInInventory("Scout");	
			ArmaSeg.GetInventory().CreateAttachment("ACOGOptic");
			ArmaSeg.GetInventory().CreateAttachment("TTC_Universal_Suppressor_BLACK");
			ArmaSeg.GetInventory().CreateAttachment("Mag_Scout_5rnd");
			Mochila.GetInventory().CreateInInventory("Mag_Scout_5rnd");
			Mochila.GetInventory().CreateInInventory("Mag_Scout_5rnd");				
			player.GetInventory().CreateInInventory("Ammo_308Win");
			player.GetInventory().CreateInInventory("Ammo_308Win");				
			break;				
			
		case 13 :
			//B95
			ArmaSeg = player.GetInventory().CreateInInventory("B95");			
			Scope = ArmaSeg.GetInventory().CreateAttachment("HuntingOptic");			
			player.GetInventory().CreateInInventory("Ammo_308Win");
			player.GetInventory().CreateInInventory("Ammo_308Win");				
			break;			
		
		case 14 :
			//VSSK
			ArmaSeg = player.GetInventory().CreateInInventory("SNAFUVSSK");	
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_VSSKbipod");			
			Scope = ArmaSeg.GetInventory().CreateAttachment("SNAFU_HHuntingOptic");	
			ArmaSeg.GetInventory().CreateAttachment("SNAFUVSSK_5rdMag");
			player.GetInventory().CreateInInventory("SNAFUVSSK_5rdMag");
			player.GetInventory().CreateInInventory("SNAFUVSSK_5rdMag");
			player.GetInventory().CreateInInventory("SNAFUVSSK_5rdMag");	
			player.GetInventory().CreateInInventory("SNAFUVSSK_5rdMag");
			player.GetInventory().CreateInInventory("SNAFUVSSK_5rdMag");
			break;			
		
		case 15 :
			//ALLIGATOR
			ArmaSeg = player.GetInventory().CreateInInventory("SNAFUAlligator");				
			Scope = ArmaSeg.GetInventory().CreateAttachment("SNAFU_HHuntingOptic");	
			ArmaSeg.GetInventory().CreateAttachment("SNAFUAlligator_5rdMag");
			player.GetInventory().CreateInInventory("SNAFUAlligator_5rdMag");
			player.GetInventory().CreateInInventory("SNAFUAlligator_5rdMag");
			player.GetInventory().CreateInInventory("SNAFUAlligator_5rdMag");	
			player.GetInventory().CreateInInventory("SNAFUAlligator_5rdMag");
			player.GetInventory().CreateInInventory("SNAFUAlligator_5rdMag");
			break;			
		
		case 16 :
			//DVL-10
			ArmaSeg = player.GetInventory().CreateInInventory("SNAFUDVL10M2");
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_AtlasBipod");
			ArmaSeg.GetInventory().CreateAttachment("SNAFUKivaari_338_Supp");			
			Scope = ArmaSeg.GetInventory().CreateAttachment("SNAFU_HHuntingOptic");
			ArmaSeg.GetInventory().CreateAttachment("SNAFUDVL10M2_5rdMag");
			player.GetInventory().CreateInInventory("SNAFUDVL10M2_5rdMag");
			player.GetInventory().CreateInInventory("SNAFUDVL10M2_5rdMag");
			player.GetInventory().CreateInInventory("SNAFUDVL10M2_5rdMag");	
			player.GetInventory().CreateInInventory("SNAFUDVL10M2_5rdMag");
			player.GetInventory().CreateInInventory("SNAFUDVL10M2_5rdMag");
			break;			
		
		case 17 :
			//M1A
			ArmaSeg = player.GetInventory().CreateInInventory("SNAFUM1A_Black");
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_Bipod");
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_Standardized_Suppressor_Black");			
			Scope = ArmaSeg.GetInventory().CreateAttachment("SNAFU_HHuntingOptic");	
			ArmaSeg.GetInventory().CreateAttachment("SNAFUM1A_20rdMag");
			player.GetInventory().CreateInInventory("SNAFUM1A_20rdMag");
			player.GetInventory().CreateInInventory("SNAFUM1A_20rdMag");
			player.GetInventory().CreateInInventory("SNAFUM1A_20rdMag");	
			player.GetInventory().CreateInInventory("SNAFUM1A_20rdMag");
			player.GetInventory().CreateInInventory("SNAFUM1A_20rdMag");
			break;			
		
		case 18 :
			//MARLIN 1895
			ArmaSeg = player.GetInventory().CreateInInventory("SNAFUMarlin1895");
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_SPMOD");				
			Scope = ArmaSeg.GetInventory().CreateAttachment("SNAFU_Kahles");
			Scope.GetInventory().CreateAttachment("Battery9V");		
			player.GetInventory().CreateInInventory("SNAFU_Ammo_45_70mm");
			player.GetInventory().CreateInInventory("SNAFU_Ammo_45_70mm");	
			player.GetInventory().CreateInInventory("SNAFU_Ammo_45_70mm");
			player.GetInventory().CreateInInventory("SNAFU_Ammo_45_70mm");
			break;			
		
		case 19 :
			//SRS A2
			ArmaSeg = player.GetInventory().CreateInInventory("SNAFUSRSA2");
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_AtlasBipod");				
			Scope = ArmaSeg.GetInventory().CreateAttachment("SNAFU_HHuntingOptic");
			ArmaSeg.GetInventory().CreateAttachment("SNAFUSRSA2_10rdMag");
			player.GetInventory().CreateInInventory("SNAFUSRSA2_10rdMag");
			player.GetInventory().CreateInInventory("SNAFUSRSA2_10rdMag");	
			player.GetInventory().CreateInInventory("SNAFUSRSA2_10rdMag");
			player.GetInventory().CreateInInventory("SNAFUSRSA2_10rdMag");
			player.GetInventory().CreateInInventory("SNAFUSRSA2_10rdMag");
			break;			
		
		case 20 :
			//ZASTAVA M48
			ArmaSeg = player.GetInventory().CreateInInventory("SNAFU_M48");
			ArmaSeg.GetInventory().CreateAttachment("TTC_Universal_Suppressor_BLACK");				
			Scope = ArmaSeg.GetInventory().CreateAttachment("SNAFU_MHuntingOptic");							
			player.GetInventory().CreateInInventory("Ammo_308Win");	
			player.GetInventory().CreateInInventory("Ammo_308Win");
			player.GetInventory().CreateInInventory("Ammo_308Win");
			player.GetInventory().CreateInInventory("Ammo_308Win");
			break;			
		
		case 21 :
			//M110
			ArmaSeg = player.GetInventory().CreateInInventory("GCGN_M110_Black");
			ArmaSeg.GetInventory().CreateAttachment("SNAFUAR15_SPR_SIL");
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_ModBipod");	
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_AFG_02_OD");		
			Scope = ArmaSeg.GetInventory().CreateAttachment("SNAFU_Kahles");
			Scope.GetInventory().CreateAttachment("Battery9V");	
			ArmaSeg.GetInventory().CreateAttachment("GCGN_M110_Mag");
			player.GetInventory().CreateInInventory("GCGN_M110_Mag");	
			player.GetInventory().CreateInInventory("GCGN_M110_Mag");
			player.GetInventory().CreateInInventory("GCGN_M110_Mag");
			player.GetInventory().CreateInInventory("GCGN_M110_Mag");
			break;			
		
		case 22 :
			//M200
			ArmaSeg = player.GetInventory().CreateInInventory("GCGN_M200");
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_M200B_BK");
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_M200S_BK");	
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_50bmg_Suppressor_B");		
			Scope = ArmaSeg.GetInventory().CreateAttachment("SNAFU_HuntingOptic");
			ArmaSeg.GetInventory().CreateAttachment("GCGN_M200_Mag");
			player.GetInventory().CreateInInventory("GCGN_M200_Mag");	
			player.GetInventory().CreateInInventory("GCGN_M200_Mag");
			player.GetInventory().CreateInInventory("GCGN_M200_Mag");
			player.GetInventory().CreateInInventory("GCGN_M200_Mag");
			player.GetInventory().CreateInInventory("GCGN_M200_Mag");
			break;			
		
		case 23 :
			//M200
			ArmaSeg = player.GetInventory().CreateInInventory("GCGN_M200_Tan");
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_M200S_Tan");
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_M200B_BK");	
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_50bmg_Suppressor_B");		
			Scope = ArmaSeg.GetInventory().CreateAttachment("SNAFU_HuntingOptic");
			ArmaSeg.GetInventory().CreateAttachment("GCGN_M200_Mag");
			player.GetInventory().CreateInInventory("GCGN_M200_Mag");	
			player.GetInventory().CreateInInventory("GCGN_M200_Mag");
			player.GetInventory().CreateInInventory("GCGN_M200_Mag");
			player.GetInventory().CreateInInventory("GCGN_M200_Mag");
			player.GetInventory().CreateInInventory("GCGN_M200_Mag");
			break;			
		
		case 24 :
			//M200
			ArmaSeg = player.GetInventory().CreateInInventory("SNAFU_M200Green");
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_M200S_Green");
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_M200B_BK");	
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_50bmg_Suppressor_W");		
			Scope = ArmaSeg.GetInventory().CreateAttachment("SNAFU_HuntingOptic");	
			ArmaSeg.GetInventory().CreateAttachment("GCGN_M200_Mag");
			player.GetInventory().CreateInInventory("GCGN_M200_Mag");	
			player.GetInventory().CreateInInventory("GCGN_M200_Mag");
			player.GetInventory().CreateInInventory("GCGN_M200_Mag");
			player.GetInventory().CreateInInventory("GCGN_M200_Mag");
			player.GetInventory().CreateInInventory("GCGN_M200_Mag");
			break;			
		
		case 25 :
			//M200
			ArmaSeg = player.GetInventory().CreateInInventory("SNAFU_M200SNOW");
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_M200S_Snow");
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_M200B_BK");	
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_50bmg_Suppressor_U");		
			Scope = ArmaSeg.GetInventory().CreateAttachment("SNAFU_HuntingOptic");	
			ArmaSeg.GetInventory().CreateAttachment("GCGN_M200_Mag");
			player.GetInventory().CreateInInventory("GCGN_M200_Mag");	
			player.GetInventory().CreateInInventory("GCGN_M200_Mag");
			player.GetInventory().CreateInInventory("GCGN_M200_Mag");
			player.GetInventory().CreateInInventory("GCGN_M200_Mag");
			player.GetInventory().CreateInInventory("GCGN_M200_Mag");
			break;			
		
		case 26 :
			//M700
			ArmaSeg = player.GetInventory().CreateInInventory("GCGN_M700");			
			ArmaSeg.GetInventory().CreateAttachment("TTC_Universal_Suppressor_BLACK");		
			Scope = ArmaSeg.GetInventory().CreateAttachment("SNAFU_HuntingOptic");
			ArmaSeg.GetInventory().CreateAttachment("GCGN_M700_Mag");
			player.GetInventory().CreateInInventory("GCGN_M700_Mag");	
			player.GetInventory().CreateInInventory("GCGN_M700_Mag");
			player.GetInventory().CreateInInventory("GCGN_M700_Mag");
			player.GetInventory().CreateInInventory("GCGN_M700_Mag");
			player.GetInventory().CreateInInventory("GCGN_M700_Mag");
			break;			
		
		case 27 :	
			//AWM
			ArmaSeg = player.GetInventory().CreateInInventory("SNAFU_AWM_GUN");			
			ArmaSeg.GetInventory().CreateAttachment("SNAFUKivaari_338_Supp");		
			Scope = ArmaSeg.GetInventory().CreateAttachment("SNAFU_HHuntingOptic");	
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_AWM_Mag");
			player.GetInventory().CreateInInventory("SNAFU_AWM_Mag");	
			player.GetInventory().CreateInInventory("SNAFU_AWM_Mag");
			player.GetInventory().CreateInInventory("SNAFU_AWM_Mag");
			player.GetInventory().CreateInInventory("SNAFU_AWM_Mag");
			player.GetInventory().CreateInInventory("SNAFU_AWM_Mag");
			break;			
		
		case 28 :
			//AS50
			ArmaSeg = player.GetInventory().CreateInInventory("SNAFU_AS50_GUN");			
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_AtlasBipod");	
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_50bmg_Suppressor_B");
			Scope = ArmaSeg.GetInventory().CreateAttachment("SNAFU_HHuntingOptic");
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_AS50_Mag");
			player.GetInventory().CreateInInventory("SNAFU_AS50_Mag");	
			player.GetInventory().CreateInInventory("SNAFU_AS50_Mag");
			player.GetInventory().CreateInInventory("SNAFU_AS50_Mag");
			player.GetInventory().CreateInInventory("SNAFU_AS50_Mag");
			player.GetInventory().CreateInInventory("SNAFU_AS50_Mag");
			break;			
		
		case 29 :
			//AX50
			ArmaSeg = player.GetInventory().CreateInInventory("SNAFUAX50_GUN");			
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_AtlasBipod");	
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_50bmg_Suppressor_W");
			Scope = ArmaSeg.GetInventory().CreateAttachment("SNAFU_HHuntingOptic");	
			ArmaSeg.GetInventory().CreateAttachment("SNAFUAX50_Mag");
			player.GetInventory().CreateInInventory("SNAFUAX50_Mag");	
			player.GetInventory().CreateInInventory("SNAFUAX50_Mag");
			player.GetInventory().CreateInInventory("SNAFUAX50_Mag");
			player.GetInventory().CreateInInventory("SNAFUAX50_Mag");
			player.GetInventory().CreateInInventory("SNAFUAX50_Mag");
			break;			
		
		case 30 :
			//M24
			ArmaSeg = player.GetInventory().CreateInInventory("SNAFUM24_GUN");			
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_AtlasBipod");	
			ArmaSeg.GetInventory().CreateAttachment("SNAFUKivaari_338_Supp");
			Scope = ArmaSeg.GetInventory().CreateAttachment("SNAFU_HHuntingOptic");	
			ArmaSeg.GetInventory().CreateAttachment("SNAFUM24_Mag");
			player.GetInventory().CreateInInventory("SNAFUM24_Mag");	
			player.GetInventory().CreateInInventory("SNAFUM24_Mag");
			player.GetInventory().CreateInInventory("SNAFUM24_Mag");
			player.GetInventory().CreateInInventory("SNAFUM24_Mag");
			player.GetInventory().CreateInInventory("SNAFUM24_Mag");
			break;			
		
		case 31 :
			//M98B
			ArmaSeg = player.GetInventory().CreateInInventory("SNAFUM98B_Atac_GUN");			
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_AtlasBipod");	
			ArmaSeg.GetInventory().CreateAttachment("SNAFUKivaari_338_Supp");
			Scope = ArmaSeg.GetInventory().CreateAttachment("SNAFU_HHuntingOptic");
			ArmaSeg.GetInventory().CreateAttachment("SNAFUM98B_Mag");
			player.GetInventory().CreateInInventory("SNAFUM98B_Mag");	
			player.GetInventory().CreateInInventory("SNAFUM98B_Mag");
			player.GetInventory().CreateInInventory("SNAFUM98B_Mag");
			player.GetInventory().CreateInInventory("SNAFUM98B_Mag");
			player.GetInventory().CreateInInventory("SNAFUM98B_Mag");
			break;		
			
		case 32 :
			//M82
			ArmaSeg = player.GetInventory().CreateInInventory("GCGN_M82_Barret");				
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_50bmg_Suppressor_B");
			Scope = ArmaSeg.GetInventory().CreateAttachment("SNAFU_HHuntingOptic");	
			ArmaSeg.GetInventory().CreateAttachment("GCGN_M82_Mag");
			player.GetInventory().CreateInInventory("GCGN_M82_Mag");	
			player.GetInventory().CreateInInventory("GCGN_M82_Mag");
			player.GetInventory().CreateInInventory("GCGN_M82_Mag");
			player.GetInventory().CreateInInventory("GCGN_M82_Mag");
			player.GetInventory().CreateInInventory("GCGN_M82_Mag");
			break;	
			
		case 33 :
			//Kivaari Black
			ArmaSeg = player.GetInventory().CreateInInventory("SNAFUKivaari_Black_GUN");				
			ArmaSeg.GetInventory().CreateAttachment("SNAFUKivaari_338_Supp");
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_AtlasBipod");
			Scope = ArmaSeg.GetInventory().CreateAttachment("SNAFU_HuntingOptic");	
			ArmaSeg.GetInventory().CreateAttachment("SNAFUKivaari_25rdMag");
			player.GetInventory().CreateInInventory("SNAFUKivaari_25rdMag");	
			player.GetInventory().CreateInInventory("SNAFUKivaari_25rdMag");
			player.GetInventory().CreateInInventory("SNAFUKivaari_25rdMag");
			player.GetInventory().CreateInInventory("SNAFUKivaari_25rdMag");
			player.GetInventory().CreateInInventory("SNAFUKivaari_25rdMag");
			break;	
			
		case 34 :
			//Kivaari Tan
			ArmaSeg = player.GetInventory().CreateInInventory("SNAFUKivaari_Tan_GUN");				
			ArmaSeg.GetInventory().CreateAttachment("SNAFUKivaari_338_Supp");
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_AtlasBipod");
			Scope = ArmaSeg.GetInventory().CreateAttachment("SNAFU_HuntingOptic");	
			ArmaSeg.GetInventory().CreateAttachment("SNAFUKivaari_25rdMag");
			player.GetInventory().CreateInInventory("SNAFUKivaari_25rdMag");	
			player.GetInventory().CreateInInventory("SNAFUKivaari_25rdMag");
			player.GetInventory().CreateInInventory("SNAFUKivaari_25rdMag");
			player.GetInventory().CreateInInventory("SNAFUKivaari_25rdMag");
			player.GetInventory().CreateInInventory("SNAFUKivaari_25rdMag");
			break;	
			
		case 35 :
			//Kivaari Grey
			ArmaSeg = player.GetInventory().CreateInInventory("SNAFUKivaari_Grey_GUN");				
			ArmaSeg.GetInventory().CreateAttachment("SNAFUKivaari_338_Supp");
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_AtlasBipod");
			Scope = ArmaSeg.GetInventory().CreateAttachment("SNAFU_HuntingOptic");	
			ArmaSeg.GetInventory().CreateAttachment("SNAFUKivaari_25rdMag");
			player.GetInventory().CreateInInventory("SNAFUKivaari_25rdMag");	
			player.GetInventory().CreateInInventory("SNAFUKivaari_25rdMag");
			player.GetInventory().CreateInInventory("SNAFUKivaari_25rdMag");
			player.GetInventory().CreateInInventory("SNAFUKivaari_25rdMag");
			player.GetInventory().CreateInInventory("SNAFUKivaari_25rdMag");
			break;	
			
		case 36 :
			//Kivaari Snow
			ArmaSeg = player.GetInventory().CreateInInventory("SNAFUKivaari_Snow_GUN");				
			ArmaSeg.GetInventory().CreateAttachment("SNAFUKivaari_338_Supp");
			ArmaSeg.GetInventory().CreateAttachment("SNAFU_AtlasBipod");
			Scope = ArmaSeg.GetInventory().CreateAttachment("SNAFU_HuntingOptic");	
			ArmaSeg.GetInventory().CreateAttachment("SNAFUKivaari_25rdMag");
			player.GetInventory().CreateInInventory("SNAFUKivaari_25rdMag");	
			player.GetInventory().CreateInInventory("SNAFUKivaari_25rdMag");
			player.GetInventory().CreateInInventory("SNAFUKivaari_25rdMag");
			player.GetInventory().CreateInInventory("SNAFUKivaari_25rdMag");
			player.GetInventory().CreateInInventory("SNAFUKivaari_25rdMag");
			break;	
	}	
	
	if(BLACK)
		ArmaSeg.GetInventory().CreateAttachment("GhillieAtt_Black");	
	else if (TAN)
		ArmaSeg.GetInventory().CreateAttachment("GhillieAtt_Brown");	
	else if (SNOW)
		ArmaSeg.GetInventory().CreateAttachment("GhillieAtt_White");	
	else
		ArmaSeg.GetInventory().CreateAttachment("GhillieAtt_Woodland");	
	
	switch(WeaponP)
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
			player.GetInventory().CreateInInventory("SNAFU_ScarH_100RND_Mag_Black");
			break;			
		
		case 22 :
			//SCAR-H
			Arma = player.GetHumanInventory().CreateInHands("Snafu_ScarH_Tan_GUN");				
			Arma.GetInventory().CreateAttachment("SNAFUScar_AFG_BK");	
			Arma.GetInventory().CreateAttachment("SNAFUGevar_Suppressor_Green");
			Arma.GetInventory().CreateAttachment("SNAFU_ModBipod");
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_Tango6T_Wood");
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("SNAFU_ScarH_100RND_Mag_Tan");		
			player.GetInventory().CreateInInventory("SNAFU_ScarH_100RND_Mag_Tan");
			player.GetInventory().CreateInInventory("SNAFU_ScarH_100RND_Mag_Tan");	
			player.GetInventory().CreateInInventory("SNAFU_ScarH_100RND_Mag_Tan");			
			break;
		
		case 23 :
			//SCAR-H
			Arma = player.GetHumanInventory().CreateInHands("Snafu_ScarH_DKMC_GUN");				
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
			player.GetInventory().CreateInInventory("SNAFU_ScarH_100RND_Mag_Black");			
			break;
		
		case 24 :
			//SCAR-H Snow
			Arma = player.GetHumanInventory().CreateInHands("Snafu_ScarH_Snow_GUN");				
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
			player.GetInventory().CreateInInventory("SNAFU_ScarH_100RND_Mag_Black");
			break;
		
		case 25 :
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
			
		case 26 :
			//SG550
			Arma = player.GetHumanInventory().CreateInHands("SG550_Gun");				
			Arma.GetInventory().CreateAttachment("SNAFU_LStandardized_Suppressor_Green");			
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_Trijicon_Docter");
			Scope.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("SG550_Mag");	
			player.GetInventory().CreateInInventory("SG550_Mag");
			player.GetInventory().CreateInInventory("SG550_Mag");	
			player.GetInventory().CreateInInventory("SG550_Mag");
			player.GetInventory().CreateInInventory("SG550_Mag");
			break;
			
		case 27 :
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
			player.GetInventory().CreateInInventory("SG550_Mag");
			break;
			
		case 28 :
			//REMIGTON ACR
			Arma = player.GetHumanInventory().CreateInHands("ACR_Gun");				
			Arma.GetInventory().CreateAttachment("SNAFU_Standardized_Suppressor_Green");	
			Arma.GetInventory().CreateAttachment("SNAFU_FGKAC_Grip");
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_Trijicon_Docter");
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("SNAFU_BMAG556_Tan");
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Tan");
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Tan");	
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Tan");
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Tan");
			break;
			
		case 29 :
			//M249
			Arma = player.GetHumanInventory().CreateInHands("GCGN_M249");				
			Arma.GetInventory().CreateAttachment("SNAFU_M249HG");	
			Arma.GetInventory().CreateAttachment("SNAFU_M249Grip");
			Arma.GetInventory().CreateAttachment("SNAFU_M249Bipod");
			Arma.GetInventory().CreateAttachment("SNAFU_M249Stock");
			Arma.GetInventory().CreateAttachment("SNAFU_FGKAC_Grip");			
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_Kobra");
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("SNAFU_PEQ1_Laser");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("GCGN_M249_Mag");
			player.GetInventory().CreateInInventory("GCGN_M249_Mag");
			player.GetInventory().CreateInInventory("GCGN_M249_Mag");	
			player.GetInventory().CreateInInventory("GCGN_M249_Mag");			
			break;
			
		case 30 :
			//AA12			
			Arma = player.GetHumanInventory().CreateInHands("AA12_Gun");				
			Arma.GetInventory().CreateAttachment("SNAFU_Shotgunchoke_Yellow");	
			Arma.GetInventory().CreateAttachment("SNAFU_FGKAC_Grip");			
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_Trijicon_Docter");
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("AA12_Mag");
			player.GetInventory().CreateInInventory("AA12_Mag");
			player.GetInventory().CreateInInventory("AA12_Mag");	
			player.GetInventory().CreateInInventory("AA12_Mag");
			player.GetInventory().CreateInInventory("AA12_Mag");
			break;
			
		case 31 :
			//HK416
			Arma = player.GetHumanInventory().CreateInHands("HK416_Gun");				
			Arma.GetInventory().CreateAttachment("SNAFU_LStandardized_Suppressor_Black");	
			Arma.GetInventory().CreateAttachment("SNAFU_FGKAC_Grip");			
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_EOTech_EXPS3");
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("GCGN_HK416_Mag");
			player.GetInventory().CreateInInventory("GCGN_HK416_Mag");
			player.GetInventory().CreateInInventory("GCGN_HK416_Mag");	
			player.GetInventory().CreateInInventory("GCGN_HK416_Mag");
			player.GetInventory().CreateInInventory("GCGN_HK416_Mag");
			break;
			
		case 32 :
			//HK417
			Arma = player.GetHumanInventory().CreateInHands("SNHK417_Gun");				
			Arma.GetInventory().CreateAttachment("SNAFU_LStandardized_Suppressor_Black");	
			Arma.GetInventory().CreateAttachment("SNAFU_FGKAC_Grip");			
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_EOTech_EXPS3");
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("SNHK417_Mag");
			player.GetInventory().CreateInInventory("SNHK417_Mag");
			player.GetInventory().CreateInInventory("SNHK417_Mag");	
			player.GetInventory().CreateInInventory("SNHK417_Mag");
			player.GetInventory().CreateInInventory("SNHK417_Mag");
			break;
			
		case 33 :
			//IA2
			Arma = player.GetHumanInventory().CreateInHands("IA2_Gun");				
			Arma.GetInventory().CreateAttachment("SNAFU_LStandardized_Suppressor_Black");	
			Arma.GetInventory().CreateAttachment("SNAFU_FGKAC_Grip");			
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_EOTech_EXPS3");
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("SNAFU_BMAG556_Black");
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");	
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");
			break;
			
		case 34 :
			//MK18
			Arma = player.GetHumanInventory().CreateInHands("MK18_Gun");				
			Arma.GetInventory().CreateAttachment("SNAFU_LStandardized_Suppressor_Black");	
			Arma.GetInventory().CreateAttachment("SNAFU_FGKAC_Grip");			
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_Walther");
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("SNAFU_BMAG556_Black");
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");	
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");
			break;
			
		case 35 :
			//SPAS12
			Arma = player.GetHumanInventory().CreateInHands("Spas12_Gun");				
			Arma.GetInventory().CreateAttachment("SNAFU_Shotgunchoke_Tur");				
			player.GetInventory().CreateInInventory("Ammo_12gaPellets");
			player.GetInventory().CreateInInventory("Ammo_12gaPellets");	
			player.GetInventory().CreateInInventory("Ammo_12gaPellets");
			player.GetInventory().CreateInInventory("Ammo_12gaPellets");
			break;
			
		case 36 :
			//VR80
			Arma = player.GetHumanInventory().CreateInHands("VR80_Gun");				
			Arma.GetInventory().CreateAttachment("SNAFU_Shotgunchoke_Tur");						
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_Walther");
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("VR80_Magazine_10rd");
			player.GetInventory().CreateInInventory("VR80_Magazine_10rd");
			player.GetInventory().CreateInInventory("VR80_Magazine_10rd");	
			player.GetInventory().CreateInInventory("VR80_Magazine_10rd");
			player.GetInventory().CreateInInventory("VR80_Magazine_10rd");
			player.GetInventory().CreateInInventory("VR80_Magazine_10rd");
			break;
			
		case 37 :
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
			player.GetInventory().CreateInInventory("SNAFU_RPK16_Black_Mag");
			player.GetInventory().CreateInInventory("SNAFU_RPK16_Black_Mag");			
			break;
			
		case 38 :
			//RPK-16
			Arma = player.GetHumanInventory().CreateInHands("SNAFU_RPK16_Tan");				
			Arma.GetInventory().CreateAttachment("SNAFUGevar_Suppressor_Tan");				
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_Walther");
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("SNAFU_RPK16_Tan_Mag");
			player.GetInventory().CreateInInventory("SNAFU_RPK16_Tan_Mag");
			player.GetInventory().CreateInInventory("SNAFU_RPK16_Tan_Mag");	
			player.GetInventory().CreateInInventory("SNAFU_RPK16_Tan_Mag");
			player.GetInventory().CreateInInventory("SNAFU_RPK16_Tan_Mag");			
			break;
			
		case 39 :
			//RPK-16
			Arma = player.GetHumanInventory().CreateInHands("SNAFU_RPK16_Green");				
			Arma.GetInventory().CreateAttachment("SNAFU_LStandardized_Suppressor_Green");				
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_Walther");
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("SNAFU_RPK16_Green_Mag");
			player.GetInventory().CreateInInventory("SNAFU_RPK16_Green_Mag");
			player.GetInventory().CreateInInventory("SNAFU_RPK16_Green_Mag");	
			player.GetInventory().CreateInInventory("SNAFU_RPK16_Green_Mag");
			player.GetInventory().CreateInInventory("SNAFU_RPK16_Green_Mag");		
			break;
			
		case 40 :
			//AEK545
			Arma = player.GetHumanInventory().CreateInHands("SNAFU_AEK545_Gun");				
			Arma.GetInventory().CreateAttachment("SNAFU_Standardized_Suppressor_Black");				
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_Walther");
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("SNAFU_RPK16_Black_Mag");
			player.GetInventory().CreateInInventory("SNAFU_RPK16_Black_Mag");
			player.GetInventory().CreateInInventory("SNAFU_RPK16_Black_Mag");	
			player.GetInventory().CreateInInventory("SNAFU_RPK16_Black_Mag");
			player.GetInventory().CreateInInventory("SNAFU_RPK16_Black_Mag");			
			break;
			
		case 41 :
			//CZ805	
			Arma = player.GetHumanInventory().CreateInHands("SNAFU_CZ805_Gun");				
			Arma.GetInventory().CreateAttachment("SNAFUGevar_Suppressor_Tan");
			Arma.GetInventory().CreateAttachment("SNAFU_FGKAC_Grip");			
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_Trijicon_Docter");
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("GCGN_HK416_Mag");
			player.GetInventory().CreateInInventory("GCGN_HK416_Mag");
			player.GetInventory().CreateInInventory("GCGN_HK416_Mag");	
			player.GetInventory().CreateInInventory("GCGN_HK416_Mag");
			player.GetInventory().CreateInInventory("GCGN_HK416_Mag");			
			break;	
			
		case 42 :
			//KAC PDW
			Arma = player.GetHumanInventory().CreateInHands("SNAFU_KAC_Gun");				
			Arma.GetInventory().CreateAttachment("SNAFU_Standardized_Suppressor_Black");
			Arma.GetInventory().CreateAttachment("SNAFU_FGKAC_Grip");			
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_Trijicon_Docter");
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("SNAFU_KAC_Mag");
			player.GetInventory().CreateInInventory("SNAFU_KAC_Mag");
			player.GetInventory().CreateInInventory("SNAFU_KAC_Mag");	
			player.GetInventory().CreateInInventory("SNAFU_KAC_Mag");
			player.GetInventory().CreateInInventory("SNAFU_KAC_Mag");			
			break;
			
		case 43 :
			//RPD
			Arma = player.GetHumanInventory().CreateInHands("SNAFURPD");
			Arma.GetInventory().CreateAttachment("SNAFURPD_100rdMag");			
			player.GetInventory().CreateInInventory("SNAFURPD_100rdMag");
			player.GetInventory().CreateInInventory("SNAFURPD_100rdMag");	
			player.GetInventory().CreateInInventory("SNAFURPD_100rdMag");
			player.GetInventory().CreateInInventory("SNAFURPD_100rdMag");			
			break;
			
		case 44 :
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
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");			
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");
			break;
			
		case 45 :
			//AUG A3
			Arma = player.GetHumanInventory().CreateInHands("SNAFUAUG_BK");				
			Arma.GetInventory().CreateAttachment("SNAFU_Standardized_Suppressor_Black");
			Arma.GetInventory().CreateAttachment("SNAFU_FGKAC_Grip");			
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_Trijicon_Docter");
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("SNAFU_BMAG556_Black");		
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");	
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");			
			break;
			
		case 46 :
			//HONEY BADGER
			Arma = player.GetHumanInventory().CreateInHands("SNAFUHoneyBadger_Tan");				
			Arma.GetInventory().CreateAttachment("SNAFU_FGKAC_Grip");			
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_Trijicon_Docter");
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("SNAFU_BMAG300_Tan");		
			player.GetInventory().CreateInInventory("SNAFU_BMAG300_Tan");
			player.GetInventory().CreateInInventory("SNAFU_BMAG300_Tan");	
			player.GetInventory().CreateInInventory("SNAFU_BMAG300_Tan");
			player.GetInventory().CreateInInventory("SNAFU_BMAG300_Tan");			
			break;
			
		case 47 :
			//HONEY BADGER
			Arma = player.GetHumanInventory().CreateInHands("SNAFUHoneyBadger_Black");				
			Arma.GetInventory().CreateAttachment("SNAFU_FGKAC_Grip");			
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_Trijicon_Docter");
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("SNAFU_BMAG300_Black");		
			player.GetInventory().CreateInInventory("SNAFU_BMAG300_Black");
			player.GetInventory().CreateInInventory("SNAFU_BMAG300_Black");	
			player.GetInventory().CreateInInventory("SNAFU_BMAG300_Black");
			player.GetInventory().CreateInInventory("SNAFU_BMAG300_Black");			
			break;
			
		case 48 :
			//MK12
			Arma = player.GetHumanInventory().CreateInHands("SNAFUMk12");				
			Arma.GetInventory().CreateAttachment("SNAFU_Standardized_Suppressor_Black");
			Arma.GetInventory().CreateAttachment("SNAFU_FGKAC_Grip");			
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_Trijicon_Docter");
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("SNAFU_BMAG556_Black");
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");	
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");			
			break;
			
		case 49 :
			//SA-80
			Arma = player.GetHumanInventory().CreateInHands("SNAFUSA80");				
			Arma.GetInventory().CreateAttachment("SNAFU_LStandardized_Suppressor_Green");
			Arma.GetInventory().CreateAttachment("SNAFU_FGKAC_Grip");			
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_Trijicon_Docter");
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("SNAFU_BMAG556_Black");
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");	
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");
			break;
			
		case 50 :
			//ZASTAVA M70
			Arma = player.GetHumanInventory().CreateInHands("SNAFU_M70");				
			Arma.GetInventory().CreateAttachment("SNAFU_Standardized_Suppressor_Black");
			Arma.GetInventory().CreateAttachment("Mag_AKM_Drum75Rnd_Black");
			player.GetInventory().CreateInInventory("Mag_AKM_Drum75Rnd_Black");
			player.GetInventory().CreateInInventory("Mag_AKM_Drum75Rnd_Black");	
			player.GetInventory().CreateInInventory("Mag_AKM_Drum75Rnd_Black");
			player.GetInventory().CreateInInventory("Mag_AKM_Drum75Rnd_Black");			
			break;
			
		case 51 :
			//ULTIMAX 100
			Arma = player.GetHumanInventory().CreateInHands("SNAFU_U100");
			Arma.GetInventory().CreateAttachment("SNAFU_U100_Mag");			
			player.GetInventory().CreateInInventory("SNAFU_U100_Mag");
			player.GetInventory().CreateInInventory("SNAFU_U100_Mag");	
			player.GetInventory().CreateInInventory("SNAFU_U100_Mag");
			player.GetInventory().CreateInInventory("SNAFU_U100_Mag");			
			break;
			
		case 52 :
			//PKP
			Arma = player.GetHumanInventory().CreateInHands("Snafu_PKP_NBlack_GUN");				
			Arma.GetInventory().CreateAttachment("SNAFU_PKPBIPOD");			
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_AKWalther");
			Scope.GetInventory().CreateAttachment("Battery9V");		
			Arma.GetInventory().CreateAttachment("Snafu_PKP_250RND_Mag");			
			player.GetInventory().CreateInInventory("Snafu_PKP_250RND_Mag");
			player.GetInventory().CreateInInventory("Snafu_PKP_250RND_Mag");	
			player.GetInventory().CreateInInventory("Snafu_PKP_250RND_Mag");
			player.GetInventory().CreateInInventory("Snafu_PKP_250RND_Mag");			
			break;
			
		case 53 :
			//SA58	
			Arma = player.GetHumanInventory().CreateInHands("SNAFUDSASA58_Gun");				
			Arma.GetInventory().CreateAttachment("SNAFU_Standardized_Suppressor_Black");
			Arma.GetInventory().CreateAttachment("SNAFU_DSAHG2");	
			Arma.GetInventory().CreateAttachment("SNAFU_FGCR_Grip");
			Arma.GetInventory().CreateAttachment("SNAFUDSASA58_Stock");	
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_EOTech_EXPS3");
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("SA58_DrumMag");			
			player.GetInventory().CreateInInventory("SA58_DrumMag");
			player.GetInventory().CreateInInventory("SA58_DrumMag");	
			player.GetInventory().CreateInInventory("SA58_DrumMag");
			player.GetInventory().CreateInInventory("SA58_DrumMag");		
			break;	
			
		case 54 :
			//AR15 300AC
			Arma = player.GetHumanInventory().CreateInHands("SNAFU_AR15SPRBK");				
			Arma.GetInventory().CreateAttachment("SNAFU_M4SS_Stock");
			Arma.GetInventory().CreateAttachment("SNAFU_LVOAHG");
			Arma.GetInventory().CreateAttachment("SNAFU_PistolGripColtA2");
			Arma.GetInventory().CreateAttachment("SNAFU_MPX_Suppressor_Black");
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_Tango6T_Black");
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("SNAFU_PEQ1_Laser");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("SNAFU_BMAG300_Black");
			player.GetInventory().CreateInInventory("SNAFU_BMAG300_Black");
			player.GetInventory().CreateInInventory("SNAFU_BMAG300_Black");	
			player.GetInventory().CreateInInventory("SNAFU_BMAG300_Black");
			player.GetInventory().CreateInInventory("SNAFU_BMAG300_Black");			
			break;
			
		case 55 :
			//TAR-21
			Arma = player.GetHumanInventory().CreateInHands("SNAFUTAR21_Black");				
			Arma.GetInventory().CreateAttachment("SNAFU_SR25_Supp");			
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_EOTech_EXPS3");
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("SNAFU_BMAG556_Black");
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");	
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");			
			break;
			
		case 56 :
			//TAR-21
			Arma = player.GetHumanInventory().CreateInHands("SNAFUTAR21_Green");				
			Arma.GetInventory().CreateAttachment("SNAFU_LStandardized_Suppressor_Green");			
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_EOTech_EXPS3");
			Scope.GetInventory().CreateAttachment("Battery9V");
			LanternaArma = Arma.GetInventory().CreateAttachment("UniversalLight");
			LanternaArma.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("SNAFU_BMAG556_Black");
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");	
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");
			player.GetInventory().CreateInInventory("SNAFU_BMAG556_Black");			
			break;
	}	

	if(BLACK)
		Arma.GetInventory().CreateAttachment("GhillieAtt_Black");	
	else if (TAN)
		Arma.GetInventory().CreateAttachment("GhillieAtt_Brown");	
	else if (SNOW)
		Arma.GetInventory().CreateAttachment("GhillieAtt_White");	
	else
		Arma.GetInventory().CreateAttachment("GhillieAtt_Woodland");	
	
	//ITENS
	Bota.GetInventory().CreateAttachment("CombatKnife");	
	Range = player.GetInventory().CreateInInventory("Rangefinder");		
	Range.GetInventory().CreateAttachment("Battery9V");	
	player.GetInventory().CreateInInventory("M67Grenade");
	player.GetInventory().CreateInInventory("M67Grenade");
	player.GetInventory().CreateInInventory("Morphine");			
	player.GetInventory().CreateInInventory("Morphine");
	player.GetInventory().CreateInInventory("SalineBagIV");
	player.GetInventory().CreateInInventory("SalineBagIV");	
	player.GetInventory().CreateInInventory("ChernarusMap");		
	player.GetInventory().CreateInInventory("BandageDressing");
	player.GetInventory().CreateInInventory("BandageDressing");
	player.GetInventory().CreateInInventory("BandageDressing");	
	player.GetInventory().CreateInInventory("LockPick");	
	player.GetInventory().CreateInInventory("Epinephrine");
	player.GetInventory().CreateInInventory("Epinephrine");	
	player.GetInventory().CreateInInventory("CanOpener");	
	player.GetInventory().CreateInInventory("TacticalBaconCan");	
	player.GetInventory().CreateInInventory("SpaghettiCan");
	player.GetInventory().CreateInInventory("Canteen");				
	player.GetInventory().CreateInInventory("Canteen");	
	
	player.SetQuickBarEntityShortcut( Arma, 0, true );	
	player.SetQuickBarEntityShortcut( ArmaSeg, 1, true );
	player.SetQuickBarEntityShortcut( Melee, 2, true );	
}		