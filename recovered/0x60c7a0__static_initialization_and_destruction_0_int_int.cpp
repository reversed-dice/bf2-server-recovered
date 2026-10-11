// FUNCTION: BF2 0x60c7a0

#include <iostream>

namespace dice { namespace hfe { namespace world {

class Triple
{
public:
	Triple() : a(0), b(0), c(0) {}
	~Triple();
	long long a, b, c;
};

Triple dummyVec;

class Vec3
{
public:
	Vec3() : x(0), y(0), z(0) {}
	float x, y, z;
};

Vec3 zeroVec;

} } }
