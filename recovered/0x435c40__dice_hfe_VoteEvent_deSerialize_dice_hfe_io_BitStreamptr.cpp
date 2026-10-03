// FUNCTION: BF2 0x435c40
namespace dice { namespace hfe { namespace io {

class BitStream {
public:
    char _pad[0x20];
    unsigned char m_overflow;
    char _pad2[3];
    unsigned int m_bitsRead;
    void readBits(void* dst, unsigned int n);
    void writeBits(const void* src, unsigned int n);
};

}

class VoteEvent {
public:
    char _head[0x10];
    unsigned int f_10;
    unsigned char f_14;
    unsigned char f_15;
    unsigned char f_16;
    char _gap_18[1];
    unsigned int f_18;
    unsigned int f_1c;
    unsigned int f_20;
    unsigned char f_24;
    unsigned char f_25;
    bool deSerialize(io::BitStream* stream);
};

bool VoteEvent::deSerialize(io::BitStream* stream) {
    unsigned int v = 0;
    v = 0;
    stream->readBits(&v, 8);
    f_24 = (unsigned char)v;
    v = 0;
    stream->readBits(&v, 8);
    f_10 = (unsigned int)v;
    v = 0;
    stream->readBits(&v, 8);
    f_14 = (unsigned char)v;
    v = 0;
    stream->readBits(&v, 8);
    f_24 = (unsigned char)v;
    v = 0;
    stream->readBits(&v, 8);
    f_15 = (unsigned char)v;
    v = 0;
    stream->readBits(&v, 8);
    f_16 = (unsigned char)v;
    v = 0;
    stream->readBits(&v, 8);
    f_25 = (unsigned char)v;
    v = 0;
    stream->readBits(&v, 8);
    f_18 = (unsigned int)v;
    v = 0;
    stream->readBits(&v, 8);
    f_1c = (unsigned int)v;
    stream->readBits(&f_20, 32);
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
