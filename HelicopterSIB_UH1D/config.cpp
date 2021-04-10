class CfgPatches
{
	class HelicopterModSIBUH1D
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.01;
		requiredAddons[]={"HelicopterModScriptsSIB"};
	};
};
class CfgMods
{
	class HelicopterModSIBUH1D2
	{
		dir="HelicopterSIB_UH1D";
		hideName=0;
		hidePicture=0;
		name="HelicopterModSIBUH1D";
		credits="";
		author="SIBNIC";
		authorID="";
		version="version 3";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			
			
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"HelicopterSIB_UH1D/4_World"
				};
			};
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"HelicopterSIB_UH1D/3_Game"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"HelicopterSIB_UH1D/5_Mission"
				};
			};
		};
	};
};


class CfgSoundShaders
{
	class Heli_UH1D_crash_SoundShaders
	{
		samples[]={{"HelicopterSIB_UH1D\Sound\crash",1}};
		range=250;
		volume=1.0;
	};
	class Heli_UH1D_warning_SoundShaders
	{
		samples[]={{"HelicopterSIB_UH1D\Sound\warning",1}};
		range=250;
		volume=1.0;
	};
	class Heli_UH1D_engine_SoundShaders1
	{
		samples[]={{"HelicopterSIB_UH1D\Sound\engine",1}};
		range=700;
		volume=1.2;
	};
	class Heli_UH1D_rotor_SoundShaders
	{
		samples[]={{"HelicopterSIB_UH1D\Sound\rotor",1}};
		range=700;
		volume=1.2;
	};
	class Heli_UH1D_start_SoundShaders
	{
		samples[]={{"HelicopterSIB_UH1D\Sound\start",1}};
		range=700;
		volume=1.2;
	};

	class Heli_UH1D_stop_SoundShaders
	{
		samples[]={{"HelicopterSIB_UH1D\Sound\stop",1}};
		range=700;
		volume=1.2;
	};
};
class CfgSoundSets
{
	class Heli_base_SoundSet;
	class Helicopter_UH1D_Crash_SoundSets: Heli_base_SoundSet
	{
		soundShaders[]={"Heli_UH1D_crash_SoundShaders"};
	};
	class Helicopter_UH1D_Warning_SoundSets: Heli_base_SoundSet
	{
		soundShaders[]={"Heli_UH1D_warning_SoundShaders"};
	};
	class Helicopter_UH1D_Start_SoundSets: Heli_base_SoundSet
	{
		soundShaders[]={"Heli_UH1D_start_SoundShaders"};
	};
	class Helicopter_UH1D_Stop_SoundSets: Heli_base_SoundSet
	{
		soundShaders[]={"Heli_UH1D_stop_SoundShaders"};
	};
	class Helicopter_UH1D_Engine_SoundSets: Heli_base_SoundSet
	{
		soundShaders[]={"Heli_UH1D_engine_SoundShaders1"};
		loop=1;
	};
	class Helicopter_UH1D_Rotor_SoundSets: Heli_base_SoundSet
	{
		soundShaders[]={"Heli_UH1D_rotor_SoundShaders"};
		loop=1;
	};
};


class CfgVehicles
{
	
	class Inventory_Base;
	class AnimationSources;
	class CarDoor;
	class Crew;
	
	class SIBUH1D_Door_1_1: CarDoor
	{
		scope = 2;
		displayName = "doors_driver";
		descriptionShort = "";
		model = "\HelicopterSIB_UH1D\SIBUH1D_doors_driver.p3d";
		inventorySlot[] = {"SIBUH1D_Door_1_1"};
		rotationFlags = 8;
	};
	class SIBUH1D_Door_1_2: CarDoor
	{
		scope = 2;
		displayName = "doors_cargo1";
		descriptionShort = "";
		model = "\HelicopterSIB_UH1D\SIBUH1D_doors_cargo1.p3d";
		inventorySlot[] = {"SIBUH1D_Door_1_2"};
		rotationFlags = 8;
	};
	class SIBUH1D_Door_2_1: CarDoor
	{
		scope = 2;
		displayName = "doors_codriver";
		descriptionShort = "";
		model = "\HelicopterSIB_UH1D\SIBUH1D_doors_codriver.p3d";
		inventorySlot[] = {"SIBUH1D_Door_2_1"};
		rotationFlags = 8;
	};
	class SIBUH1D_Door_2_2: CarDoor
	{
		scope = 2;
		displayName = "doors_cargo2";
		descriptionShort = "";
		model = "\HelicopterSIB_UH1D\SIBUH1D_doors_cargo2.p3d";
		inventorySlot[] = {"SIBUH1D_Door_2_2"};
		rotationFlags = 8;
	};
	
	
	
