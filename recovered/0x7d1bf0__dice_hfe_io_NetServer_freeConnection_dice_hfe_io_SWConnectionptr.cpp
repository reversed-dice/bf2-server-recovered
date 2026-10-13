// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7d1bf0
#include <string>
#include <ostream>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

class Mutex {};
void Mutex_lock(Mutex*);
void Mutex_unlock(Mutex*);

struct Debug_7d1bf0 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_7d1bf0(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_7d1bf0();
};

namespace io {

class SWConnection {};

class NetServer {
public:
    char _pad0[0x5a0];
    Mutex m_mutex;
    char* m_pool;
    void freeConnection(SWConnection* c);
};

void NetServer::freeConnection(SWConnection* c)
{
    Mutex* m = &m_mutex;
    Mutex_lock(m);
    char* pool = m_pool;
    for (unsigned long i = 0; i != 0x200; i += 8) {
        SWConnection** slot = (SWConnection**)(pool + i);
        if (*slot == 0) {
            *slot = c;
            Mutex_unlock(m);
            return;
        }
    }
    Debug_7d1bf0(6, std::string("IO/Network/ProtocolLayer/NetServer.cpp"), 0xec,
                 std::string(&DAT_00bb25f1)).os
        << "broken connection pool behaviour, this can't really happen";
    Mutex_unlock(m);
}

} } }
