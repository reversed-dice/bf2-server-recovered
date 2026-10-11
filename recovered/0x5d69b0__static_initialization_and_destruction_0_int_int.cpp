// FUNCTION: BF2 0x5d69b0

#include <iostream>
#include <string>

namespace dice { namespace hfe {

class Vec3
{
public:
	Vec3() : x(0), y(0), z(0) {}
	Vec3(float a, float b, float c) : x(a), y(b), z(c) {}
	float x, y, z;
};

class Vars
{
public:
	static int* getInt(char const* name, int def);
	static float* getFloat(char const* name, float def);
};

namespace io {

class RegistredNetworkStats
{
public:
	RegistredNetworkStats(std::string const& name, Vec3 const& v);
	~RegistredNetworkStats();
};

}

class Net {
public:
	static io::RegistredNetworkStats m_stats;
};

Vec3 nullVec;

io::RegistredNetworkStats Net::m_stats("SimpleObjectNetworkable", Vec3(20.0f, 200.0f, 50.0f));


} }
