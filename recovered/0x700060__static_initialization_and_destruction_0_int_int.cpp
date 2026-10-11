// FUNCTION: BF2 0x700060

#include <iostream>

namespace dice { namespace hfe { class Vars { public: static int* getInt(char const*, int); }; } }

namespace {

int* hc_freeze = dice::hfe::Vars::getInt("hc_freeze", 0);

}

namespace dice { namespace hfe { namespace world {

class Vec3
{
public:
	Vec3() : x(0), y(0), z(0) {}
	float x, y, z;
};

Vec3 g_freezedPlayerPosition;
Vec3 g_freezedPlayerDirection;

} } }
