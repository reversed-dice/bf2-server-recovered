// FUNCTION: BF2 0x428a60
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

class HandlePickupEvent {
public:
    char _head[0x10];
    unsigned char f_10;
    char _gap_12[1];
    unsigned short f_12;
    unsigned short f_14;
    bool deSerialize(io::BitStream* stream);
};

bool HandlePickupEvent::deSerialize(io::BitStream* stream) {
    unsigned int v = 0;
    v = 0;
    stream->readBits(&v, 8);
    f_10 = (unsigned char)v;
    v = 0;
    stream->readBits(&v, 16);
    f_12 = (unsigned short)v;
    v = 0;
    stream->readBits(&v, 16);
    f_14 = (unsigned short)v;
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
