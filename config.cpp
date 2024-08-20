class CfgPatches
{
    class MushroomTea
    {
        units[] = {"MushroomTeaPot"};
        requiredVersion = 0.1;
        requiredAddons[] = {};
    };
};

class CfgMods
{
	class MushroomTea
	{
		dir = "shroomtea";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "shroomtea";
		credits = "Chasir01";
		author = "Chasir01";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
        class defs
        {
            class worldScriptModule
            {
                files[] = {"shroomtea\4_world"};
            };
        };
	};
};

class CfgVehicles
{
    class Pot;
    class MushroomTeaPot_base: Pot
    {
        scope = 2;
        displayName = "Mushroom Tea Kettle";
        descriptionShort = "A kettle for mushroom tea.";
        model = "\shroomtea\assets\MushroomTea.p3d";
        weight = 1000;
        itemSize[] = {3,2};
        itemsCargoSize[] = {0,0};
        inventorySlot[] = {"CookingEquipment","DirectCookingA","DirectCookingB","DirectCookingC"};
        stackedRandom = 0;
        canBeDigged = 1;
        allowOwnedCargoManipulation = 1;
        varLiquidTypeInit = 512;
        liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536 + 131072 + 262144 + 524288 + 1048576 + 2097152 + 4194304 + 8388608 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
        destroyOnEmpty = 0;
        varQuantityDestroyOnMin = 0;
        varQuantityInit = 0;
        varQuantityMin = 0;
        varQuantityImax = 500;
        varTemperatureMax = 200;
        repairableWithKits[] = {10};
        repairCosts[] = {25.0};
            class AnimationSources
            {
                class handleRotate
                {
                    source = "user";
                    animPeriod = 0.01;
                    initPhase = 1;
                };
            };
            soundImpactType = "metal";
            class AnimEvents
            {
                class SoundWeapon
                {
                    class pickUpPotLight
                    {
                        soundSet = "pickUpPotLight_SoundSet";
                        id = 796;
                    };
                    class pickUpPot
                    {
                        soundSet = "pickUpPot_SoundSet";
                        id = 797;
                    };
                    class drop
                    {
                        soundset = "pot_drop_SoundSet";
                        id = 898;
                    };
                };
            };
    };

	class Bottle_Base;
    class MushroomTeaPot_CupBase: Bottle_Base
    {
        scope = 2;
        displayName = "Mushroom Tea";
        descriptionShort = "A 'cup' of mushroom tea. You should not have this.";
        model = "\shroomtea\assets\stteacan.p3d";
        weight = 500;
        itemSize[] = {1,2};
        itemsCargoSize[] = {0,0};
        inventorySlot[] = {"CookingEquipment","DirectCookingA","DirectCookingB","DirectCookingC"};
        stackedRandom = 0;
        canBeDigged = 1;
        allowOwnedCargoManipulation = 1;
        varLiquidTypeInit = 512;
        liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536 + 131072 + 262144 + 524288 + 1048576 + 2097152 + 4194304 + 8388608 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
        destroyOnEmpty = 1;
        varQuantityDestroyOnMin = 1;
        varQuantityInit = 500;
        varQuantityMin = 0;
        varQuantityImax = 500;
    };
    class MushroomTeaPot_Agaricus: MushroomTeaPot_CupBase
    {
        displayName = "Mushroom Tea";
        descriptionShort = "A 'cup' of mushroom tea. (TESTING Agaricus - Field Mushroom)";
        model = "\shroomtea\assets\stteacan.p3d";
        itemSize[] = {1,2};
        itemsCargoSize[] = {0,0};
        varLiquidTypeInit = 131072;
        destroyOnEmpty = 1;
        varQuantityDestroyOnMin = 1;
        varQuantityInit = 500;
        varQuantityMin = 0;
        varQuantityImax = 500;
    };

    class MushroomTeaPot_Boletus: MushroomTeaPot_CupBase
    {
        displayName = "Mushroom Tea";
        descriptionShort = "A 'cup'of mushroom tea. (TESTING Boletus - Penny Bun)";
        model = "\shroomtea\assets\stteacan.p3d";
        itemSize[] = {1,2};
        itemsCargoSize[] = {0,0};
        varLiquidTypeInit = 262144;
        destroyOnEmpty = 1;
        varQuantityDestroyOnMin = 1;
        varQuantityInit = 500;
        varQuantityMin = 0;
        varQuantityImax = 500;
    };

    class MushroomTeaPot_Macrolepiota: MushroomTeaPot_CupBase
    {
        displayName = "Mushroom Tea";
        descriptionShort = "A 'cup' of mushroom tea. (TESTING Macrolepiota - Parasol Mushroom)";
        model = "\shroomtea\assets\stteacan.p3d";
        itemSize[] = {1,2};
        itemsCargoSize[] = {0,0};
        varLiquidTypeInit = 524288;
        destroyOnEmpty = 1;
        varQuantityDestroyOnMin = 1;
        varQuantityInit = 500;
        varQuantityMin = 0;
        varQuantityImax = 500;
    };

    class MushroomTeaPot_Auricularia: MushroomTeaPot_CupBase
    {
        displayName = "Mushroom Tea";
        descriptionShort = "A 'cup' of mushroom tea. (TESTING Auricularia - Wood Ear)";
        model = "\shroomtea\assets\stteacan.p3d";
        itemSize[] = {1,2};
        itemsCargoSize[] = {0,0};
        varLiquidTypeInit = 1048576;
        destroyOnEmpty = 1;
        varQuantityDestroyOnMin = 1;
        varQuantityInit = 500;
        varQuantityMin = 0;
        varQuantityMax = 500;
    };

