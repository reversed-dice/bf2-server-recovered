// FUNCTION: BF2 0x7d6370
// dice_hfe_io_PacketFilter_AgentData_dtor_AgentData (0x7d6320)
#include <list>
#include <cstdlib>

struct Poly { virtual ~Poly(); };
struct StoredPacket { void* data; };

class AgentData {
public:
    Poly* m_obj;
    std::list<StoredPacket> m_packets;
    ~AgentData();
};

AgentData::~AgentData()
{
    for (std::list<StoredPacket>::iterator i = m_packets.begin();
         i != m_packets.end(); ++i)
        free(i->data);
    delete m_obj;
}

// REVERSED_FUNCTION: dice_hfe_io_PacketFilter_AgentData_dtor_AgentData (0x7d6320)
