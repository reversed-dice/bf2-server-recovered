// FUNCTION: BF2 0x433ca0
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

class UnlockEvent {
public:
    char _head[0x10];
    unsigned int f_10;
    unsigned int f_14;
    unsigned int f_18[2][7];
    bool deSerialize(io::BitStream* stream);
};

static inline unsigned int bitsFor(unsigned int maxv) {
    unsigned int n = 0;
    do {
        n++;
    } while (n != maxv);
    return n;
}

bool UnlockEvent::deSerialize(io::BitStream* stream) {
    unsigned int b = bitsFor(2);
    unsigned int v = 0;
    stream->readBits(&v, b);
    f_10 = v;
    v = 0;
    stream->readBits(&v, 8);
    f_14 = v;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 7; ++j) {
            v = 0;
            stream->readBits(&v, 4);
            f_18[i][j] = v;
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
