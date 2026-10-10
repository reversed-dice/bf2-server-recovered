// FUNCTION: BF2 0x7d5570
#include <map>

namespace dice { namespace hfe { namespace io {

class Mutex {
public:
    void lock();
    void unlock();
};

class SWConnection {
public:
    bool getPacketDeliveryStatus(bool& b);
};

class NetServer {
public:
    int getPacketDeliveryStatus(int id, bool& b);
    char m_pad0[0x10];
    std::map<int, SWConnection*> m_connections;
    char m_pad1[0x578 - 0x40];
    Mutex m_mutex;
};

int NetServer::getPacketDeliveryStatus(int id, bool& b)
{
    int r = 0;
    std::map<int, SWConnection*>::iterator it = this->m_connections.find(id);
    if (it != this->m_connections.end()) {
        SWConnection* conn = it->second;
        if (conn != 0) {
            this->m_mutex.lock();
            r = conn->getPacketDeliveryStatus(b);
            this->m_mutex.unlock();
        }
    }
    return r;
}

}}}
