// FUNCTION: BF2 0x5d11f0

#include <iostream>
#include <string>

namespace dice { namespace hfe {

class Vec3
{
public:
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

io::RegistredNetworkStats Net::m_stats("KitObjectNetworkable", Vec3(120.0f, 10.0f, 120.0f));

} }
