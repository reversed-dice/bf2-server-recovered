// FUNCTION: BF2 0x41faa0
#include <string.h>

namespace dice { namespace hfe { namespace io {

class BitStream {
public:
    char _pad[0x20];
    unsigned char m_overflow;
    char _pad2[3];
    unsigned int m_bitsRead;
    void readBits(void* dst, unsigned int n);
};

}

class ChallengeEvent {
public:
    char _head[0x10];
    char f_10[11];
    char f_1b[16];
    unsigned char f_2b;
    bool deSerialize(io::BitStream* stream);
};

bool ChallengeEvent::deSerialize(io::BitStream* stream) {
    memset(f_10, 0, sizeof(f_10));
    stream->readBits(f_10, 0x50);
    unsigned int len = 0;
    stream->readBits(&len, 8);
    f_2b = (unsigned char)len;
    stream->readBits(f_1b, (unsigned int)(unsigned char)len << 3);
    *((char*)this + f_2b + 0x1b) = 0;
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
