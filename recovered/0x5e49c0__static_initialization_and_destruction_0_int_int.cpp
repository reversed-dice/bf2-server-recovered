// FUNCTION: BF2 0x5e49c0
#include <iostream>
#include <string>

namespace dice { namespace hfe {

class Vars
{
public:
	static int* getInt(char const*, int);
};

namespace world {

class Vec3
{
public:
	Vec3() : x(0), y(0), z(0) {}
	float x, y, z;
};

Vec3 zeroVec;

}

std::string defaultSquadNames[] = {
	"Unassigned", "Alpha", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot", "Gamma",
	"Hotel", "India", "Juliet", "Kilo", "Lima", "Mike", "November", "Oscar", "Papa",
	"Quebec", "Romeo", "Sierra", "Tango", "Uniform", "Victor", "Whiskey", "Xray",
	"Yankee", "Zulu",
};

namespace {

int* g_acceptDelayTicks = Vars::getInt("wp-delay-ticks", 15);
int* g_acceptDelayTicksReloadFactor = Vars::getInt("wp-delay-reloadfactor", 1);
int* g_acceptDelayTicksPingFactor = Vars::getInt("wp-delay-pingfactor", 2);

}

namespace world {

class Triple
{
public:
	Triple() : a(0), b(0), c(0) {}
	~Triple();
	long long a, b, c;
};

Triple dummyVec;

}

} }
