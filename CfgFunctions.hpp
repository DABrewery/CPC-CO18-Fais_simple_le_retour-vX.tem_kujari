class CfgFunctions
{
	
	class int
	{
		class spawn_zone
		{
			file="functions\spawn_zone";
			class spawnFixedWeapons {};
			class spawnGarnisons {};
			class spawnRdmPatrols {};
			class spawnMecha {};
		};

		class fleeing
		{
			file="functions\fleeing";
			class doFleeing {};
			class fleeing {};
		};

		class logistic
		{
			file="functions\logistic";
			class SSSCargo {};
			class refuelTank {};
			class addCargo {};
		};
		
		class misc
		{
			file="functions\misc";
			class probaChallenge {};
			class findClearZoneInArea {};
			class isInLoadout {};
			class skipTimeWithFog {};
			class findUnloadPos {};
			class sideGroupsKnowPlayer {};
		};

		class gdc
		{
			file="functions\gdc";
			class chooseSpawnPos {};
			class secureStringArrayToArray {};
		};
	
	};

};