    class MushroomTeaPot_Psilocybe: MushroomTeaPot_CupBase
    {
        displayName = "Mushroom Tea";
        descriptionShort = "A 'cup' of mushroom tea. (TESTING Psilocybe - Liberty Cap)";
        model = "\shroomtea\assets\stteacan.p3d";
        itemSize[] = {1,2};
        itemsCargoSize[] = {0,0};
        varLiquidTypeInit =  2097152;
        destroyOnEmpty = 1;
        varQuantityDestroyOnMin = 1;
        varQuantityInit = 500;
        varQuantityMin = 0;
        varQuantityImax = 500;
    };

    class MushroomTeaPot_Lactarius: MushroomTeaPot_CupBase
    {
        displayName = "Mushroom Tea";
        descriptionShort = "A 'cup' of mushroom tea. (TESTING Lactarius - Red Pine Mushroom)";
        model = "\shroomtea\assets\stteacan.p3d";
        itemSize[] = {1,2};
        itemsCargoSize[] = {0,0};
        varLiquidTypeInit = 4194304;
        destroyOnEmpty = 1;
        varQuantityDestroyOnMin = 1;
        varQuantityInit = 500;
        varQuantityMin = 0;
        varQuantityImax = 500;
    };

    class MushroomTeaPot_Amanita: MushroomTeaPot_CupBase
    {
        displayName = "Mushroom Tea";
        descriptionShort = "A 'cup' of mushroom tea. (TESTING Amanita - Fly Amanita)";
        model = "\shroomtea\assets\stteacan.p3d";
        itemSize[] = {1,2};
        itemsCargoSize[] = {0,0};
        varLiquidTypeInit =  8388608;
        destroyOnEmpty = 1;
        varQuantityDestroyOnMin = 1;
        varQuantityInit = 500;
        varQuantityMin = 0;
        varQuantityImax = 500;
    };
    //not implemented
/*
    class MushroomTeaPot_Pleurotus: MushroomTeaPot_CupBase
    {
        displayName = "Mushroom Tea";
        descriptionShort = "A 'cup' of mushroom tea. (TESTING Pleurotus - Oyster Mushroom)";
        model = "\shroomtea\assets\stteacan.p3d";
        itemSize[] = {1,2};
        itemsCargoSize[] = {0,0};
        varLiquidTypeInit =  16777216;
        destroyOnEmpty = 1;
        varQuantityDestroyOnMin = 1;
        varQuantityInit = 500;
        varQuantityMin = 0;
        varQuantityImax = 500;
    };
    */
};

class cfgLiquidDefinitions
{
class AgaricusMushroomTea
    {
     type = 131072;
    displayName = "Shroom Tea";
    flammability = 0;
    class Nutrition
	    {
        fullnessIndex = 1;
        energy = 75;
        water = 200;
        nutritionalIndex = 75;
        toxicity = -10;
        };
	};
class BoletusMushroomTea
    {
    type = 262144;
    displayName = "ShroomTea";
    flammability = -1;
    class Nutrition
        {
        fullnessIndex = 1;
        energy = 100;
        water = 800;
        nutritionalIndex = 25;
        toxicity = -10;
        };
	};
class MacrolepiotaMushroomTea
    {
    type = 524288;
    displayName = "Tea";
    flammability = -10;
    class Nutrition
        {
	    fullnessIndex = 1;
        energy = 100;
        water = 200;
        nutritionalIndex = 10;
        toxicity = -10;
        };
	};
class AuriculariaMushroomTea
    {
    type = 1048576;
    displayName = "Mushroom Tea";
    flammability = 0;
    class Nutrition
        {
        fullnessIndex = 0;
        energy = 100;
        water = 200;
        nutritionalIndex = 75;
        toxicity = -10;
        };
	};
class PsilocybeMushroomTea //Make PPERCameraNV.c Connect to this liquid.
    {
    type = 2097152;
    displayName = "MushroomTea";
    flammability = 0;
    class Nutrition
        {
        fullnessIndex = 0.1;
        energy = 25;
        water = 200;
        nutritionalIndex = 75;
	    toxicity = 10;
        };
	};
class LactariusMushroomTea
    {
    type = 4194304;
    displayName = "SHROOMTEA";
    flammability = 0;
    class Nutrition
        {
        fullnessIndex = 2;
        energy = 75;
	    water = 200;
	    nutritionalIndex = 175;
        toxicity = -10;
        };
	};
class AmanitaMushroomTea
    {
    type = 8388608;
    displayName = "shroomTea7";
    flammability = 0;
    class Nutrition
        {
	    fullnessIndex = 0.5;
	    energy = 50;
        water = 200;
        nutritionalIndex = 75;
        toxicity = 25;
        };
	};
    //not implemented
/*
    class PleurotusMushroomTea
    {
    type = 16777216;
    displayName = "Oyster Mushroom Tea";
    flammability = 0;
    class Nutrition
        {
	    fullnessIndex = 1;
	    energy = 50;
        water = 200;
        nutritionalIndex = 75;
        toxicity = -10;
        };
	};
    */
};