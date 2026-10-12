// FUNCTION: BF2 0x5fe990
#include <iostream>

namespace dice { namespace hfe {
namespace world {

class Vec3
{
public:
	Vec3() : x(0), y(0), z(0) {}
	Vec3(float a, float b, float c) : x(a), y(b), z(c) {}
	float x, y, z;
};

Vec3 zeroVec;

Vec3 debugMeshMaterialColors[10] = {
	Vec3(0.66f, 0.66f, 0.185f),  Vec3(0.185f, 0.66f, 0.185f),
	Vec3(0.185f, 0.185f, 0.66f), Vec3(0.185f, 0.66f, 0.66f),
	Vec3(0.66f, 0.185f, 0.185f), Vec3(0.66f, 0.66f, 0.66f),
	Vec3(0.66f, 0.185f, 0.66f),  Vec3(0.185f, 0.185f, 0.185f),
	Vec3(1.0f, 1.0f, 1.0f),      Vec3(0.0f, 0.0f, 0.0f),
};

}
} }

namespace {
struct ParachuteModeRef {
	ParachuteModeRef() {
		*(int*)0x1091628 = 0;
		*(int**)0x1091620 = (int*)0x1091628;
	}
};
ParachuteModeRef g_debugParachuteMode;
}
