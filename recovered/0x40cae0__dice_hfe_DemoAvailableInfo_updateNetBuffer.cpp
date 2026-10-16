// FUNCTION: BF2 0x40cae0
// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x40cae0
#include <vector>
#include <string>

namespace dice {
namespace hfe {
namespace io {

class BitStream {
public:
    char _pad[0x14];
    unsigned int m_val24;
    unsigned int m_val28;
    char _pad2c[0x1c];
    unsigned int m_state48;
    char _tail[0x2c];

    BitStream(unsigned char* buf, unsigned int size);
    ~BitStream();
    void writeBits(const void* src, unsigned int count);
};

} // namespace io

struct DemoAvailableInfo {
    std::string m_str0;
    std::string m_str8;
    bool m_flag10;
    std::vector<unsigned char> m_buffer;

    void updateNetBuffer();
};

void DemoAvailableInfo::updateNetBuffer()
{
    std::vector<unsigned char>* pbuf = &m_buffer;
    pbuf->resize(0x16f, 0);

    unsigned int bits;
    io::BitStream bs(&m_buffer[0], m_buffer.size());

    unsigned int len0 = 0x100;
    size_t s0 = m_str0.size();
    if (s0 < 0x100) len0 = s0;
    bits = len0;
    bs.writeBits(&bits, 8);
    for (unsigned int i = 0; i < len0; ++i) {
        bits = (signed char)m_str0[i];
        bs.writeBits(&bits, 8);
    }

    unsigned int len8 = 0x100;
    size_t s8 = m_str8.size();
    if (s8 < 0x100) len8 = s8;
    bits = len8;
    bs.writeBits(&bits, 8);
    for (unsigned int i = 0; i < len8; ++i) {
        bits = (signed char)m_str8[i];
        bs.writeBits(&bits, 8);
    }

    unsigned int bitPos = (bs.m_state48 == 1) ? bs.m_val24 : bs.m_val28;
    unsigned int byteLen = (bitPos + 7) >> 3;

    pbuf->resize(byteLen, 0);
    m_flag10 = false;
}

} // namespace hfe
} // namespace dice
