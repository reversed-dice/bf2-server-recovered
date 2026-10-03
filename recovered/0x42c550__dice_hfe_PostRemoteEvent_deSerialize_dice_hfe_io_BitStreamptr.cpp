// FUNCTION: BF2 0x42c550
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

class PostRemoteEvent {
public:
    char _head[0x10];
    unsigned int f_10;
    unsigned int f_14;
    char f_18[0x4c - 0x18];
    unsigned char f_4c;
    char _pad3[3];
    unsigned int f_50;
    bool deSerialize(io::BitStream* stream);
};

bool PostRemoteEvent::deSerialize(io::BitStream* stream) {
    unsigned int v = 0;
    stream->readBits(&v, 4);
    f_10 = v;
    v = 0;
    stream->readBits(&v, 0x20);
    f_14 = v;
    stream->readBits(&f_50, 0x20);
    v = 0;
    stream->readBits(&v, 8);
    f_4c = (unsigned char)v;
    if (f_4c) {
        stream->readBits(f_18, f_4c * 8);
    }
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
