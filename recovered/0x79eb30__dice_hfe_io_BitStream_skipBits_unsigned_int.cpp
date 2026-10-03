// FUNCTION: BF2 0x79eb30
namespace dice { namespace hfe { namespace io {

class BitStream {
public:
    bool skipBits(unsigned int bits);
    char _pad0[0x8];
    unsigned int m_bufferSize;
    unsigned int m_maxBits;
    char _pad10[0x4];
    unsigned int m_readPos;
    unsigned int m_writePos;
    unsigned int m_bitsUsed;
    bool m_error;
    int m_errorCode;
    char _pad28[0x10];
    int m_mode;
};

bool BitStream::skipBits(unsigned int bits)
{
    if (!bits)
        return false;
    if (m_mode == 1) {
        unsigned int pos = bits + m_readPos;
        if (pos > m_bitsUsed) {
            m_error = true;
            m_errorCode = 2;
            return false;
        }
        m_readPos = pos;
        return true;
    }
    unsigned int pos = bits + m_writePos;
    if (pos > m_bufferSize * 8 || (m_maxBits && pos > m_maxBits)) {
        m_error = true;
        m_errorCode = 1;
        return false;
    }
    m_writePos = pos;
    if (pos > m_bitsUsed)
        m_bitsUsed = pos;
    return true;
}

} } }
