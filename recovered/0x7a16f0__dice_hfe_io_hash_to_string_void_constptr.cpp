// FUNCTION: BF2 0x7a16f0
#include <string>

namespace dice { namespace hfe { namespace io {

struct HexBuf {
    char m_buf[0x20];
    char m_term;
    HexBuf() : m_term(0) {}
};

std::string hash_to_string(void const* h)
{
    static char const hextab[17] = "0123456789abcdef";
    HexBuf buf;
    unsigned char const* p = (unsigned char const*)h;
    for (int i = 0; i < 0x10; ++i, ++p) {
        buf.m_buf[i * 2] = hextab[(*p & 0xf0) >> 4];
        buf.m_buf[i * 2 + 1] = hextab[*p & 0xf];
    }
    return std::string(buf.m_buf);
}

}}}