	class SIBUH1D_Door_1_1_airforce: SIBUH1D_Door_1_1
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_UH1D\data\Uh-1h_do_airforce.paa"};
	};
	class SIBUH1D_Door_1_2_airforce: SIBUH1D_Door_1_2
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_UH1D\data\Uh-1h_do_airforce.paa"};
	};
	class SIBUH1D_Door_2_1_airforce: SIBUH1D_Door_2_1
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_UH1D\data\Uh-1h_do_airforce.paa"};
	};
	class SIBUH1D_Door_2_2_airforce: SIBUH1D_Door_2_2
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_UH1D\data\Uh-1h_do_airforce.paa"};
	};
	class SIBUH1D_Door_1_1_iron: SIBUH1D_Door_1_1
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_UH1D\data\Uh-1h_do_iron.paa"};
	};
	class SIBUH1D_Door_1_2_iron: SIBUH1D_Door_1_2
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_UH1D\data\Uh-1h_do_iron.paa"};
	};
	class SIBUH1D_Door_2_1_iron: SIBUH1D_Door_2_1
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_UH1D\data\Uh-1h_do_iron.paa"};
	};
	class SIBUH1D_Door_2_2_iron: SIBUH1D_Door_2_2
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_UH1D\data\Uh-1h_do_iron.paa"};
	};
	class SIBUH1D_Door_1_1_navy: SIBUH1D_Door_1_1
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_UH1D\data\Uh-1h_do_navy.paa"};
	};
	class SIBUH1D_Door_1_2_navy: SIBUH1D_Door_1_2
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_UH1D\data\Uh-1h_do_navy.paa"};
	};
	class SIBUH1D_Door_2_1_navy: SIBUH1D_Door_2_1
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_UH1D\data\Uh-1h_do_navy.paa"};
	};
	class SIBUH1D_Door_2_2_navy: SIBUH1D_Door_2_2
	{
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_UH1D\data\Uh-1h_do_navy.paa"};
	};
	
	
	
	
	
	class SIBUH1D_blade1:  Inventory_Base
	{
		scope = 2;
		displayName = "UH1D blade 1";
		descriptionShort = "UH1D blade 1";
		model = "\HelicopterSIB_UH1D\SIBUH1D_blade1.p3d";
		inventorySlot[] = {"SIBUH1D_blade1"};
		//rotationFlags = 8;
		itemSize[] = {10,10};
		class AnimationSources
		{
			class box
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0;
			};
			class blade
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0;
			};
		};
	};
	class SIBUH1D_blade2:  SIBUH1D_blade1
	{
		scope = 2;
		displayName = "UH1D blade 2";
		descriptionShort = "UH1D blade 2";
		model = "\HelicopterSIB_UH1D\SIBUH1D_blade2.p3d";
		inventorySlot[] = {"SIBUH1D_blade2"};
	};

	class SIBUH1D_bladem1:  SIBUH1D_blade1
	{
		scope = 2;
		displayName = "UH1D tail blade 1";
		descriptionShort = "UH1D tail blade 1";
		model = "\HelicopterSIB_UH1D\SIBUH1D_bladem1.p3d";
		inventorySlot[] = {"SIBUH1D_bladem1"};
	};
	class SIBUH1D_bladem2:  SIBUH1D_blade1
	{
		scope = 2;
		displayName = "UH1D tail blade 2";
		descriptionShort = "UH1D tail blade 2";
		model = "\HelicopterSIB_UH1D\SIBUH1D_bladem2.p3d";
		inventorySlot[] = {"SIBUH1D_bladem2"};
	};

	
	
	
	
	
	
	class HeliSIB_middle;
	class HeliSIB_UH1D_base: HeliSIB_middle
	{
		scope=1;
		model="HelicopterSIB_UH1D\UH1D.p3d";
		attachments[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","SIBUH1D_Door_1_1","SIBUH1D_Door_1_2","SIBUH1D_Door_2_1","SIBUH1D_Door_2_2","CarBattery","SIBUH1D_blade1","SIBUH1D_blade2","SIBUH1D_bladem1","SIBUH1D_bladem2","Reflector_1_1","Reflector_2_1"};
		class GUIInventoryAttachmentsProps
		{	
			class Chassis
			{
				name = "$STR_attachment_Chassis0";
				description = "";
				icon = "cat_vehicle_chassis";
				attachmentSlots[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2"};
			};
			class Body
			{
				name = "$STR_attachment_Body0";
				description = "";
				icon="cat_vehicle_body";
				attachmentSlots[] = {"SIBUH1D_Door_1_1","SIBUH1D_Door_1_2","SIBUH1D_Door_2_1","SIBUH1D_Door_2_2","Reflector_1_1","Reflector_2_1"};
			};
			class Engine
			{
				name = "$STR_attachment_Engine0";
				description = "";
				attachmentSlots[] = {"CarBattery","SIBUH1D_blade1","SIBUH1D_blade2","SIBUH1D_bladem1","SIBUH1D_bladem2"};
				icon = "cat_vehicle_engine";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 8000;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
			class DamageZones
			{
				class Body
				{
					fatalInjuryCoef = 0.001;
					memoryPoints[] = {"dmgzone_body","dmgzone_proj1","dmgzone_proj2"};
					componentNames[] = {"dmgzone_body","dmgzone_proj1","dmgzone_proj2"};
					class Health
					{
						hitpoints = 15000;
						transferToGlobalCoef = 0.001;
					};
					transferToZonesNames[] = {};
					inventorySlots[] = {"Reflector_1_1","Reflector_2_1"};
					inventorySlotsCoefs[] = {0.1,0.1};
				};
				class Chassis
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgzone_chassis"};
					componentNames[] = {"dmgzone_chassis"};
					class Health
					{
						hitpoints = 50000;
						transferToGlobalCoef = 0;

					};
					inventorySlots[] = {};
					inventorySlotsCoefs[] = {};
				};
				class Engine
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgzone_engine"};
					componentNames[] = {"dmgzone_engine"};
					class Health
					{
						hitpoints = 20000;
						transferToGlobalCoef = 0;

					};
					transferToZonesNames[] = {};
					inventorySlots[] = {"CarBattery"};
					inventorySlotsCoefs[] = {};
				};
				class Fuel
				{
					fatalInjuryCoef = -1;
					componentNames[] = {"dmgzone_fuel"};
					memoryPoints[] = {"dmgzone_fuel"};
					class Health
					{
						hitpoints = 3700;
						transferToGlobalCoef = 0;

					};
					transferToZonesNames[] = {};
					inventorySlotsCoefs[] = {};
					inventorySlots[] = {};
				};
				class Rotor1
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgzone_rotor1"};
					componentNames[] = {"dmgzone_rotor1"};
					class Health
					{
						hitpoints = 2000;
						transferToGlobalCoef = 0;

					};
					transferToZonesNames[] = {};
					inventorySlots[] = {"SIBUH1D_blade1","SIBUH1D_blade2"};
					inventorySlotsCoefs[] = {0.1,0.1};
				};
				class Rotor2
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgzone_rotor2"};
					componentNames[] = {"dmgzone_rotor2"};
					class Health
					{
						hitpoints = 2000;
						transferToGlobalCoef = 0;

					};
					transferToZonesNames[] = {};
					inventorySlots[] = {"SIBUH1D_bladem1","SIBUH1D_bladem2"};
					inventorySlotsCoefs[] = {0.1,0.1};
				};
				
			};
		};
		class AnimationSources:AnimationSources
		{
			class beam1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
			};
			class beam2
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
			};
		};
		class Crew: Crew
		{
			class Driver
			{
				actionSel = "seat_driver";
				proxyPos = "crewDriver";
				getInPos = "pos_driver";
				getInDir = "pos_driver_dir";
				isDriver = 0;	
			};
			class CoDriver
			{
				actionSel = "seat_coDriver";
				proxyPos = "crewCoDriver";
				getInPos = "pos_coDriver";
				getInDir = "pos_coDriver_dir";
				isDriver = 0;	
			};
			class Cargo1
			{
				actionSel = "seat_cargo1";
				proxyPos = "crewcargo1";
				getInPos = "pos_cargo1";
				getInDir = "pos_cargo1_dir";
			};
			class Cargo2
			{
				actionSel = "seat_cargo2";
				proxyPos = "crewcargo2";
				getInPos = "pos_cargo2";
				getInDir = "pos_cargo2_dir";
			};
			class Cargo3
			{
				actionSel = "seat_cargo3";
				proxyPos = "crewcargo3";
				getInPos = "pos_cargo3";
				getInDir = "pos_cargo3_dir";
			};
			class Cargo4
			{
				actionSel = "seat_cargo4";
				proxyPos = "crewcargo4";
				getInPos = "pos_cargo4";
				getInDir = "pos_cargo4_dir";
			};
			class Cargo5
			{
				actionSel = "seat_cargo5";
				proxyPos = "crewcargo5";
				getInPos = "pos_cargo5";
				getInDir = "pos_cargo5_dir";
			};
			class Cargo6
			{
				actionSel = "seat_cargo6";
				proxyPos = "crewcargo6";
				getInPos = "pos_cargo6";
				getInDir = "pos_cargo6_dir";
			};
			class Cargo7
			{
				actionSel = "seat_cargo7";
				proxyPos = "crewcargo7";
				getInPos = "pos_cargo7";
				getInDir = "pos_cargo7_dir";
			};
			class Cargo8
			{
				actionSel = "seat_cargo8";
				proxyPos = "crewcargo8";
				getInPos = "pos_cargo8";
				getInDir = "pos_cargo8_dir";
			};
		};

	};
	

	
	class HeliSIB_UH1D: HeliSIB_UH1D_base
	{
		scope=2;
		displayName="UH1D";
		descriptionShort="";
	};
	class HeliSIB_UH1D_clear: HeliSIB_UH1D_base
	{
		scope=2;
		displayName="UH1D";
		descriptionShort="";
	};
	
	
	

	
	class HeliSIB_UH1D_airforce: HeliSIB_UH1D_base
	{
		scope=2;
		displayName="UH1D airforce";
		descriptionShort="";
		
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_UH1D\data\Uh-1h_bo_airforce.paa","HelicopterSIB_UH1D\data\Uh-1h_do_airforce.paa"};
		class Cargo 
		{
			itemsCargoSize[] = {10,100};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};
	class HeliSIB_UH1D_airforce_clear: HeliSIB_UH1D_base
	{
		scope=2;
		displayName="UH1D airforce";
		descriptionShort="";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_UH1D\data\Uh-1h_bo_airforce.paa","HelicopterSIB_UH1D\data\Uh-1h_do_airforce.paa"};
		class Cargo
		{
			itemsCargoSize[] = {10,100};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};
	class HeliSIB_UH1D_navy: HeliSIB_UH1D_base
	{
		scope=2;
		displayName="UH1D navy";
		descriptionShort="";
		
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_UH1D\data\Uh-1h_bo_navy.paa","HelicopterSIB_UH1D\data\Uh-1h_do_navy.paa"};
		class Cargo
		{
			itemsCargoSize[] = {10,100};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};
	class HeliSIB_UH1D_navy_clear: HeliSIB_UH1D_base
	{
		scope=2;
		displayName="UH1D navy";
		descriptionShort="";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_UH1D\data\Uh-1h_bo_navy.paa","HelicopterSIB_UH1D\data\Uh-1h_do_navy.paa"};
		class Cargo
		{
			itemsCargoSize[] = {10,100};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};
	class HeliSIB_UH1D_iron: HeliSIB_UH1D_base
	{
		scope=2;
		displayName="UH1D IRON";
		descriptionShort="";
		
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_UH1D\data\Uh-1h_bo_iron.paa","HelicopterSIB_UH1D\data\Uh-1h_do_iron.paa"};
		class Cargo
		{
			itemsCargoSize[] = {10,100};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};
	class HeliSIB_UH1D_iron_clear: HeliSIB_UH1D_base
	{
		scope=2;
		displayName="UH1D IRON";
		descriptionShort="";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] ={"HelicopterSIB_UH1D\data\Uh-1h_bo_iron.paa","HelicopterSIB_UH1D\data\Uh-1h_do_iron.paa"};
		class Cargo
		{
			itemsCargoSize[] = {10,100};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};
	class HeliSIB_UH1H: HeliSIB_UH1D
	{
		scope=2;
		displayName="UH1H";
		descriptionShort="";
	};
	class HeliSIB_UH1H2: HeliSIB_UH1D_clear
	{
		scope=2;
		displayName="UH1H";
		descriptionShort="";
	};
	
};
class CfgSlots
{
	class Slot_SIBUH1D_Door_1_1
	{
		name="SIBUH1D_Door_1_1";
		displayName="Left Door";
		ghostIcon="doorfront";
	};
	class Slot_SIBUH1D_Door_2_1
	{
		name="SIBUH1D_Door_2_1";
		displayName="Right Door";
		ghostIcon="doorfront";
	};
	class Slot_SIBUH1D_Door_1_2
	{
		name="SIBUH1D_Door_1_2";
		displayName="Left Back Door";
		ghostIcon="doorrear";
	};
	class Slot_SIBUH1D_Door_2_2
	{
		name="SIBUH1D_Door_2_2";
		displayName="Right Back Door";
		ghostIcon="doorrear";
	};
	class Slot_SIBUH1D_capot
	{
		name="SIBUH1D_capot";
		displayName="Right Back Door";
		ghostIcon="doorrear";
	};
		class Slot_SIBUH1D_blade1
	{
		name="SIBUH1D_blade1";
		displayName="UH1D blade 1";
		ghostIcon="doorrear";
	};
	class Slot_SIBUH1D_blade2
	{
		name="SIBUH1D_blade2";
		displayName="UH1D blade 2";
		ghostIcon="doorrear";
	};
	class Slot_SIBUH1D_bladem1
	{
		name="SIBUH1D_bladem1";
		displayName="UH1D tail blade 1";
		ghostIcon="doorrear";
	};
	class Slot_SIBUH1D_bladem2
	{
		name="SIBUH1D_bladem2";
		displayName="UH1D tail blade 2";
		ghostIcon="doorrear";
	};
};

class CfgNonAIVehicles
{
	class ProxyVehiclePart;
	class ProxySIBUH1D_doors_driver: ProxyVehiclePart
	{
		model = "\HelicopterSIB_UH1D\SIBUH1D_doors_driver.p3d";
		inventorySlot = "SIBUH1D_Door_1_1";
	};
	class ProxySIBUH1D_doors_codriver: ProxyVehiclePart
	{
		model = "\HelicopterSIB_UH1D\SIBUH1D_doors_codriver.p3d";
		inventorySlot = "SIBUH1D_Door_2_1";
	};
	class ProxySIBUH1D_doors_cargo1: ProxyVehiclePart
	{
		model = "\HelicopterSIB_UH1D\SIBUH1D_doors_cargo1.p3d";
		inventorySlot = "SIBUH1D_Door_1_2";
	};
	class ProxySIBUH1D_doors_cargo2: ProxyVehiclePart
	{
		model = "\HelicopterSIB_UH1D\SIBUH1D_doors_cargo2.p3d";
		inventorySlot = "SIBUH1D_Door_2_2";
	};
	class ProxySIBUH1D_capot: ProxyVehiclePart
	{
		model = "\HelicopterSIB_UH1D\SIBUH1D_capot.p3d";
		inventorySlot = "SIBUH1D_capot";
	};
	class ProxySIBUH1D_blade1: ProxyVehiclePart
	{
		model = "\HelicopterSIB_UH1D\SIBUH1D_blade1.p3d";
		inventorySlot = "SIBUH1D_blade1";
	};
	class ProxySIBUH1D_blade2: ProxyVehiclePart
	{
		model = "\HelicopterSIB_UH1D\SIBUH1D_blade2.p3d";
		inventorySlot = "SIBUH1D_blade2";
	};

	class ProxySIBUH1D_bladem1: ProxyVehiclePart
	{
		model = "\HelicopterSIB_UH1D\SIBUH1D_bladem1.p3d";
		inventorySlot = "SIBUH1D_bladem1";
	};
	class ProxySIBUH1D_bladem2: ProxyVehiclePart
	{
		model = "\HelicopterSIB_UH1D\SIBUH1D_bladem2.p3d";
		inventorySlot = "SIBUH1D_bladem2";
	};

};