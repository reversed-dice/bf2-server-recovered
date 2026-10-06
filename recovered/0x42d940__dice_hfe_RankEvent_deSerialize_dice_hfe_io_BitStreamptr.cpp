// FUNCTION: BF2 0x42d940
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

class RankEvent {
public:
    char _head[0x10];
    int f_10;
    int f_14;
    int f_18;
    int f_1c;
    bool deSerialize(io::BitStream* stream);
};

bool RankEvent::deSerialize(io::BitStream* stream) {
    int v;
    {
        unsigned int b = bitsFor(2);
        v = 0;
        stream->readBits(&v, b);
        f_10 = v;
    }
    {
        unsigned int b = bitsFor(32);
        v = 0;
        stream->readBits(&v, b);
        f_14 = v - 1;
    }
    v = 0;
    stream->readBits(&v, 32);
    f_18 = v;
    v = 0;
    stream->readBits(&v, 8);
    f_1c = v;
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
