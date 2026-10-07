// FUNCTION: BF2 0x433d80
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

class UnlockEvent {
public:
    char _head[0x10];
    unsigned int f_10;
    unsigned int f_14;
    unsigned int f_18[2][7];
    bool serialize(io::BitStream* stream);
};

static inline unsigned int bitsFor(unsigned int maxv) {
    unsigned int n = 0;
    unsigned int one = 1;
    do { n++; } while (maxv > ((one << n) - 1));
    return n;
}

bool UnlockEvent::serialize(io::BitStream* stream) {
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
    unsigned int b = bitsFor(2);
    v = f_10;
    stream->writeBits(&v, b);
    v = f_14;
    stream->writeBits(&v, 8);
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 7; ++j) {
            v = f_18[i][j];
            stream->writeBits(&v, 4);
        }
    }
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
