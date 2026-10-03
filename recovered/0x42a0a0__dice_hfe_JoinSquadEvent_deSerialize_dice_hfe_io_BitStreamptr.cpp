// FUNCTION: BF2 0x42a0a0
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

class JoinSquadEvent {
public:
    char _head[0x10];
    unsigned char f_10;
    unsigned char f_11;
    unsigned char f_12;
    bool deSerialize(io::BitStream* stream);
};

bool JoinSquadEvent::deSerialize(io::BitStream* stream) {
    unsigned int v = 0;
    v = 0;
    stream->readBits(&v, 8);
    f_10 = (unsigned char)v;
    v = 0;
    stream->readBits(&v, 8);
    f_11 = (unsigned char)v;
    v = 0;
    stream->readBits(&v, 8);
    f_12 = (unsigned char)v;
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
