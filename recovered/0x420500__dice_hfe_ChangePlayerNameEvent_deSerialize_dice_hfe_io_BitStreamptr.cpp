// FUNCTION: BF2 0x420500
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

class ChangePlayerNameEvent {
public:
    char _head[0x10];
    unsigned int f_10;
    char _gap_30[28];
    unsigned char f_30;
    bool deSerialize(io::BitStream* stream);
};

bool ChangePlayerNameEvent::deSerialize(io::BitStream* stream) {
    unsigned int v = 0;
    v = 0;
    stream->readBits(&v, 8);
    f_30 = (unsigned char)v;
    stream->readBits(&f_10, 256);
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
