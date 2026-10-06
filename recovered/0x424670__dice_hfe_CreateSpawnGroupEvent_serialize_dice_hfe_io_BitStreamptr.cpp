// FUNCTION: BF2 0x424670
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

static inline unsigned int bitsFor(unsigned int maxv) {
    unsigned int n = 0;
    unsigned int one = 1;
    do { n++; } while (maxv > ((one << n) - 1));
    return n;
}

class CreateSpawnGroupEvent {
public:
    char _head[0x10];
    unsigned char f_10;
    char _gap_11[3];
    unsigned int f_14;
    bool f_18;
    bool f_19;
    bool f_1a;
    unsigned char f_1b;
    unsigned char f_1c;
    char _gap_1d[1];
    unsigned short f_1e;
    bool serialize(io::BitStream* stream);
};

bool CreateSpawnGroupEvent::serialize(io::BitStream* stream) {
    unsigned int nbits = 0;
    unsigned int maxv = *(unsigned int*)(g_eventReg + 0x70);
    if (maxv != 0) {
        unsigned int n = 0;
        unsigned int one = 1;
        do { n++; } while (maxv > ((one << n) - 1));
        nbits = n;
    }
    unsigned int v = ((unsigned int (*)(void*))(*(void***)this)[0x30 / 8])(this);
    stream->writeBits(&v, nbits);
    v = f_10;
    stream->writeBits(&v, 0x8);
    v = f_14;
    stream->writeBits(&v, 0x4);
    if (f_18) {
        v = 1;
        stream->writeBits(&v, 1);
    } else {
        v = 0;
        stream->writeBits(&v, 1);
    }
    if (f_19) {
        v = 1;
        stream->writeBits(&v, 1);
    } else {
        v = 0;
        stream->writeBits(&v, 1);
    }
    if (f_1a) {
        v = 1;
        stream->writeBits(&v, 1);
    } else {
        v = 0;
        stream->writeBits(&v, 1);
    }
    v = f_1b;
    stream->writeBits(&v, 0x8);
    v = f_1c;
    stream->writeBits(&v, 0x8);
    v = f_1e;
    stream->writeBits(&v, 0x10);
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
