// FUNCTION: BF2 0x589f60
#include <iostream>
#include <string>

namespace dice { namespace hfe {

class Vars
{
public:
	static int* getInt(char const*, int);
	static float* getFloat(char const*, float);
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
	Vec3(float a, float b, float c) : x(a), y(b), z(c) {}
	float x, y, z;
};

Vec3 debugMeshMaterialColors[10] = {
	Vec3(0.66f, 0.66f, 0.185f),  Vec3(0.185f, 0.66f, 0.185f),
	Vec3(0.185f, 0.185f, 0.66f), Vec3(0.185f, 0.66f, 0.66f),
	Vec3(0.66f, 0.185f, 0.185f), Vec3(0.66f, 0.66f, 0.66f),
	Vec3(0.66f, 0.185f, 0.66f),  Vec3(0.185f, 0.185f, 0.185f),
	Vec3(1.0f, 1.0f, 1.0f),      Vec3(0.0f, 0.0f, 0.0f),
};

int* g_skipMultipleColls = Vars::getInt("collision-skip-multcolls", 1);
int* g_outputSkips = Vars::getInt("collision-skip-multcolls-debug", 0);
float* g_skipMultipleCollsTH = Vars::getFloat("collision-skip-multcolls-th", 0.01f);

}

} }
