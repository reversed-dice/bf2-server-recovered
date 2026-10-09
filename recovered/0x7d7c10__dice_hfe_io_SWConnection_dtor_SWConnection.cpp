// FUNCTION: BF2 0x7d7c10
#include <string>
#include <deque>

namespace dice { namespace hfe { namespace io {

class PacketQueue {
public:
    ~PacketQueue();
};
class PacketBuffer {
public:
    ~PacketBuffer();
};
class BitStream {
public:
    ~BitStream();
};

class SWConnection {
public:
    ~SWConnection();
    void reset();
    char m_pad0[0x8];
    void* m_8;
    char m_pad1[0x38];
    PacketQueue* m_48;
    PacketBuffer* m_50;
    BitStream* m_58;
    char m_pad2[0xB0];
    std::deque<bool> m_deque;
};

SWConnection::~SWConnection() {
    reset();
    if (m_48 != 0) {
        delete m_48;
        m_48 = 0;
    }
    if (m_50 != 0) {
        delete m_50;
        m_50 = 0;
    }
    if (m_58 != 0) {
        delete m_58;
        m_58 = 0;
    }
    if (m_8 != 0) {
        operator delete[](m_8);
        m_8 = 0;
    }
}

} } }
