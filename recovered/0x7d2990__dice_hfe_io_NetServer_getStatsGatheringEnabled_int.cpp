#include <map>
#include <string>
// FUNCTION: BF2 0x7d2990
namespace dice { namespace hfe {

class Mutex { public: void lock(); void unlock(); char _pad[0x30]; };

} }

namespace dice { namespace hfe { namespace io {

class SWConnection {
public:
    unsigned char _pad0[0x38];
    unsigned char m_0x38;
    unsigned char _pad1[0xa0 - 0x39];
    int m_ping;
    void reset();
};

class NetServer {
public:
    unsigned char _pad0[0x10];
    std::map<int, SWConnection*> m_map;
    std::map<int, SWConnection*>::iterator m_iter;
    unsigned char getStatsGatheringEnabled(int id) const;
};

unsigned char NetServer::getStatsGatheringEnabled(int id) const {
    std::map<int, SWConnection*>::const_iterator it = m_map.find(id);
    if (it == m_map.end()) return false;
    if (!it->second) return false;
    return it->second->m_0x38;
}

} } }
