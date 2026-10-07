// FUNCTION: BF2 0x41f9e0
namespace dice { namespace hfe { namespace io {

class BitStream {
public:
    char _pad[0x20];
    unsigned char m_overflow;
    char _pad2[3];
    unsigned int m_bitsRead;
    void writeBits(const void* src, unsigned int n);
};

}

extern "C" char* g_eventReg;

class ChallengeEvent {
public:
    char _head[0x10];
    char f_10[11];
    char f_1b[16];
    unsigned char f_2b;
    bool serialize(io::BitStream* stream);
};

bool ChallengeEvent::serialize(io::BitStream* stream) {
    unsigned int nbits = 0;
    unsigned int maxv = *(unsigned int*)(*(char**)0x0108b3b0 + 0x70);
    if (maxv != 0) {
        unsigned int n = 0;
        unsigned int one = 1;
        do { n++; } while (maxv > ((one << n) - 1));
        nbits = n;
    }
    unsigned int v = ((unsigned int (*)(void*))(*(void***)this)[0x30 / 8])(this);
    stream->writeBits(&v, nbits);
    stream->writeBits(&f_10, 0x50);
    v = f_2b;
    stream->writeBits(&v, 0x8);
    stream->writeBits(f_1b, (unsigned int)f_2b << 3);
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
