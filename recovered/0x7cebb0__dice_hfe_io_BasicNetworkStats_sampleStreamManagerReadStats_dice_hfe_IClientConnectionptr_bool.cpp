// FUNCTION: BF2 0x7cebb0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace io {

class IStreamManager
{
public:
	char m_pad00[0x8];
	int m_bytes;
};

class IClientConnection
{
public:
	virtual void v00();
	virtual void v01();
	virtual void v02();
	virtual IStreamManager* getStreamManager(int index);
};

class BasicNetworkStats
{
public:
	char m_pad00[0x38];
	float* m_pStreamStats;             // +0x38
	void sampleStats(IClientConnection* conn, bool reset);
};

void BasicNetworkStats::sampleStats(IClientConnection* conn, bool reset)
{
	for (int i = 0; i < 3; i++)
	{
		if (!reset)
			m_pStreamStats[i] = 0.0f;
		float before = m_pStreamStats[i];
		m_pStreamStats[i] = before + (float)conn->getStreamManager(i)->m_bytes;
		conn->getStreamManager(i)->m_bytes = 0;
	}
}

}}}
