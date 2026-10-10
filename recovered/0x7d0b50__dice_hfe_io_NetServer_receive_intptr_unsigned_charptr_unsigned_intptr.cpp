// FUNCTION: BF2 0x7d0b50
// BF2_FLAGS: -fno-strict-aliasing
#include <map>

namespace dice { namespace hfe {

class Mutex {
public:
    void lock();
    void unlock();
};

namespace io {

class SWConnection {
public:
    int getPacketFromRecvQueue(unsigned char* pData, unsigned int* pLen);
};

class NetServer {
public:
    unsigned char _pad0[0x10];
    std::map<int, SWConnection*> m_map;             // +0x10
    std::map<int, SWConnection*>::iterator m_iter;  // +0x40
    unsigned char _pad1[0x578 - 0x48];
    Mutex m_mutex;                                  // +0x578
    int receive(int* pType, unsigned char* pData, unsigned int* pLen);
};

int NetServer::receive(int* pType, unsigned char* pData, unsigned int* pLen) {
    m_mutex.lock();
    int ret;
    while (m_iter != m_map.end()) {
        SWConnection* conn = m_iter->second;
        *pType = m_iter->first;
        ret = conn->getPacketFromRecvQueue(pData, pLen);
        if (ret != 8)
            goto unlock;
        ++m_iter;
    }
    ret = 8;
    m_iter = m_map.begin();
unlock:
    m_mutex.unlock();
    return ret;
}

}}}

