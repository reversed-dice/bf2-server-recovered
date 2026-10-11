// FUNCTION: BF2 0x7cef60
#include <map>

namespace dice { namespace hfe { namespace io {

struct Color { float x, y, z; };

class NetworkStats
{
public:
	char m_pad00[0x10];
	Color m_color;   // +0x10
};

class RegistredNetworkStats
{
public:
	std::map<unsigned char, NetworkStats*> m_stats;
	static RegistredNetworkStats* getNetworkStatsMap();
};

typedef std::map<unsigned char, NetworkStats*> StatsMap;

int getNetworkableColors(unsigned int* colors)
{
	StatsMap& stats = RegistredNetworkStats::getNetworkStatsMap()->m_stats;

	int index = 0;
	StatsMap::iterator end = stats.end();
	for (StatsMap::iterator it = stats.begin(); it != end; ++it)
	{
		NetworkStats* s = it->second;
	Color& c = s->m_color;
	colors[index] = (((int)c.x & 0xff) << 16) | (((int)c.y & 0xff) << 8) | ((int)c.z & 0xff) | 0xff000000;
	++index;
	}

	return 1;
}

}}}
