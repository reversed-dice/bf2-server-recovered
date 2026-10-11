// FUNCTION: BF2 0x4969d0

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

std::string defaultSquadNames[] = {
	"Unassigned",
	"Alpha",
	"Bravo",
	"Charlie",
	"Delta",
	"Echo",
	"Foxtrot",
	"Gamma",
	"Hotel",
	"India",
	"Juliet",
	"Kilo",
	"Lima",
	"Mike",
	"November",
	"Oscar",
	"Papa",
	"Quebec",
	"Romeo",
	"Sierra",
	"Tango",
	"Uniform",
	"Victor",
	"Whiskey",
	"Xray",
	"Yankee",
	"Zulu",
};

Vec3 nullVec;

io::RegistredNetworkStats Net::m_stats("Player", Vec3(240.0f, 100.0f, 100.0f));

} }
