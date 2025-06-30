#pragma once
#include <stdlib.h>
#include <string>
#include <random>

class RandomizerUtils
{
	private:

	public: 
		static void seedRandomizer(std::string seedString, std::string levelName);
		static void RegenerateSeed();
		static team_t GetClassTeamByClassname(char *npcType);
		static team_t GetClassTeamByClass(class_t npcClass);
		static int GetRandomValidWeapon();
		static bool IsValidWeaponToRandomize(int weaponId);

		static const int NUM_VALID_WEAPONS = 16;
		static const int FLYSWIM_TIMER = 10000;
		static int flyswimCheckTime;

		class WeaponInfo
		{
			public:
				int weaponIndex;
				int ammoIndex;
				int ammoAmount;
				char* iconItemName;
				char* litIconItemName;
				char* hexBackground;
				char* soundFile;

				WeaponInfo(int weaponIndex, int ammoIndex, int ammoAmount, char* iconItemName, char* litIconItemName, char* hexBackground, char* soundFile)
					: weaponIndex(weaponIndex), ammoIndex(ammoIndex), ammoAmount(ammoAmount), iconItemName(iconItemName), litIconItemName(litIconItemName), hexBackground(hexBackground), soundFile(soundFile)
				{
				}
		};
};

