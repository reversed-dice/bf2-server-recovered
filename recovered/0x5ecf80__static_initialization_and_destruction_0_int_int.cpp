// FUNCTION: BF2 0x5ecf80

#include <iostream>

namespace dice { namespace hfe {

class Vars
{
public:
	static int* getInt(char const*, int);
	static float* getFloat(char const*, float);
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

} }

namespace {

int* g_debugReplenishAnyTeam = dice::hfe::Vars::getInt("replenish-ignoreteam", 0);

struct CheckFreqRefs
{
	CheckFreqRefs()
	{
		*(float*)0x01090438 = 1.0f;
		*(float**)0x01090430 = (float*)0x01090438;
		*(float*)0x01090428 = 0.5f;
		*(float**)0x01090420 = (float*)0x01090428;
	}
};
CheckFreqRefs g_checkFreqRefs;

}
