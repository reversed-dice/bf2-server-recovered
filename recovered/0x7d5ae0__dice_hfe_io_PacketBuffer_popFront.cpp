// FUNCTION: BF2 0x7d5ae0
// COMPILER: GCC 4.0
namespace dice {
namespace hfe {
namespace io {

struct Packet {
    unsigned int m_size;
    char _pad[0x1c];
};

class PacketBuffer {
public:
    int m_count;
    int _pad0;
    unsigned int m_head;
    int _pad1;
    Packet* m_data;
    char _pad2[0xc];
    unsigned int m_mask;

    bool pad1();
    bool popFront();
};

bool PacketBuffer::pad1() {
    int c = m_count;
    if (c != 0) {
        m_data[m_head].m_size = 0;
        --m_count;
        m_head = (m_head + 1) & m_mask;
        return true;
    }
    return false;
}

bool PacketBuffer::popFront() {
    int c = m_count;
    if (c != 0) {
        m_data[m_head].m_size = 0;
        --m_count;
        m_head = (m_head + 1) & m_mask;
        return true;
    }
    return false;
}

}
}
}
