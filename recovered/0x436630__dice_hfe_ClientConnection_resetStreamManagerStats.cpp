// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x436630
#include <vector>

namespace dice { namespace hfe {

struct StreamManagerStats {
    int stat0;
    int stat1;
    int stat2;
    int stat3;
};

class ClientConnection {
public:
    char _pad[0xc0];
    std::vector<StreamManagerStats> m_stats; // +0xc0

    void resetStreamManagerStats();
};

void ClientConnection::resetStreamManagerStats()
{
    for (unsigned int i = 0; i < m_stats.size(); ++i) {
        StreamManagerStats* s = &m_stats[i];
        s->stat0 = 0;
        s->stat1 = 0;
        s->stat2 = 0;
        s->stat3 = 0;
    }
}

} }
