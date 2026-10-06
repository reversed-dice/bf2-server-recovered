// FUNCTION: BF2 0x42d5a0
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

class RadioMessageEvent {
public:
    char _head[0x10];
    unsigned char f_10;
    unsigned char f_11;
    unsigned char f_12;
    unsigned char f_13;
    unsigned int f_14;
    unsigned int f_18;
    bool serialize(io::BitStream* stream);
};

bool RadioMessageEvent::serialize(io::BitStream* stream) {
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
    v = f_11;
    stream->writeBits(&v, 0x8);
    v = f_12;
    stream->writeBits(&v, 0x2);
    v = f_13;
    stream->writeBits(&v, 0x8);
    {
        unsigned int b = bitsFor(16);
        v = f_14;
        stream->writeBits(&v, b);
    }
    {
        unsigned int b = bitsFor(4);
        v = f_18;
        stream->writeBits(&v, b);
    }
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
