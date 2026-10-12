// FUNCTION: BF2 0x627be0
#include <iostream>
#include <string>

namespace dice { namespace hfe {

int* rand();

namespace world {

class DefaultPenetrateComp
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

int* (*world::DefaultPenetrateComp::m_random)();

namespace {

struct MRandomInit
{
	MRandomInit() { world::DefaultPenetrateComp::m_random = rand; }
};

MRandomInit g_mRandomInit;

}

} }
