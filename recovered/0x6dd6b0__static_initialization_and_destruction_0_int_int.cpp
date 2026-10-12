// FUNCTION: BF2 0x6dd6b0
#include <iostream>

namespace dice { namespace hfe { namespace world {

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

} } }

namespace {

struct ConfigRefs {
	ConfigRefs() {
		*(int*)0x10a3678 = 0;
		*(int**)0x10a3670 = (int*)0x10a3678;
		*(int*)0x10a3668 = 0;
		*(int**)0x10a3660 = (int*)0x10a3668;
		*(int*)0x10a3658 = 1;
		*(int**)0x10a3650 = (int*)0x10a3658;
		*(float*)0x10a3648 = 1500.0f;
		*(float**)0x10a3640 = (float*)0x10a3648;
	}
};
ConfigRefs g_configRefs;

}
