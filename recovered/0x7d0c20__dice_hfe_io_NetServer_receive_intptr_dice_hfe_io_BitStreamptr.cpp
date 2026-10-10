// FUNCTION: BF2 0x7d0c20
#include <map>

namespace dice { namespace hfe {

class Mutex {
public:
    void lock();
    void unlock();
};

namespace io {

class BitStream {
public:
    void setBuffer(unsigned char* pData, unsigned int nBits);
};

class SWConnection {
public:
    int getPacketPtrFromRecvQueue(unsigned char** pData, unsigned int* pSize);
};

class NetServer {
public:
    unsigned char _pad0[0x10];
    std::map<int, SWConnection*> m_map;             // +0x10
    std::map<int, SWConnection*>::iterator m_iter;  // +0x40
    unsigned char _pad1[0x578 - 0x48];
    Mutex m_mutex;                                  // +0x578
    int receive(int* pType, BitStream* pStream);
};

int NetServer::receive(int* pType, BitStream* pStream) {
    unsigned char* pData;
    unsigned int nSize;
    m_mutex.lock();
    int ret;
    while (m_iter != m_map.end()) {
        SWConnection* conn = m_iter->second;
        *pType = m_iter->first;
        ret = conn->getPacketPtrFromRecvQueue(&pData, &nSize);
        if (ret == 0) {
            pStream->setBuffer(pData, nSize);
            *(int*)((char*)pStream + 0x14) = 0;
            *(int*)((char*)pStream + 0x18) = 0;
            *(int*)((char*)pStream + 0x38) = 1;
            goto unlock;
        }
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

