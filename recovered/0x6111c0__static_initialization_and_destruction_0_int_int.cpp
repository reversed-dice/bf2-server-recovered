// FUNCTION: BF2 0x6111c0
#include <iostream>
#include <string>

namespace dice { namespace hfe {

int* rand();

namespace world {

class GenericProjectile
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

int* (*world::GenericProjectile::m_random)();

namespace {

struct MRandomInit
{
	MRandomInit() { world::GenericProjectile::m_random = rand; }
};

MRandomInit g_mRandomInit;

}

} }
