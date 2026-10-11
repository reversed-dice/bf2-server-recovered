// FUNCTION: BF2 0x5e1500

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

Vec3 nullVec;

io::RegistredNetworkStats Net::m_stats("TriggerableTargetNetworkable", Vec3(255.0f, 0, 0));

} }
