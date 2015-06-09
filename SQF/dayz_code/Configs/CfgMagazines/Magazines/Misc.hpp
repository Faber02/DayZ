//CZ550
class 5x_22_LR_17_HMR;
class 5Rnd_17HMR : 5x_22_LR_17_HMR
{
	model = "\dayz_equip\models\mag5rnd.p3d";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

//Lee-Enfield
class 10x_303;
class 10Rnd_303British : 10x_303
{
	model = "\dayz_equip\models\mag10rnd.p3d";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};

//Winchester 1866
class 15Rnd_W1866_Slug : CA_Magazine
{
	model = "\z\addons\dayz_communityassets\models\winammo.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_winammo_ca.paa";
	
	class ItemActions
	{
		COMBINE_MAG
	};
};