// FUNCTION: BF2 0x41fb30
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

class ChallengeResponseEvent {
public:
    char _pad[0x10];
    char f_10[0x4a];
    char _pad2[2];
    int f_5c;
    int f_60;
    int f_64;

    bool deSerialize(io::BitStream* stream);
};

bool ChallengeResponseEvent::deSerialize(io::BitStream* stream) {
    memset(f_10, 0, sizeof(f_10));
    stream->readBits(f_10, 0x248);
    int v = 0;
    stream->readBits(&v, 0x20);
    f_5c = v;
    v = 0;
    stream->readBits(&v, 0x20);
    f_60 = v;
    v = 0;
    stream->readBits(&v, 1);
    int res;
    if (__builtin_expect(v == 1, 1)) {
        v = 0;
        stream->readBits(&v, 0x1f);
        res = -v;
    } else {
        v = 0;
        stream->readBits(&v, 0x1f);
        res = v;
    }
    f_64 = res;
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
