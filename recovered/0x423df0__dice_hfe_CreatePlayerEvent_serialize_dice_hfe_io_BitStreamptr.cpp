// FUNCTION: BF2 0x423df0
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

class CreatePlayerEvent {
public:
    char _head[0x10];
    unsigned char f_10;
    unsigned char f_11;
    bool f_12;
    bool f_13;
    char f_14[32];
    unsigned char f_34;
    char _gap_35[1];
    unsigned short f_36;
    unsigned short f_38;
    bool serialize(io::BitStream* stream);
};

bool CreatePlayerEvent::serialize(io::BitStream* stream) {
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
    stream->writeBits(&v, 0x3);
    v = f_11;
    stream->writeBits(&v, 0x4);
    if (f_12) {
        v = 1;
        stream->writeBits(&v, 1);
    } else {
        v = 0;
        stream->writeBits(&v, 1);
    }
    v = f_34;
    stream->writeBits(&v, 0x8);
    v = f_36;
    stream->writeBits(&v, 0x10);
    v = f_38;
    stream->writeBits(&v, 0x10);
    if (f_13) {
        v = 1;
        stream->writeBits(&v, 1);
    } else {
        v = 0;
        stream->writeBits(&v, 1);
    }
    stream->writeBits(&f_14, 0x100);
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
