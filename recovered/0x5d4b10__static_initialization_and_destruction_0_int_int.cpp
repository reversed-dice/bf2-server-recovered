// FUNCTION: BF2 0x5d4b10

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

io::RegistredNetworkStats Net::m_stats("RotationalBundleNetworkable", Vec3(0, 0, 255.0f));

} }
