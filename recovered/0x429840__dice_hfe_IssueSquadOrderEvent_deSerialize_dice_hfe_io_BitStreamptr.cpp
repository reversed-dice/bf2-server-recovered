// FUNCTION: BF2 0x429840
// BF2_FLAGS: -fno-strict-aliasing
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

    bool deSerialize(io::BitStream* stream);
};

bool IssueSquadOrderEvent::deSerialize(io::BitStream* stream) {
    unsigned int v = 0;
    stream->readBits(&v, 8);
    f_11 = (unsigned char)v;
    v = 0;
    stream->readBits(&v, 8);
    f_10 = (unsigned char)v;
    v = 0;
    stream->readBits(&v, 8);
    f_12 = (unsigned char)v;
    v = 0;
    stream->readBits(&v, 1);
    if (__builtin_expect(v == 1, 1)) {
        v = 0;
        stream->readBits(&v, 16);
        f_38 = (short)v;
    } else {
        f_38 = 0;
        stream->readBits(&f_14, 32);
        stream->readBits(&f_20, 32);
        stream->readBits(&f_2c, 32);
        stream->readBits(&f_18, 32);
        stream->readBits(&f_24, 32);
        stream->readBits(&f_30, 32);
        stream->readBits(&f_1c, 32);
        stream->readBits(&f_28, 32);
        stream->readBits(&f_34, 32);
    }
    v = 0;
    stream->readBits(&v, 8);
    f_3a = (unsigned char)v;
    v = 0;
    stream->readBits(&v, 1);
    f_3b = (v == 1);

    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
