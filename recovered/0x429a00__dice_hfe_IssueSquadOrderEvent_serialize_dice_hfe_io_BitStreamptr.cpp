// FUNCTION: BF2 0x429a00
// BF2_FLAGS: -fno-strict-aliasing
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

class IssueSquadOrderEvent {
public:
    char _head[0x10];
    unsigned char f_10;
    unsigned char f_11;
    unsigned char f_12;
    char _pad13;
    float f_14;
    float f_18;
    float f_1c;
    float f_20;
    float f_24;
    float f_28;
    float f_2c;
    float f_30;
    float f_34;
    short f_38;
    unsigned char f_3a;
    bool f_3b;

    bool serialize(io::BitStream* stream);
};

bool IssueSquadOrderEvent::serialize(io::BitStream* stream) {
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
    v = (unsigned char)f_11;
    stream->writeBits(&v, 8);
    v = (unsigned char)f_10;
    stream->writeBits(&v, 8);
    v = (unsigned char)f_12;
    stream->writeBits(&v, 8);

    if (f_38 != 0) {
        v = 1;
        stream->writeBits(&v, 1);
        v = (unsigned short)f_38;
        stream->writeBits(&v, 16);
    } else {
        v = 0;
        stream->writeBits(&v, 1);
        stream->writeBits(&f_14, 32);
        stream->writeBits(&f_20, 32);
        stream->writeBits(&f_2c, 32);
        stream->writeBits(&f_18, 32);
        stream->writeBits(&f_24, 32);
        stream->writeBits(&f_30, 32);
        stream->writeBits(&f_1c, 32);
        stream->writeBits(&f_28, 32);
        stream->writeBits(&f_34, 32);
    }

    v = (unsigned char)f_3a;
    stream->writeBits(&v, 8);
    if (f_3b) {
        v = 1;
        stream->writeBits(&v, 1);
    } else {
        v = 0;
        stream->writeBits(&v, 1);
    }

    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
