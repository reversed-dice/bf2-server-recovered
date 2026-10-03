// FUNCTION: BF2 0x432fd0
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

class TargetDirectionEvent {
public:
    char _head[0x10];
    unsigned int f_10;
    unsigned int f_14;
    unsigned int f_18;
    unsigned int f_1c;
    unsigned int f_20;
    unsigned int f_24;
    unsigned short f_28;
    unsigned char f_2a;
    bool deSerialize(io::BitStream* stream);
};

bool TargetDirectionEvent::deSerialize(io::BitStream* stream) {
    unsigned int v = 0;
    v = 0;
    stream->readBits(&v, 16);
    f_28 = (unsigned short)v;
    v = 0;
    stream->readBits(&v, 8);
    f_2a = (unsigned char)v;
    stream->readBits(&f_10, 32);
    stream->readBits(&f_14, 32);
    stream->readBits(&f_18, 32);
    stream->readBits(&f_1c, 32);
    stream->readBits(&f_20, 32);
    stream->readBits(&f_24, 32);
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
