// FUNCTION: BF2 0x4546f0
#include <iostream>
#include <string>

namespace dice { namespace hfe {

class Vars
{
public:
	static int* getInt(char const*, int);
};

std::string defaultSquadNames[] = {
	"Unassigned", "Alpha", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot", "Gamma",
	"Hotel", "India", "Juliet", "Kilo", "Lima", "Mike", "November", "Oscar", "Papa",
	"Quebec", "Romeo", "Sierra", "Tango", "Uniform", "Victor", "Whiskey", "Xray",
	"Yankee", "Zulu",
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

namespace {

int* g_collisionDumpAllTests = Vars::getInt("coll-dump-all-tests", 0);
int* g_packetSizeOverride = Vars::getInt("conn-packetsize-override", 0);

}

} }
