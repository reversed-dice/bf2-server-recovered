// FUNCTION: BF2 0x4218a0
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

class CommanderEvent {
public:
    char _head[0x10];
    unsigned int f_10;
    unsigned char f_14;
    short f_16;
    bool serialize(io::BitStream* stream);
};

static inline unsigned int bitsFor(unsigned int maxv) {
    unsigned int n = 0;
    do { n++; } while (n != 4);
    return n;
}

bool CommanderEvent::serialize(io::BitStream* stream) {
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
    unsigned int b = bitsFor(8);
    v = f_10;
    stream->writeBits(&v, b);
    v = f_14;
    stream->writeBits(&v, 8);
    int val = f_16;
    if (val < 0) {
        v = 1;
        stream->writeBits(&v, 1);
        val = -val;
    } else {
        v = 0;
        stream->writeBits(&v, 1);
    }
    v = val;
    stream->writeBits(&v, 0xf);
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
