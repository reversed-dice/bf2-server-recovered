// FUNCTION: BF2 0x424520
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

class CreateSpawnGroupEvent {
public:
    char _head[0x10];
    unsigned char f_10;
    char _gap_14[3];
    unsigned int f_14;
    unsigned char f_18;
    unsigned char f_19;
    unsigned char f_1a;
    unsigned char f_1b;
    unsigned char f_1c;
    char _gap_1e[1];
    unsigned short f_1e;
    bool deSerialize(io::BitStream* stream);
};

bool CreateSpawnGroupEvent::deSerialize(io::BitStream* stream) {
    unsigned int v = 0;
    v = 0;
    stream->readBits(&v, 8);
    f_10 = (unsigned char)v;
    v = 0;
    stream->readBits(&v, 4);
    f_14 = (unsigned int)v;
    v = 0;
    stream->readBits(&v, 1);
    f_18 = (v == 1);
    v = 0;
    stream->readBits(&v, 1);
    f_19 = (v == 1);
    v = 0;
    stream->readBits(&v, 1);
    f_1a = (v == 1);
    v = 0;
    stream->readBits(&v, 8);
    f_1b = (unsigned char)v;
    v = 0;
    stream->readBits(&v, 8);
    f_1c = (unsigned char)v;
    v = 0;
    stream->readBits(&v, 16);
    f_1e = (unsigned short)v;
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
