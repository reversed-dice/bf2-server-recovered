// FUNCTION: BF2 0x622110
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

namespace { float* g_targetDistance = Vars::getFloat("stick-default-distance", 0.05f); }

} }
