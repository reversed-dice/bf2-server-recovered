// FUNCTION: BF2 0x423cb0
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

class CreatePlayerEvent {
public:
    char _head[0x10];
    unsigned char f_10;
    unsigned char f_11;
    unsigned char f_12;
    unsigned char f_13;
    unsigned int f_14;
    char _gap_34[28];
    unsigned char f_34;
    char _gap_36[1];
    unsigned short f_36;
    unsigned short f_38;
    bool deSerialize(io::BitStream* stream);
};

bool CreatePlayerEvent::deSerialize(io::BitStream* stream) {
    unsigned int v = 0;
    v = 0;
    stream->readBits(&v, 3);
    f_10 = (unsigned char)v;
    v = 0;
    stream->readBits(&v, 4);
    f_11 = (unsigned char)v;
    v = 0;
    stream->readBits(&v, 1);
    f_12 = (v == 1);
    v = 0;
    stream->readBits(&v, 8);
    f_34 = (unsigned char)v;
    v = 0;
    stream->readBits(&v, 16);
    f_36 = (unsigned short)v;
    v = 0;
    stream->readBits(&v, 16);
    f_38 = (unsigned short)v;
    v = 0;
    stream->readBits(&v, 1);
    f_13 = (v == 1);
    stream->readBits(&f_14, 256);
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
