// FUNCTION: BF2 0x7d54e0
#include <map>

namespace dice { namespace hfe { namespace io {

class BitStream {
public:
    unsigned char* m_data;
    char m_pad[0x14];
    int m_bitSize;
    bool m_error;
    int m_errorCode;
};

class SWConnection {
public:
    int addPacketToSendBuffer(unsigned char* data, unsigned int size, unsigned int len);
};

class NetServer {
public:
    int bufferPacket(int id, BitStream* bs, unsigned int len);
    char m_pad0[0x10];
    std::map<int, SWConnection*> m_connections;
};

int NetServer::bufferPacket(int id, BitStream* bs, unsigned int len)
{
    std::map<int, SWConnection*>::iterator it = this->m_connections.find(id);
    if (it == this->m_connections.end()) {
        return 5;
    }
    SWConnection* conn = it->second;
    if (conn == 0) {
        return 5;
    }
    unsigned int bits = bs->m_bitSize;
    unsigned int size = ((bits & 7) != 0 ? 1 : 0) + (bits >> 3);
    return conn->addPacketToSendBuffer(bs->m_data, size, len);
}

}}}
