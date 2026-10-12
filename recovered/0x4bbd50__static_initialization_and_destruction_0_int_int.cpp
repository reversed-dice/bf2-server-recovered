// FUNCTION: BF2 0x4bbd50
#include <iostream>

namespace dice { namespace hfe {

class Vars
{
public:
	static float* getFloat(char const*, float);
	static int* getInt(char const*, int);
};

int* rand();

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

float* g_terrainSpawnOffset = Vars::getFloat("spawnpoint-terrain-offset", 1.01f);
float* g_scatterMinDist = Vars::getFloat("spawnpoint-scatter-mindist", 3.0f);
float* g_scatterMaxDist = Vars::getFloat("spawnpoint-scatter-maxdist", 9.0f);
int* g_findSpawnPosTestLod = Vars::getInt("spawnpoint-scatter-testlod", 2);

}

int* (*g_randPtr)();

namespace {

struct RandInit
{
	RandInit() { g_randPtr = rand; }
};

RandInit g_randInit;

}

} }
