// FUNCTION: BF2 0x7d0370
// BF2_FLAGS: -fno-strict-aliasing -fno-tree-loop-ivcanon
#include <vector>

namespace dice { namespace hfe { namespace io {

class BasicNetworkStats
{
public:
	BasicNetworkStats();
	virtual ~BasicNetworkStats();
	virtual void update();

private:
	std::vector<float> m_v1;     // +0x08
	std::vector<float> m_v2;     // +0x20
	std::vector<float> m_v3;     // +0x38
	std::vector<float> m_v4;     // +0x50
	float m_arr1[3];             // +0x68
	float m_arr2[3];             // +0x74
};

BasicNetworkStats::BasicNetworkStats()
{
	m_v3.resize(3, 0.0f);
	m_v4.resize(3, 0.0f);

	for (unsigned int i = 0; i < 3u; i++)
	{
		m_arr1[i] = 0.0f;
		m_arr2[i] = 0.0f;
	}
}

}}}
