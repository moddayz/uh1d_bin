


modded class ActionHeliEnableLightPanelSIB_UH1D
{
	bool m_IsFinished;
	override void OnStartServer( ActionData action_data ){m_IsFinished = false;}
	override void OnFinishProgressServer( ActionData action_data ){m_IsFinished = true;}
	override void OnEndServer( ActionData action_data )
	{		
		if ( m_IsFinished )
		{
			HumanCommandVehicle vehCommand = action_data.m_Player.GetCommand_Vehicle();
			if( vehCommand )
			{
				Transport trans = vehCommand.GetTransport();
				if ( trans )
				{
					HeliSIB_UH1D_base heli;
					if ( Class.CastTo(heli, trans) )
					{
						EntityAI Battery_UH1D = heli.GetInventory().FindAttachment(InventorySlots.GetSlotIdFromString("CarBattery"));
						if ( !Battery_UH1D || Battery_UH1D && Battery_UH1D.IsRuined() )
						{
							return;
						}
						EntityAI Reflector_1_1_UH1D = heli.GetInventory().FindAttachment(InventorySlots.GetSlotIdFromString("Reflector_1_1"));
						if ( !Reflector_1_1_UH1D || Reflector_1_1_UH1D && Reflector_1_1_UH1D.IsRuined() )
						{
							return;
						}
						heli.SetAnimationPhase("beam1", 1.0);
					}
				}
			}	
		}
	}
	
};

modded class ActionHeliDisableLightPanelSIB_UH1D
{
	bool m_IsFinished;
	override void OnStartServer( ActionData action_data ){m_IsFinished = false;}
	override void OnFinishProgressServer( ActionData action_data ){m_IsFinished = true;}
	override void OnEndServer( ActionData action_data )
	{
		if ( m_IsFinished )
		{
			HumanCommandVehicle vehCommand = action_data.m_Player.GetCommand_Vehicle();
			if( vehCommand )
			{
				Transport trans = vehCommand.GetTransport();
				if ( trans )
				{
					HeliSIB_UH1D_base heli;
					if ( Class.CastTo(heli, trans) )
					{
						heli.SetAnimationPhase("beam1", 0.0);
					}
				}
			}
		}
	}
};

modded class ActionHeliEnableLightSIB_UH1D
{
	bool m_IsFinished;
	override void OnStartServer( ActionData action_data ){m_IsFinished = false;}
	override void OnFinishProgressServer( ActionData action_data ){m_IsFinished = true;}
	override void OnEndServer( ActionData action_data )
	{		
		if ( m_IsFinished )
		{
			HumanCommandVehicle vehCommand = action_data.m_Player.GetCommand_Vehicle();
			if( vehCommand )
			{
				Transport trans = vehCommand.GetTransport();
				if ( trans )
				{
					HeliSIB_UH1D_base heli;
					if ( Class.CastTo(heli, trans) )
					{
						EntityAI Battery_UH1D = heli.GetInventory().FindAttachment(InventorySlots.GetSlotIdFromString("CarBattery"));
						if ( !Battery_UH1D || Battery_UH1D && Battery_UH1D.IsRuined() )
						{
							return;
						}
						EntityAI Reflector_2_1_UH1D = heli.GetInventory().FindAttachment(InventorySlots.GetSlotIdFromString("Reflector_2_1"));
						if ( !Reflector_2_1_UH1D || Reflector_2_1_UH1D && Reflector_2_1_UH1D.IsRuined() )
						{
							return;
						}
						heli.SetAnimationPhase("beam2", 1.0);
					}
				}
			}	
		}
	}
	
};

modded class ActionHeliDisableLightSIB_UH1D
{
	bool m_IsFinished;
	override void OnStartServer( ActionData action_data ){m_IsFinished = false;}
	override void OnFinishProgressServer( ActionData action_data ){m_IsFinished = true;}
	override void OnEndServer( ActionData action_data )
	{
		if ( m_IsFinished )
		{
			HumanCommandVehicle vehCommand = action_data.m_Player.GetCommand_Vehicle();
			if( vehCommand )
			{
				Transport trans = vehCommand.GetTransport();
				if ( trans )
				{
					HeliSIB_UH1D_base heli;
					if ( Class.CastTo(heli, trans) )
					{
						heli.SetAnimationPhase("beam2", 0.0);
					}
				}
			}
		}
	}
};

modded  class PlayerBase
{
	override void SetActions(out TInputActionMap InputActionMap)
	{
		//police
		AddAction(ActionHeliEnableLightSIB_UH1D, InputActionMap);
		AddAction(ActionHeliEnableLightPanelSIB_UH1D, InputActionMap);
		AddAction(ActionHeliDisableLightSIB_UH1D, InputActionMap);
		AddAction(ActionHeliDisableLightPanelSIB_UH1D, InputActionMap);
		super.SetActions(InputActionMap);
	}
}
modded class ActionConstructor
{
	override void RegisterActions(TTypenameArray actions)
	{
		actions.Insert(ActionHeliEnableLightSIB_UH1D);
		actions.Insert(ActionHeliEnableLightPanelSIB_UH1D);
		actions.Insert(ActionHeliDisableLightSIB_UH1D);
		actions.Insert(ActionHeliDisableLightPanelSIB_UH1D);
		super.RegisterActions(actions);
	}
}