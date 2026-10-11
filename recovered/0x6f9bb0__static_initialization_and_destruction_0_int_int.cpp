// FUNCTION: BF2 0x6f9bb0

#include <iostream>

namespace dice { namespace hfe { namespace world {

class Vec3
{
public:
	Vec3(float a, float b, float c) : x(a), y(b), z(c) {}
	float x, y, z;
};

Vec3 debugMeshMaterialColors[10] = {
	Vec3(0.66f, 0.66f, 0.185f),
	Vec3(0.185f, 0.66f, 0.185f),
	Vec3(0.185f, 0.185f, 0.66f),
	Vec3(0.185f, 0.66f, 0.66f),
	Vec3(0.66f, 0.185f, 0.185f),
	Vec3(0.66f, 0.66f, 0.66f),
	Vec3(0.66f, 0.185f, 0.66f),
	Vec3(0.185f, 0.185f, 0.185f),
	Vec3(1.0f, 1.0f, 1.0f),
	Vec3(0.0f, 0.0f, 0.0f),
};

} } }

namespace dice { namespace hfe { class Vars { public: static int* getInt(char const*, int); }; } }

namespace {

int* hc_dump = dice::hfe::Vars::getInt("hc_dump", 0);

}

