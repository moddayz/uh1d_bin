

class SIBUH1D_Door_1_1 extends CarDoor {};
class SIBUH1D_Door_1_2 extends CarDoor {};
class SIBUH1D_Door_2_1 extends CarDoor {};
class SIBUH1D_Door_2_2 extends CarDoor {};


class HeliSIB_UH1D_base extends HeliSIB_big
{
	override void EEInit()
	{
		super.EEInit();
		c_startSound = "Helicopter_UH1D_Start_SoundSets";
		c_stopSound = "Helicopter_UH1D_Stop_SoundSets";
		c_rotorSound = "Helicopter_UH1D_Rotor_SoundSets";
		c_engineSound = "Helicopter_UH1D_Engine_SoundSets";
		c_warningSound = "Helicopter_UH1D_Warning_SoundSets";
		c_crashSound = "Helicopter_UH1D_Crash_SoundSets";
		c_fuelDistance = 3.2;
	}
	ref array<string>  m_UH1D_blade = {"SIBUH1D_blade1","SIBUH1D_blade2","SIBUH1D_bladem1","SIBUH1D_bladem2"};
	ref array<string>  m_UH1D_blade1 = {"SIBUH1D_blade1","SIBUH1D_blade2"};
	ref array<string>  m_UH1D_blade2 = {"SIBUH1D_bladem1","SIBUH1D_bladem2"};
	override void creat_InInventory_heli()
	{
		
		if(IsKindOf("HeliSIB_UH1D"))
		{
			GetInventory().CreateInInventory( "SIBUH1D_Door_1_1" );
			GetInventory().CreateInInventory( "SIBUH1D_Door_1_2" );
			GetInventory().CreateInInventory( "SIBUH1D_Door_2_1" );
			GetInventory().CreateInInventory( "SIBUH1D_Door_2_2" );

			GetInventory().CreateInInventory( "SIBUH1D_blade1" );
			GetInventory().CreateInInventory( "SIBUH1D_blade2" );
			GetInventory().CreateInInventory( "SIBUH1D_bladem1" );
			GetInventory().CreateInInventory( "SIBUH1D_bladem2" );
			GetInventory().CreateInInventory( "CarBattery" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			return;
		}
		if(IsKindOf("HeliSIB_UH1D_airforce"))
		{
			GetInventory().CreateInInventory( "SIBUH1D_Door_1_1_airforce" );
			GetInventory().CreateInInventory( "SIBUH1D_Door_1_2_airforce" );
			GetInventory().CreateInInventory( "SIBUH1D_Door_2_1_airforce" );
			GetInventory().CreateInInventory( "SIBUH1D_Door_2_2_airforce" );
			
			GetInventory().CreateInInventory( "SIBUH1D_blade1" );
			GetInventory().CreateInInventory( "SIBUH1D_blade2" );
			GetInventory().CreateInInventory( "SIBUH1D_bladem1" );
			GetInventory().CreateInInventory( "SIBUH1D_bladem2" );
			GetInventory().CreateInInventory( "CarBattery" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			return;
		}
		if(IsKindOf("HeliSIB_UH1D_iron"))
		{
			GetInventory().CreateInInventory( "SIBUH1D_Door_1_1_iron" );
			GetInventory().CreateInInventory( "SIBUH1D_Door_1_2_iron" );
			GetInventory().CreateInInventory( "SIBUH1D_Door_2_1_iron" );
			GetInventory().CreateInInventory( "SIBUH1D_Door_2_2_iron" );
			
			GetInventory().CreateInInventory( "SIBUH1D_blade1" );
			GetInventory().CreateInInventory( "SIBUH1D_blade2" );
			GetInventory().CreateInInventory( "SIBUH1D_bladem1" );
			GetInventory().CreateInInventory( "SIBUH1D_bladem2" );
			GetInventory().CreateInInventory( "CarBattery" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			return;
		}
		if(IsKindOf("HeliSIB_UH1D_navy"))
		{
			GetInventory().CreateInInventory( "SIBUH1D_Door_1_1_navy" );
			GetInventory().CreateInInventory( "SIBUH1D_Door_1_2_navy" );
			GetInventory().CreateInInventory( "SIBUH1D_Door_2_1_navy" );
			GetInventory().CreateInInventory( "SIBUH1D_Door_2_2_navy" );
			
			GetInventory().CreateInInventory( "SIBUH1D_blade1" );
			GetInventory().CreateInInventory( "SIBUH1D_blade2" );
			GetInventory().CreateInInventory( "SIBUH1D_bladem1" );
			GetInventory().CreateInInventory( "SIBUH1D_bladem2" );
			GetInventory().CreateInInventory( "CarBattery" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			GetInventory().CreateInInventory( "HeadlightH7" );
			return;
		}
		super.creat_InInventory_heli();
	};

	override string GetDoorInvSlotNameFromSeatPos(int posIdx)
	{
		switch( posIdx )
		{
		case 0:
			return "SIBUH1D_Door_1_1";
			break;
		case 1:
			return "SIBUH1D_Door_2_1";
			break;
		case 2:
			return "SIBUH1D_Door_1_2";
			break;
		case 3:
			return "SIBUH1D_Door_2_2";
			break;
		}
		
		return super.GetDoorInvSlotNameFromSeatPos(posIdx);
	}
	


	override int GetCarDoorsState( string slotType )
	{
		CarDoor carDoor;

		Class.CastTo( carDoor, FindAttachmentBySlotName( slotType ) );
		if ( !carDoor )return CarDoorState.DOORS_MISSING;
		
		switch( slotType )
		{
		case "SIBUH1D_Door_1_1":
			if ( GetAnimationPhase("DoorsDriver") > 0.1 )
			return CarDoorState.DOORS_OPEN;
			else
			return CarDoorState.DOORS_CLOSED;

			break;
			
		case "SIBUH1D_Door_2_1":
			if ( GetAnimationPhase("DoorsCoDriver") > 0.1 )
			return CarDoorState.DOORS_OPEN;
			else
			return CarDoorState.DOORS_CLOSED;

			break;
			
		case "SIBUH1D_Door_1_2":
			if ( GetAnimationPhase("DoorsCargo1") > 0.1 )
			return CarDoorState.DOORS_OPEN;
			else
			return CarDoorState.DOORS_CLOSED;

			break;
			
		case "SIBUH1D_Door_2_2":
			if ( GetAnimationPhase("DoorsCargo2") > 0.1 )
			return CarDoorState.DOORS_OPEN;
			else
			return CarDoorState.DOORS_CLOSED;
			break;
		case "SIBUH1D_capot":
				if ( GetAnimationPhase("capot") > 0.1 )
					return CarDoorState.DOORS_OPEN;
				else
					return CarDoorState.DOORS_CLOSED;
			break;
		}

		return CarDoorState.DOORS_MISSING;
	}
	
	override string GetAnimSourceFromSelection( string selection )
	{
		switch( selection )
		{
		case "doors_driver":
			return "DoorsDriver";
		case "doors_codriver":
			return "DoorsCoDriver";
		case "doors_cargo1":
			return "DoorsCargo1";
		case "doors_cargo2":
			return "DoorsCargo2";
		case "doors_hood":
			return "DoorsHood";
		case "doors_trunk":
			return "DoorsTrunk";
		/*case "capot":
			return "capot";*/
		}

		return "";
	}

	

	override bool CrewCanGetThrough( int posIdx )
	{
		switch( posIdx )
		{
		case 0:
			if ( GetCarDoorsState( "SIBUH1D_Door_1_1" ) == CarDoorState.DOORS_CLOSED )
			return false;

			return true;
			break;
			
		case 1:
			if ( GetCarDoorsState( "SIBUH1D_Door_2_1" ) == CarDoorState.DOORS_CLOSED )
			return false;

			return true;
			break;

		case 2:
		case 4:
		case 6:
		case 8:
		
			if ( GetCarDoorsState( "SIBUH1D_Door_1_2" ) == CarDoorState.DOORS_CLOSED )
			return false;

			return true;
			break;

		case 3:
		case 5:
		case 7:
		case 9:
			if ( GetCarDoorsState( "SIBUH1D_Door_2_2" ) == CarDoorState.DOORS_CLOSED )
			return false;

			return true;
			break;
		}

		return false;
	}
	
	
	
	
	
	
	override int GetSeatAnimationType( int posIdx )
	{
		switch( posIdx )
		{
		case 0:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		case 1:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_R;
		case 2:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		case 3:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_R;
		case 4:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		case 5:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_R;
		case 6:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		case 7:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_R;
		case 8:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		case 9:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_R;
		}
		return 0;
	}
	override bool CanReachSeatFromSeat( int currentSeat, int nextSeat )
	{
		switch( currentSeat )
		{
		case 0:
			if ( nextSeat == 1 || nextSeat == 2 || nextSeat == 3 || nextSeat == 4 || nextSeat == 5 || nextSeat == 6 || nextSeat == 7 || nextSeat == 8 || nextSeat == 9)
			return true;
			break;
		case 1:
			if ( nextSeat == 0 ||nextSeat == 2 || nextSeat == 3 || nextSeat == 4 || nextSeat == 5 || nextSeat == 6 || nextSeat == 7 || nextSeat == 8 || nextSeat == 9)
			return true;
			break;
		case 2:
			if ( nextSeat == 0 || nextSeat == 1 ||  nextSeat == 3 || nextSeat == 4 || nextSeat == 5 || nextSeat == 6 || nextSeat == 7 || nextSeat == 8 || nextSeat == 9)
			return true;
			break;
		case 3:
			if ( nextSeat == 0 || nextSeat == 1 || nextSeat == 2 ||  nextSeat == 4 || nextSeat == 5 || nextSeat == 6 || nextSeat == 7 || nextSeat == 8 || nextSeat == 9)
			return true;
			break;
		case 4:
			if ( nextSeat == 0 || nextSeat == 1 || nextSeat == 2 || nextSeat == 3 || nextSeat == 5 || nextSeat == 6 || nextSeat == 7 || nextSeat == 8 || nextSeat == 9)
			return true;
			break;
		case 5:
			if ( nextSeat == 0 || nextSeat == 1 || nextSeat == 2 || nextSeat == 3 || nextSeat == 4 ||  nextSeat == 6 || nextSeat == 7 || nextSeat == 8 || nextSeat == 9)
			return true;
			break;
		case 6:
			if ( nextSeat == 0 || nextSeat == 1 || nextSeat == 2 || nextSeat == 3 || nextSeat == 4 || nextSeat == 5 || nextSeat == 7 || nextSeat == 8 || nextSeat == 9)
			return true;
			break;
		case 7:
			if ( nextSeat == 0 || nextSeat == 1 || nextSeat == 2 || nextSeat == 3 || nextSeat == 4 || nextSeat == 5 || nextSeat == 6 || nextSeat == 8 || nextSeat == 9)
			return true;
			break;
		case 8:
			if ( nextSeat == 0 || nextSeat == 1 || nextSeat == 2 || nextSeat == 3 || nextSeat == 4 || nextSeat == 5 || nextSeat == 6 || nextSeat == 7 || nextSeat == 9)
			return true;
			break;
		case 9:
			if ( nextSeat == 0 || nextSeat == 1 || nextSeat == 2 || nextSeat == 3 || nextSeat == 4 || nextSeat == 5 || nextSeat == 6 || nextSeat == 7 || nextSeat == 8 )
			return true;
			break;
		}
		
		return false;
	}
	

	override string GetDoorConditionPointFromSelection( string selection )
	{
		switch( selection )
		{
		case "seat_driver":
			return "seat_con_1_1";
			break;
		case "seat_codriver":
			return "seat_con_2_1";
			break;

		case "seat_cargo1":
		case "seat_cargo3":
		case "seat_cargo5":
		case "seat_cargo7":
			return "seat_con_1_2";
			break;
		case "seat_cargo2":
		case "seat_cargo4":
		case "seat_cargo8":
		case "seat_cargo6":
			return "seat_con_2_2";
			break;

		}
		
		return "";
	}
	
	HeliLightPanel_UH1D m_LightPanel_1_UH1D;
	HeliLight_UH1D m_Light_1_UH1D;
	HeliLight_UH1D m_Light_1_2_UH1D;
	
	
	void SimulateLight(float dt)
	{
		float beam1 = GetAnimationPhase("beam1");
		if(beam1 == 1)
		{
			if(m_LightPanel_1_UH1D == NULL)
			{
				m_LightPanel_1_UH1D = HeliLightPanel_UH1D.Cast( ScriptedLightBase.CreateLight( HeliLightPanel_UH1D, "0 0 0") );
				m_LightPanel_1_UH1D.AttachOnMemoryPoint(this, "beamStart10","beamEnd10");
			}

		}else{
			if (m_LightPanel_1_UH1D)m_LightPanel_1_UH1D.FadeOut();
		}

		float beam2 = GetAnimationPhase("beam2");
		if(beam2 == 1)
		{
			if(m_Light_1_UH1D == NULL)
			{
				m_Light_1_UH1D = HeliLight_UH1D.Cast( ScriptedLightBase.CreateLight( HeliLight_UH1D, "0 0 0") );
				m_Light_1_UH1D.AttachOnMemoryPoint(this, "beamStart21","beamEnd21");
			}
			if(m_Light_1_2_UH1D == NULL)
			{
				m_Light_1_2_UH1D = HeliLight_UH1D.Cast( ScriptedLightBase.CreateLight( HeliLight_UH1D, "0 0 0") );
				m_Light_1_2_UH1D.AttachOnMemoryPoint(this, "beamStart22","beamEnd22");
			}
		}else{
			if (m_Light_1_UH1D)m_Light_1_UH1D.FadeOut();
			if (m_Light_1_2_UH1D)m_Light_1_2_UH1D.FadeOut();
		}
	}
	override void SoundAnim_Simulate(float dt)
	{
		if ( GetGame().IsClient()  && m_enable)
		{
			SimulateLight(dt);
		}
		super.SoundAnim_Simulate(dt);
	}

	
	
		override bool CanDisplayAttachmentCategory( string category_name )
	{
		category_name.ToLower();
		if(category_name == "chassis")return false;
		return true;
	}
	override bool CanReleaseAttachment( EntityAI attachment )
	{
		string attType = attachment.GetType();
		if(attType=="HeadlightH7" )return true;
		if( attType == "HatchbackWheel" )return false;
		if(m_AnimRotorSpeed > 0)return false;
		return true;
	}
	override void EEItemAttached(EntityAI item, string slot_name)
	{
		super.EEItemAttached( item, slot_name );
		if(m_UH1D_blade.Find(slot_name) > -1)
		{
			item.SetAnimationPhase("box", 1);
			item.SetAnimationPhase("blade", 0);
		}
	}
	override void EEItemDetached(EntityAI item, string slot_name)
	{
		super.EEItemDetached( item, slot_name );
		if(m_UH1D_blade.Find(slot_name) > -1)
		{
			if(!item.IsRuined())
			{
				item.SetAnimationPhase("box", 0);
				item.SetAnimationPhase("blade", 1);
			}
		}
		if(slot_name == "CarBattery" || slot_name == "Reflector_1_1" || slot_name == "Reflector_2_1")
		{
			SetAnimationPhase("beam1", 0.0);
			SetAnimationPhase("beam2", 0.0);
		}
	}
	override void OnAttachmentRuined(EntityAI attachment)
	{
		super.OnAttachmentRuined( attachment );
		if(attachment && attachment.IsRuined())
		{
			if(m_UH1D_blade.Find(attachment.GetType()) > -1)
			{
				GetGame().ObjectDelete(attachment);
			}
			
			if(attachment.GetType()=="HeadlightH7")
			{
				SetAnimationPhase("beam2", 0.0);
			}
		}
	}
	
	
	
	
};
class HeliSIB_UH1D extends HeliSIB_UH1D_base{};
class HeliSIB_UH1D2 extends HeliSIB_UH1D_base{};

modded class ActionHeliStartEngineSIB
{

	override void StartEngineSIB(HeliTest_SIB heli)
	{
		if(heli.IsKindOf("HeliSIB_UH1D_base"))
		{
			bool atach_start=false;
			float UH1D_blade_dem1=1;float UH1D_blade_dem1_old=1;
			float UH1D_blade_dem2=1;float UH1D_blade_dem2_old=1;
			HeliSIB_UH1D_base UH1D_base;
			if(Class.CastTo(UH1D_base, heli))
			{
				for ( int mz = 0; mz < UH1D_base.m_UH1D_blade.Count(); mz++ )
				{
					EntityAI UH1D_blade =  heli.GetInventory().FindAttachmentByName(UH1D_base.m_UH1D_blade.Get(mz));
					if(!UH1D_blade ||  UH1D_blade && UH1D_blade.IsRuined() )
					{
						atach_start=true;
						break;
					}else
					{
						if(UH1D_base.m_UH1D_blade1.Find(UH1D_blade.GetType()) > -1)
						{
							UH1D_blade_dem1 = UH1D_blade.GetHealth01("", "Health");
							if(UH1D_blade_dem1 < UH1D_blade_dem1_old)
							UH1D_blade_dem1_old =UH1D_blade_dem1;
						}
						if(UH1D_base.m_UH1D_blade2.Find(UH1D_blade.GetType()) > -1)
						{
							UH1D_blade_dem2 = UH1D_blade.GetHealth01("", "Health");
							if(UH1D_blade_dem2 < UH1D_blade_dem2_old)
							UH1D_blade_dem2_old =UH1D_blade_dem2;
						}
					}
				}
				heli.SetHealth01("Rotor1", "Health", UH1D_blade_dem1_old);
				heli.SetHealth01("Engine", "Health", UH1D_blade_dem1_old);
				heli.SetHealth01("Rotor2", "Health", UH1D_blade_dem2_old);
				
				if(atach_start)
				{
					heli.m_playSoundWarning=true;
					heli.PlaySoundWarning();	
					return;
				}
			}
			EntityAI Battery_UH1D = heli.GetInventory().FindAttachment(InventorySlots.GetSlotIdFromString("CarBattery"));
			if ( !Battery_UH1D || Battery_UH1D && Battery_UH1D.IsRuined() )
			{
				return;
			}
		}
		super.StartEngineSIB(heli);
	}

};


