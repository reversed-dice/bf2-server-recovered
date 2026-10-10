// FUNCTION: BF2 0x79e920
namespace dice { namespace hfe { namespace io {

class BitStream {
public:
    bool readBits(void* dst, unsigned int n);
    bool writeBits(const void* src, unsigned int n);

    unsigned char* m_data;          // 0x00
    unsigned int m_bufferSize;      // 0x08, bytes
    unsigned int m_maxBits;         // 0x0c, 0 = no limit
    bool m_ownsBuffer;              // 0x10
    char _pad11[3];
    unsigned int m_readPos;         // 0x14, bits
    unsigned int m_writePos;        // 0x18, bits
    unsigned int m_bitsUsed;        // 0x1c, bits
    bool m_error;                   // 0x20
    char _pad21[3];
    int m_errorCode;                // 0x24
};

bool BitStream::readBits(void* dst, unsigned int n)
{
    unsigned char* out = (unsigned char*)dst;
    if (!out) return false;
    if (!n) return false;
    unsigned int pos = m_readPos;
    if (n + pos > m_bitsUsed) { m_error = true; m_errorCode = 2; return false; }
    const unsigned char* in = m_data + (pos >> 3);
    unsigned int sh = pos & 7;
    int left = n;
    unsigned int inv = 8 - sh;
    unsigned char cur = *in;
    for (++in; left > 7; ++in, left -= 8) { unsigned char nx = *in; *out++ = (unsigned char)((cur >> sh) | (nx << inv)); cur = nx; }
    if (left > 0) *out = (unsigned char)(((cur >> sh) | (*in << inv)) & ((1 << left) - 1));
    m_readPos += n;
    return true;
}

} } }
