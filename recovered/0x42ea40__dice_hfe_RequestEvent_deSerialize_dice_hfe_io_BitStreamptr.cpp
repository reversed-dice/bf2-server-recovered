// FUNCTION: BF2 0x42ea40
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

static inline unsigned int bitsFor(unsigned int maxv) {
    unsigned int n = 0;
    unsigned int one = 1;
    do { n++; } while (maxv > ((one << n) - 1));
    return n;
}

class RequestEvent {
public:
    char _head[0x10];
    unsigned int f_10;
    unsigned char f_14;
    unsigned char f_15;
    bool deSerialize(io::BitStream* stream);
};

bool RequestEvent::deSerialize(io::BitStream* stream) {
    unsigned int v;
    v = 0;
    stream->readBits(&v, 8);
    f_15 = (unsigned char)v;
    v = 0;
    stream->readBits(&v, 8);
    f_14 = (unsigned char)v;
    {
        unsigned int b = bitsFor(4);
        v = 0;
        stream->readBits(&v, b);
        f_10 = v;
    }
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
