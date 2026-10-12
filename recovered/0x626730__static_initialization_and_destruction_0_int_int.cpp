// FUNCTION: BF2 0x626730
#include <iostream>
#include <string>

namespace dice { namespace hfe {

int* rand();

namespace world {

class DefaultRicochetComp
{
public:
	static int* (*m_random)();
};

}

std::string defaultSquadNames[] = {
	"Unassigned", "Alpha", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot", "Gamma",
	"Hotel", "India", "Juliet", "Kilo", "Lima", "Mike", "November", "Oscar", "Papa",
	"Quebec", "Romeo", "Sierra", "Tango", "Uniform", "Victor", "Whiskey", "Xray",
	"Yankee", "Zulu",
};

int* (*world::DefaultRicochetComp::m_random)();

namespace {

struct MRandomInit
{
	MRandomInit() { world::DefaultRicochetComp::m_random = rand; }
};

MRandomInit g_mRandomInit;

}

} }
