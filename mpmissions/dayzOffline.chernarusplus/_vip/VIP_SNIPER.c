void Equipment_VIP_Sniper(PlayerBase player, int ClothingV, int WeaponP)
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
	bool SNOW = false;
	int RandomSeg = Math.RandomInt(0,3);
	ref TStringArray AssaultchemlightArray = {"Chemlight_White","Chemlight_Yellow","Chemlight_Green","Chemlight_Red"};			
	
	switch(ClothingV)
	{
		case 0 :
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
		
		case 1 :
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
		
		case 2 :
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
			
		case 3 :
			//GHILLIE WOODLAND				
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
			Melee = player.GetInventory().CreateInInventory("FirefighterAxe_Black");
			MochilaColete.GetInventory().CreateAttachment(AssaultchemlightArray.GetRandomElement());	
			Walktalk = MochilaColete.GetInventory().CreateAttachment("PersonalRadio");
			Walktalk.GetInventory().CreateAttachment("Battery9V");
			break;		
			
		case 4 :
			//GHILLIE SNOW	
			SNOW = true;
			player.GetInventory().CreateInInventory("MMG_balaclava_alpine");
			player.GetInventory().CreateInInventory("MMG_combatpants_alpine");	
			player.GetInventory().CreateInInventory("MMG_combatshirt_alpine");				
			Colete = player.GetInventory().CreateInInventory("MMG_JPC_Vest_alpine");	
			Colete.GetInventory().CreateAttachment("MMG_ammo_pouch_alpine");
			Colete.GetInventory().CreateAttachment("MMG_Med_Pouch_alpine");
			Colete.GetInventory().CreateAttachment("MMG_Mag_Pouch_alpine");
			player.GetInventory().CreateInInventory("GhillieHood_White");
			player.GetInventory().CreateInInventory("MMG_assault_pack_alpine");			
			Capacete = player.GetInventory().CreateInInventory("NVGHeadstrap");	
			Visor = Capacete.GetInventory().CreateAttachment("IMP_NVG_N15");
			Visor.GetInventory().CreateAttachment("Battery9V");
			player.GetInventory().CreateInInventory("MilitaryBoots_Bluerock");
			player.GetInventory().CreateInInventory("MCP_FTacGlove_white");
			player.GetInventory().CreateInInventory("GhillieSuit_White");				
			Melee = player.GetInventory().CreateInInventory("FirefighterAxe_Black");		
			break;	
	}
			
	switch(WeaponP)
	{
		case 0 :
			//MOSIN						
			Arma = player.GetHumanInventory().CreateInHands("Mosin9130");					
			Arma.GetInventory().CreateAttachment("PUScopeOptic");			
			Arma.GetInventory().CreateAttachment("Mosin_Compensator");
			player.GetInventory().CreateInInventory("ImprovisedSuppressor");
			player.GetInventory().CreateInInventory("Mag_CLIP762x54_5Rnd");
			player.GetInventory().CreateInInventory("Mag_CLIP762x54_5Rnd");
			player.GetInventory().CreateInInventory("Ammo_762x54");
			player.GetInventory().CreateInInventory("Ammo_762x54");			
			break;
		
		case 1 :
			//MOSIN						
			Arma = player.GetHumanInventory().CreateInHands("Mosin9130_Camo");					
			Arma.GetInventory().CreateAttachment("PUScopeOptic");			
			Arma.GetInventory().CreateAttachment("Mosin_Compensator");
			player.GetInventory().CreateInInventory("ImprovisedSuppressor");
			player.GetInventory().CreateInInventory("Mag_CLIP762x54_5Rnd");
			player.GetInventory().CreateInInventory("Mag_CLIP762x54_5Rnd");
			player.GetInventory().CreateInInventory("Ammo_762x54");
			player.GetInventory().CreateInInventory("Ammo_762x54");			
			break;
		
		case 2 :
			//MOSIN						
			Arma = player.GetHumanInventory().CreateInHands("Mosin9130_Green");					
			Arma.GetInventory().CreateAttachment("PUScopeOptic");			
			Arma.GetInventory().CreateAttachment("Mosin_Compensator");
			player.GetInventory().CreateInInventory("ImprovisedSuppressor");
			player.GetInventory().CreateInInventory("Mag_CLIP762x54_5Rnd");
			player.GetInventory().CreateInInventory("Mag_CLIP762x54_5Rnd");
			player.GetInventory().CreateInInventory("Ammo_762x54");
			player.GetInventory().CreateInInventory("Ammo_762x54");				
			break;
		
		case 3 :
			//MOSIN						
			Arma = player.GetHumanInventory().CreateInHands("Mosin9130_Black");					
			Arma.GetInventory().CreateAttachment("PUScopeOptic");			
			Arma.GetInventory().CreateAttachment("Mosin_Compensator");
			player.GetInventory().CreateInInventory("ImprovisedSuppressor");
			player.GetInventory().CreateInInventory("Mag_CLIP762x54_5Rnd");
			player.GetInventory().CreateInInventory("Mag_CLIP762x54_5Rnd");
			player.GetInventory().CreateInInventory("Ammo_762x54");
			player.GetInventory().CreateInInventory("Ammo_762x54");			
			break;
		
		case 4 :
			//SVD
			Arma = player.GetHumanInventory().CreateInHands("SVD");						
			Scope = Arma.GetInventory().CreateAttachment("PSO1Optic");
			Scope.GetInventory().CreateAttachment("Battery9V");				
			Arma.GetInventory().CreateAttachment("ImprovisedSuppressor");
			player.GetInventory().CreateInInventory("ImprovisedSuppressor");
			Arma.GetInventory().CreateAttachment("Mag_SVD_10Rnd");
			player.GetInventory().CreateInInventory("Mag_SVD_10Rnd");
			player.GetInventory().CreateInInventory("Mag_SVD_10Rnd");	
			player.GetInventory().CreateInInventory("Mag_SVD_10Rnd");
			break;			
		
		case 5 :
			//SKS					
			Arma = player.GetHumanInventory().CreateInHands("SKS");					
			Arma.GetInventory().CreateAttachment("PUScopeOptic");			
			Arma.GetInventory().CreateAttachment("SKS_Bayonet");
			player.GetInventory().CreateInInventory("ImprovisedSuppressor");
			player.GetInventory().CreateInInventory("Mag_CLIP762x39_10Rnd");
			player.GetInventory().CreateInInventory("Mag_CLIP762x39_10Rnd");
			player.GetInventory().CreateInInventory("Ammo_762x39");
			player.GetInventory().CreateInInventory("Ammo_762x39");				
			break;
			
		case 6 :
			//SKS					
			Arma = player.GetHumanInventory().CreateInHands("SKS_Green");					
			Arma.GetInventory().CreateAttachment("PUScopeOptic");			
			Arma.GetInventory().CreateAttachment("SKS_Bayonet");
			player.GetInventory().CreateInInventory("ImprovisedSuppressor");
			player.GetInventory().CreateInInventory("Mag_CLIP762x39_10Rnd");
			player.GetInventory().CreateInInventory("Mag_CLIP762x39_10Rnd");
			player.GetInventory().CreateInInventory("Ammo_762x39");
			player.GetInventory().CreateInInventory("Ammo_762x39");			
			break;
		
		case 7 :
			//SKS					
			Arma = player.GetHumanInventory().CreateInHands("SKS_Black");					
			Arma.GetInventory().CreateAttachment("PUScopeOptic");			
			Arma.GetInventory().CreateAttachment("SKS_Bayonet");
			player.GetInventory().CreateInInventory("ImprovisedSuppressor");
			player.GetInventory().CreateInInventory("Mag_CLIP762x39_10Rnd");
			player.GetInventory().CreateInInventory("Mag_CLIP762x39_10Rnd");
			player.GetInventory().CreateInInventory("Ammo_762x39");
			player.GetInventory().CreateInInventory("Ammo_762x39");				
			break;
		
		case 8 :
			//VSS
			Arma = player.GetHumanInventory().CreateInHands("VSS");	
			Scope = Arma.GetInventory().CreateAttachment("PSO1Optic");
			Scope.GetInventory().CreateAttachment("Battery9V");
			Arma.GetInventory().CreateAttachment("Mag_VSS_10Rnd");
			player.GetInventory().CreateInInventory("Mag_VSS_10Rnd");
			player.GetInventory().CreateInInventory("Mag_VSS_10Rnd");
			player.GetInventory().CreateInInventory("Mag_VSS_10Rnd");
			player.GetInventory().CreateInInventory("Mag_VSS_10Rnd");			
			break;
		
		case 9 :
			//WINCHESTER
			Arma = player.GetHumanInventory().CreateInHands("Winchester70");						
			Arma.GetInventory().CreateAttachment("HuntingOptic");
			Arma.GetInventory().CreateAttachment("ImprovisedSuppressor");			
			player.GetInventory().CreateInInventory("Ammo_308Win");
			player.GetInventory().CreateInInventory("Ammo_308Win");
			player.GetInventory().CreateInInventory("Ammo_308Win");			
			break;
		
		case 10 :
			//WINCHESTER
			Arma = player.GetHumanInventory().CreateInHands("Winchester70_Green");						
			Arma.GetInventory().CreateAttachment("HuntingOptic");
			Arma.GetInventory().CreateAttachment("ImprovisedSuppressor");			
			player.GetInventory().CreateInInventory("Ammo_308Win");
			player.GetInventory().CreateInInventory("Ammo_308Win");
			player.GetInventory().CreateInInventory("Ammo_308Win");			
			break;
		
		case 11 :
			//WINCHESTER
			Arma = player.GetHumanInventory().CreateInHands("Winchester70_Black");						
			Arma.GetInventory().CreateAttachment("HuntingOptic");
			Arma.GetInventory().CreateAttachment("ImprovisedSuppressor");			
			player.GetInventory().CreateInInventory("Ammo_308Win");
			player.GetInventory().CreateInInventory("Ammo_308Win");
			player.GetInventory().CreateInInventory("Ammo_308Win");			
			break;
		
		case 12 :
			//SCOUT
			Arma = player.GetHumanInventory().CreateInHands("Scout");							
			Arma.GetInventory().CreateAttachment("ACOGOptic");
			player.GetInventory().CreateInInventory("Mag_Scout_5rnd");
			player.GetInventory().CreateInInventory("Mag_Scout_5rnd");
			Arma.GetInventory().CreateAttachment("Mag_Scout_5rnd");
			player.GetInventory().CreateInInventory("Ammo_308Win");
			player.GetInventory().CreateInInventory("Ammo_308Win");
			player.GetInventory().CreateInInventory("Ammo_308Win");		
			break;
			
		case 13 :
			//B95
			Arma = player.GetHumanInventory().CreateInHands("B95");			
			Scope = Arma.GetInventory().CreateAttachment("HuntingOptic");			
			player.GetInventory().CreateInInventory("Ammo_308Win");
			player.GetInventory().CreateInInventory("Ammo_308Win");
			player.GetInventory().CreateInInventory("Ammo_308Win");			
			break;	
		
		case 14 :
			//VSSK
			Arma = player.GetHumanInventory().CreateInHands("SNAFUVSSK");	
			Arma.GetInventory().CreateAttachment("SNAFU_VSSKbipod");			
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_HHuntingOptic");	
			Arma.GetInventory().CreateAttachment("SNAFUVSSK_5rdMag");
			player.GetInventory().CreateInInventory("SNAFUVSSK_5rdMag");
			player.GetInventory().CreateInInventory("SNAFUVSSK_5rdMag");
			player.GetInventory().CreateInInventory("SNAFUVSSK_5rdMag");
			break;	
			
		case 15 :
			//DVL-10
			Arma = player.GetHumanInventory().CreateInHands("SNAFUDVL10M2");
			Arma.GetInventory().CreateAttachment("SNAFU_AtlasBipod");
			Arma.GetInventory().CreateAttachment("SNAFUKivaari_338_Supp");			
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_HHuntingOptic");
			Arma.GetInventory().CreateAttachment("SNAFUDVL10M2_5rdMag");
			player.GetInventory().CreateInInventory("SNAFUDVL10M2_5rdMag");
			player.GetInventory().CreateInInventory("SNAFUDVL10M2_5rdMag");
			player.GetInventory().CreateInInventory("SNAFUDVL10M2_5rdMag");				
			break;	
			
		case 16 :
			//MARLIN 1895
			Arma = player.GetHumanInventory().CreateInHands("SNAFUMarlin1895");
			Arma.GetInventory().CreateAttachment("SNAFU_SPMOD");				
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_Kahles");
			Scope.GetInventory().CreateAttachment("Battery9V");		
			player.GetInventory().CreateInInventory("SNAFU_Ammo_45_70mm");
			player.GetInventory().CreateInInventory("SNAFU_Ammo_45_70mm");	
			player.GetInventory().CreateInInventory("SNAFU_Ammo_45_70mm");			
			break;	
			
		case 17 :
			//ZASTAVA M48
			Arma = player.GetHumanInventory().CreateInHands("SNAFU_M48");
			Arma.GetInventory().CreateAttachment("TTC_Universal_Suppressor_BLACK");				
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_MHuntingOptic");							
			player.GetInventory().CreateInInventory("Ammo_308Win");	
			player.GetInventory().CreateInInventory("Ammo_308Win");
			player.GetInventory().CreateInInventory("Ammo_308Win");			
			break;	
			
		case 18 :
			//M110
			Arma = player.GetHumanInventory().CreateInHands("GCGN_M110_Black");
			Arma.GetInventory().CreateAttachment("SNAFUAR15_SPR_SIL");
			Arma.GetInventory().CreateAttachment("SNAFU_ModBipod");	
			Arma.GetInventory().CreateAttachment("SNAFU_AFG_02_OD");		
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_Kahles");
			Scope.GetInventory().CreateAttachment("Battery9V");	
			Arma.GetInventory().CreateAttachment("GCGN_M110_Mag");
			player.GetInventory().CreateInInventory("GCGN_M110_Mag");	
			player.GetInventory().CreateInInventory("GCGN_M110_Mag");			
			player.GetInventory().CreateInInventory("GCGN_M110_Mag");
			break;	
		
		case 19 :
			//M200
			Arma = player.GetHumanInventory().CreateInHands("GCGN_M200");
			Arma.GetInventory().CreateAttachment("SNAFU_M200B_BK");
			Arma.GetInventory().CreateAttachment("SNAFU_M200S_BK");	
			Arma.GetInventory().CreateAttachment("SNAFU_50bmg_Suppressor_B");		
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_HuntingOptic");
			Arma.GetInventory().CreateAttachment("GCGN_M200_Mag");
			player.GetInventory().CreateInInventory("GCGN_M200_Mag");	
			player.GetInventory().CreateInInventory("GCGN_M200_Mag");
			player.GetInventory().CreateInInventory("GCGN_M200_Mag");			
			break;	
			
		case 20 :
			//M700
			Arma = player.GetHumanInventory().CreateInHands("GCGN_M700");			
			Arma.GetInventory().CreateAttachment("TTC_Universal_Suppressor_BLACK");		
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_HuntingOptic");
			Arma.GetInventory().CreateAttachment("GCGN_M700_Mag");
			player.GetInventory().CreateInInventory("GCGN_M700_Mag");	
			player.GetInventory().CreateInInventory("GCGN_M700_Mag");
			player.GetInventory().CreateInInventory("GCGN_M700_Mag");			
			break;	
		
		case 21 :	
			//AWM
			Arma = player.GetHumanInventory().CreateInHands("SNAFU_AWM_GUN");			
			Arma.GetInventory().CreateAttachment("SNAFUKivaari_338_Supp");		
			Scope = Arma.GetInventory().CreateAttachment("SNAFU_HHuntingOptic");	
			Arma.GetInventory().CreateAttachment("SNAFU_AWM_Mag");
			player.GetInventory().CreateInInventory("SNAFU_AWM_Mag");	
			player.GetInventory().CreateInInventory("SNAFU_AWM_Mag");
			player.GetInventory().CreateInInventory("SNAFU_AWM_Mag");			
			break;		
	}	
	if (SNOW)
		Arma.GetInventory().CreateAttachment("GhillieAtt_White");	
	else
		Arma.GetInventory().CreateAttachment("GhillieAtt_Woodland");
	switch (RandomSeg) 
	{				
		case 0 :
			ArmaSeg = player.GetInventory().CreateInInventory("FNX45");	
			ArmaSeg.GetInventory().CreateAttachment("PistolSuppressor");
			Lanterna = ArmaSeg.GetInventory().CreateAttachment("TLRLight");
			Lanterna.GetInventory().CreateAttachment("Battery9V");
			Scope = ArmaSeg.GetInventory().CreateAttachment("FNP45_MRDSOptic"); 
			Scope.GetInventory().CreateAttachment("Battery9V");
			player.GetInventory().CreateInInventory("Mag_FNX45_15Rnd");			
			player.GetInventory().CreateInInventory("Mag_FNX45_15Rnd");		
			break;	
					
		case 1 :
			ArmaSeg = player.GetInventory().CreateInInventory("Glock19");
			ArmaSeg.GetInventory().CreateAttachment("PistolSuppressor");
			Lanterna = ArmaSeg.GetInventory().CreateAttachment("TLRLight");
			Lanterna.GetInventory().CreateAttachment("Battery9V");
			Scope = ArmaSeg.GetInventory().CreateAttachment("FNP45_MRDSOptic"); 
			Scope.GetInventory().CreateAttachment("Battery9V");
			player.GetInventory().CreateInInventory("Mag_Glock_15Rnd");
			player.GetInventory().CreateInInventory("Mag_Glock_15Rnd");					
			break;					
				
		case 2 :
			ArmaSeg = player.GetInventory().CreateInInventory("CZ61");	
			ArmaSeg.GetInventory().CreateAttachment("PistolSuppressor");
			Mochila.GetInventory().CreateInInventory("Mag_CZ61_20Rnd");
			Mochila.GetInventory().CreateInInventory("Mag_CZ61_20Rnd");			
			break;			
	}			
	
	MochilaColete.GetInventory().CreateAttachment(AssaultchemlightArray.GetRandomElement());		
	Colete.GetInventory().CreateAttachment("M18SmokeGrenade_Green");
	Colete.GetInventory().CreateAttachment("M18SmokeGrenade_Red");
	player.GetInventory().CreateInInventory("ChernarusMap");			
	Bota.GetInventory().CreateAttachment("CombatKnife");
	player.GetInventory().CreateInInventory("BandageDressing");
	player.GetInventory().CreateInInventory("BandageDressing");
	player.GetInventory().CreateInInventory("SalineBagIV");
	Walktalk = MochilaColete.GetInventory().CreateAttachment("PersonalRadio");
	Walktalk.GetInventory().CreateAttachment("Battery9V");
	Range = player.GetInventory().CreateInInventory("Rangefinder");		
	Range.GetInventory().CreateAttachment("Battery9V");	
	player.GetInventory().CreateInInventory("Epinephrine");
	player.GetInventory().CreateInInventory("Morphine");
	player.GetInventory().CreateInInventory("CanOpener");	
	player.GetInventory().CreateInInventory("Canteen");				
	player.GetInventory().CreateInInventory("TacticalBaconCan");
	player.GetInventory().CreateInInventory("SpaghettiCan");	
	
	player.SetQuickBarEntityShortcut( Arma, 0, true );
	player.SetQuickBarEntityShortcut( ArmaSeg, 1, true );
	player.SetQuickBarEntityShortcut( Melee, 2, true );		
}