// FUNCTION: BF2 0x623610
#include <iostream>
#include <string>

namespace dice { namespace hfe {

class Vars
{
public:
	static float* getFloat(char const*, float);
};

std::string defaultSquadNames[] = {
	"Unassigned", "Alpha", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot", "Gamma",
	"Hotel", "India", "Juliet", "Kilo", "Lima", "Mike", "November", "Oscar", "Papa",
	"Quebec", "Romeo", "Sierra", "Tango", "Uniform", "Victor", "Whiskey", "Xray",
	"Yankee", "Zulu",
};

namespace world {

float* g_predictionFactor = Vars::getFloat("follow-component-prediction-factor", 0.1f);
float* g_targetYOffset = Vars::getFloat("targetYOffset", 0.0f);
float* g_maxDistKillMissile = Vars::getFloat("maxDistKillMissile", 15.0f);

}

} }
