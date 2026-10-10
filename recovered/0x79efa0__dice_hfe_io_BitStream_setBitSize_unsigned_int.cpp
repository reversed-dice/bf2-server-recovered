// FUNCTION: BF2 0x79efa0
#include <ostream>
#include <string>

namespace dice { namespace hfe {

enum DebugType { DEBUG_WARNING = 6, DEBUG_ASSERT = 7 };

class Debug {
public:
    Debug(DebugType type, const std::string& file, int line, const std::string& msg);
    ~Debug();
    std::ostream& stream() { return m_stream; }
    char m_pad0[0x20];
    std::ostream m_stream;
    char m_pad1[0x50];
};

namespace io {

class BitStream {
public:
    void setBitSize(unsigned int bits);

    unsigned char* m_data;          // 0x00
    unsigned int m_bufferSize;      // 0x08, bytes
    unsigned int m_maxBits;         // 0x0c
    bool m_ownsBuffer;              // 0x10
    char _pad11[3];
    unsigned int m_readPos;         // 0x14
    unsigned int m_writePos;        // 0x18
    unsigned int m_bitsUsed;        // 0x1c
};

void BitStream::setBitSize(unsigned int bits)
{
    if (m_bufferSize * 8 < bits) {
        Debug(DEBUG_WARNING, std::string("IO/BitStream.cpp"), 0x15a, std::string(""))
            .stream() << "Invalid size set";
    } else {
        m_bitsUsed = bits;
    }
}

} } }
