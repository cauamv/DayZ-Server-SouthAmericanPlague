void VehicleSpawnBlindado(PlayerBase player, int Vehicle, vector Posicao)
{
	CarScript Carro;	
	PlayerIdentity identity = player.GetIdentity();
	string UID = identity.GetPlainId(); 
	float PlayerID = UID.ToFloat();			

	switch(Vehicle)
	{
		case 0:			
			//BTR GREEN			
			Carro = Car.Cast(GetGame().CreateObject( "BTR_Green", Posicao, false, true, true ));			
			Carro.GetInventory().CreateAttachment("BTR_Doors_hood2_Green");
			Carro.GetInventory().CreateAttachment("BTR_Doors_hood1_Green");
			Carro.GetInventory().CreateAttachment("BTR_Doors_cargo3_Green");
			Carro.GetInventory().CreateAttachment("BTR_Doors_cargo2_Green");
			Carro.GetInventory().CreateAttachment("BTR_Doors_cargo1_Green");
			Carro.GetInventory().CreateAttachment("BTR_Doors_coDriver_Green");	
			Carro.GetInventory().CreateAttachment("BTR_Doors_Driver_Green");
			Carro.GetInventory().CreateAttachment("BTR_Wheel");
			Carro.GetInventory().CreateAttachment("BTR_Wheel");	
			Carro.GetInventory().CreateAttachment("BTR_Wheel");	
			Carro.GetInventory().CreateAttachment("BTR_Wheel");	
			Carro.GetInventory().CreateAttachment("BTR_Wheel");	
			Carro.GetInventory().CreateAttachment("BTR_Wheel");	
			Carro.GetInventory().CreateAttachment("BTR_Wheel");	
			Carro.GetInventory().CreateAttachment("BTR_Wheel");	
			Carro.GetInventory().CreateAttachment("SparkPlug");
			Carro.GetInventory().CreateAttachment("CarRadiator");
			Carro.GetInventory().CreateAttachment("TruckBattery");
			Carro.GetInventory().CreateAttachment("HeadlightH7");
			Carro.GetInventory().CreateAttachment("HeadlightH7");				
			break;				
				
		case 1:	
			//BTR BLACK				
			Carro = Car.Cast(GetGame().CreateObject( "BTR_Black", Posicao, false, true, true ));       
			Carro.GetInventory().CreateAttachment("BTR_Doors_hood2_Black");
			Carro.GetInventory().CreateAttachment("BTR_Doors_hood1_Black");
			Carro.GetInventory().CreateAttachment("BTR_Doors_cargo3_Black");
			Carro.GetInventory().CreateAttachment("BTR_Doors_cargo2_Black");
			Carro.GetInventory().CreateAttachment("BTR_Doors_cargo1_Black");
			Carro.GetInventory().CreateAttachment("BTR_Doors_coDriver_Black");	
			Carro.GetInventory().CreateAttachment("BTR_Doors_Driver_Black");
			Carro.GetInventory().CreateAttachment("BTR_Wheel");
			Carro.GetInventory().CreateAttachment("BTR_Wheel");	
			Carro.GetInventory().CreateAttachment("BTR_Wheel");	
			Carro.GetInventory().CreateAttachment("BTR_Wheel");	
			Carro.GetInventory().CreateAttachment("BTR_Wheel");	
			Carro.GetInventory().CreateAttachment("BTR_Wheel");	
			Carro.GetInventory().CreateAttachment("BTR_Wheel");	
			Carro.GetInventory().CreateAttachment("BTR_Wheel");	
			Carro.GetInventory().CreateAttachment("SparkPlug");
			Carro.GetInventory().CreateAttachment("CarRadiator");
			Carro.GetInventory().CreateAttachment("TruckBattery");
			Carro.GetInventory().CreateAttachment("HeadlightH7");
			Carro.GetInventory().CreateAttachment("HeadlightH7");	
			break;				
		
		case 2:		
			//BTR White				
			Carro = Car.Cast(GetGame().CreateObject( "BTR_White", Posicao, false, true, true ));           
			Carro.GetInventory().CreateAttachment("BTR_Doors_hood2_White");
			Carro.GetInventory().CreateAttachment("BTR_Doors_hood1_White");
			Carro.GetInventory().CreateAttachment("BTR_Doors_cargo3_White");
			Carro.GetInventory().CreateAttachment("BTR_Doors_cargo2_White");
			Carro.GetInventory().CreateAttachment("BTR_Doors_cargo1_White");
			Carro.GetInventory().CreateAttachment("BTR_Doors_coDriver_White");	
			Carro.GetInventory().CreateAttachment("BTR_Doors_Driver_White");
			Carro.GetInventory().CreateAttachment("BTR_Wheel");
			Carro.GetInventory().CreateAttachment("BTR_Wheel");	
			Carro.GetInventory().CreateAttachment("BTR_Wheel");	
			Carro.GetInventory().CreateAttachment("BTR_Wheel");	
			Carro.GetInventory().CreateAttachment("BTR_Wheel");	
			Carro.GetInventory().CreateAttachment("BTR_Wheel");	
			Carro.GetInventory().CreateAttachment("BTR_Wheel");	
			Carro.GetInventory().CreateAttachment("BTR_Wheel");	
			Carro.GetInventory().CreateAttachment("SparkPlug");
			Carro.GetInventory().CreateAttachment("CarRadiator");
			Carro.GetInventory().CreateAttachment("TruckBattery");
			Carro.GetInventory().CreateAttachment("HeadlightH7");
			Carro.GetInventory().CreateAttachment("HeadlightH7");	
			break;
			
		case 3:			
			//BTR CAMO				
			Carro = Car.Cast(GetGame().CreateObject( "BTR", Posicao, false, true, true )); 
			Carro.GetInventory().CreateAttachment("BTR_Doors_hood2");
			Carro.GetInventory().CreateAttachment("BTR_Doors_hood1");
			Carro.GetInventory().CreateAttachment("BTR_Doors_cargo3");
			Carro.GetInventory().CreateAttachment("BTR_Doors_cargo2");
			Carro.GetInventory().CreateAttachment("BTR_Doors_cargo1");
			Carro.GetInventory().CreateAttachment("BTR_Doors_coDriver");	
			Carro.GetInventory().CreateAttachment("BTR_Doors_Driver");
			Carro.GetInventory().CreateAttachment("BTR_Wheel");
			Carro.GetInventory().CreateAttachment("BTR_Wheel");	
			Carro.GetInventory().CreateAttachment("BTR_Wheel");	
			Carro.GetInventory().CreateAttachment("BTR_Wheel");	
			Carro.GetInventory().CreateAttachment("BTR_Wheel");	
			Carro.GetInventory().CreateAttachment("BTR_Wheel");	
			Carro.GetInventory().CreateAttachment("BTR_Wheel");	
			Carro.GetInventory().CreateAttachment("BTR_Wheel");	
			Carro.GetInventory().CreateAttachment("SparkPlug");
			Carro.GetInventory().CreateAttachment("CarRadiator");
			Carro.GetInventory().CreateAttachment("TruckBattery");
			Carro.GetInventory().CreateAttachment("HeadlightH7");
			Carro.GetInventory().CreateAttachment("HeadlightH7");	
			break;				
		
		case 4:			
			//GAZ71			
			Carro = Car.Cast(GetGame().CreateObject( "Gaz71", Posicao, false, true, true )); 
			Carro.GetInventory().CreateAttachment("Gaz71_Doors_Driver");
			Carro.GetInventory().CreateAttachment("Gaz71_Doors_coDriver");
			Carro.GetInventory().CreateAttachment("Gaz71_Doors_hood");
			Carro.GetInventory().CreateAttachment("Gaz71_Doors_trunk");		
			Carro.GetInventory().CreateAttachment("Gaz71_Wheel");
			Carro.GetInventory().CreateAttachment("Gaz71_Wheel");	
			Carro.GetInventory().CreateAttachment("Gaz71_Wheel");	
			Carro.GetInventory().CreateAttachment("Gaz71_Wheel");	
			Carro.GetInventory().CreateAttachment("Gaz71_Wheel");	
			Carro.GetInventory().CreateAttachment("Gaz71_Wheel");	
			Carro.GetInventory().CreateAttachment("Gaz71_Wheel");	
			Carro.GetInventory().CreateAttachment("Gaz71_Wheel");	
			Carro.GetInventory().CreateAttachment("Gaz71_Wheel");
			Carro.GetInventory().CreateAttachment("Gaz71_Wheel");
			Carro.GetInventory().CreateAttachment("Gaz71_Wheel");
			Carro.GetInventory().CreateAttachment("Gaz71_Wheel");
			Carro.GetInventory().CreateAttachment("SparkPlug");
			Carro.GetInventory().CreateAttachment("CarRadiator");
			Carro.GetInventory().CreateAttachment("TruckBattery");
			Carro.GetInventory().CreateAttachment("HeadlightH7");
			Carro.GetInventory().CreateAttachment("HeadlightH7");	
			break;		
	}	
	
	Carro.Fill( CarFluid.FUEL, Carro.GetFluidCapacity( CarFluid.FUEL ) );
	Carro.Fill( CarFluid.OIL, Carro.GetFluidCapacity( CarFluid.OIL ) );
	Carro.Fill( CarFluid.BRAKE, Carro.GetFluidCapacity( CarFluid.BRAKE ) );
	Carro.Fill( CarFluid.COOLANT, Carro.GetFluidCapacity( CarFluid.COOLANT ) );		
	Carro.SetHealth("Engine", "", Carro.GetMaxHealth("Engine", ""));
	Carro.SetIDCar(PlayerID);		
}		
