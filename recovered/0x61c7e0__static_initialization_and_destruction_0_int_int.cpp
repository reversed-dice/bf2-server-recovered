// FUNCTION: BF2 0x61c7e0
#include <iostream>
#include <string>

namespace dice { namespace hfe {

class Vars
{
public:
	static float* getFloat(char const*, float);
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

float* g_detonationTriggerFreq = Vars::getFloat("weapon-detonationTriggerFreq", 0.25f);
float* g_collisionFaceOffset = Vars::getFloat("detonation-collface-offset", 0.07f);
float* g_collisionFaceSpeedMod = Vars::getFloat("detonation-collface-offset-speedmod", 0.05f);
float* g_collisionFaceSpeedModMax = Vars::getFloat("detonation-collface-offset-speedmod-max", 500.0f);
int* g_debugDetonation = Vars::getInt("weapon-detonationDebug", 0);

}

} }
