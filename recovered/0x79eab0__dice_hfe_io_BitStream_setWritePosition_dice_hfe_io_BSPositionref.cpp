// FUNCTION: BF2 0x79eab0
namespace dice { namespace hfe { namespace io {

struct BSPosition {
    int m_0;
    unsigned int m_pos;     // +4
    int m_8;
    int m_mode;             // +0xc
};

class BitStream {
public:
    bool setWritePosition(BSPosition& p);
    void getPosition(BSPosition& out) const;
    bool setPosition(const BSPosition& p);

    unsigned char* m_data;          // 0x00
    unsigned int m_bufferSize;      // 0x08
    unsigned int m_maxBits;         // 0x0c
    bool m_ownsBuffer;              // 0x10
    char _pad11[3];
    unsigned int m_readPos;         // 0x14
    unsigned int m_writePos;        // 0x18
    unsigned int m_bitsUsed;        // 0x1c
    bool m_error;                   // 0x20
    char _pad21[3];
    int m_errorCode;                // 0x24
    BSPosition m_savedPos;          // 0x28
    int m_mode;                     // 0x38
    char _pad3c[0x18];
    bool m_saved;                   // 0x54
};

inline void BitStream::getPosition(BSPosition& out) const
{
    if (m_mode == 1) { out.m_pos = m_readPos; out.m_mode = m_mode; }
    else { out.m_pos = m_writePos; out.m_mode = m_mode; }
}

inline bool BitStream::setPosition(const BSPosition& p)
{
    if (m_mode == 1) {
        if (p.m_pos <= m_bitsUsed) { m_readPos = p.m_pos; m_mode = p.m_mode; return true; }
    } else if (p.m_pos <= m_bitsUsed) {
        m_writePos = p.m_pos; m_mode = p.m_mode; return true;
    }
    return false;
}

bool BitStream::setWritePosition(BSPosition& p)
{
    m_saved = true;
    getPosition(m_savedPos);
    return setPosition(p);
}

} } }
