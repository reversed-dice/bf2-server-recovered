// FUNCTION: BF2 0x422300
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

class ConnectionTypeEvent {
public:
    char _head[0x10];
    unsigned char f_10;
    bool deSerialize(io::BitStream* stream);
};

bool ConnectionTypeEvent::deSerialize(io::BitStream* stream) {
    unsigned int bits = 0;
    for (unsigned int i = 0; i != 3; ++i) bits++;
    unsigned int v = 0;
    v = 0;
    stream->readBits(&v, bits);
    f_10 = (unsigned char)v;
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
