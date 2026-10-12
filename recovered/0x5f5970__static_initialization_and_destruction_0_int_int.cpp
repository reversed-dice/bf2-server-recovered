// FUNCTION: BF2 0x5f5970
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

int* g_localPrediction = Vars::getInt("local-prediction", 0);
int* g_localPredictionConfirmationTime = Vars::getInt("local-prediction-confirmtime", 30);

}

} }
