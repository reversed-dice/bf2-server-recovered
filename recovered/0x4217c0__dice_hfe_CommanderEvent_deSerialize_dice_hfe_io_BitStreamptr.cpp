// FUNCTION: BF2 0x4217c0
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

class CommanderEvent {
public:
    char _head[0x10];
    unsigned int f_10;
    unsigned char f_14;
    short f_16;
    bool deSerialize(io::BitStream* stream);
};

static inline unsigned int bitsFor(unsigned int maxv) {
    unsigned int n = 0;
    unsigned int one = 1;
    do { n++; } while (maxv > ((one << n) - 1));
    return n;
}

bool CommanderEvent::deSerialize(io::BitStream* stream) {
    unsigned int b = bitsFor(8);
    unsigned int v = 0;
    stream->readBits(&v, b);
    f_10 = v;
    v = 0;
    stream->readBits(&v, 8);
    f_14 = (unsigned char)v;
    v = 0;
    stream->readBits(&v, 1);
    short s;
    if (__builtin_expect(v == 1, 1)) {
        v = 0;
        stream->readBits(&v, 0xf);
        s = -(short)v;
    } else {
        v = 0;
        stream->readBits(&v, 0xf);
        s = (short)v;
    }
    f_16 = s;
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
