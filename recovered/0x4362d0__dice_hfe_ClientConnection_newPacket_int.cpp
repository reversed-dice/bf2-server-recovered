// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4362d0
namespace dice { namespace hfe {
namespace io {

class BitStream {
public:
    char _pad0[0xc];
    int m_c;   // +0xc
    char _pad1[0x38 - 0x10];
    int m_38;  // +0x38
    void clear();
};

}

class ClientConnection {
public:
    char _pad[0xe8];
    io::BitStream* m_bitStream; // +0xe8

    void newPacket(int bits);
};

void ClientConnection::newPacket(int bits)
{
    m_bitStream->clear();
    m_bitStream->m_38 = 0;
    int v = bits * 8;
    if (m_bitStream->m_c != v) {
        m_bitStream->m_c = v;
    }
}

} }
