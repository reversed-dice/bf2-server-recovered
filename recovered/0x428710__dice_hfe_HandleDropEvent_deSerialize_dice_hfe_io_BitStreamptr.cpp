// FUNCTION: BF2 0x428710
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

class HandleDropEvent {
public:
    char _head[0x10];
    char f_10;
    char _pad;
    short f_12;
    short f_14;
    char _pad2[2];
    float f_18[3];
    bool deSerialize(io::BitStream* stream);
};

bool HandleDropEvent::deSerialize(io::BitStream* stream) {
    unsigned int v = 0;
    stream->readBits(&v, 8);
    f_10 = (char)v;
    v = 0;
    stream->readBits(&v, 0x10);
    f_12 = (short)v;
    v = 0;
    stream->readBits(&v, 0x10);
    f_14 = (short)v;
    float v3[3] = {0, 0, 0};
    stream->readBits(&v3[0], 0x20);
    stream->readBits(&v3[1], 0x20);
    stream->readBits(&v3[2], 0x20);
    float* dst = f_18;
    dst[0] = v3[0];
    dst[1] = v3[1];
    dst[2] = v3[2];
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
