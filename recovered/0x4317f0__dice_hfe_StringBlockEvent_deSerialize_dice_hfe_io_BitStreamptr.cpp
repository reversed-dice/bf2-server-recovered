// FUNCTION: BF2 0x4317f0
namespace dice { namespace hfe { namespace io {
class BitStream {
public:
    void readBits(void* dst, unsigned int n);
    char _pad[0x20];
    unsigned char m_overflow;
    char _pad2[3];
    unsigned int m_bitsRead;
};
}}}
namespace dice { namespace hfe {
class StringBlockEvent {
public:
    char _pad0[0x10];
    bool m_flag;
    char m_11;
    char m_12;
    char m_text[4];
    bool deSerialize(io::BitStream* stream);
};
bool StringBlockEvent::deSerialize(io::BitStream* stream) {
    unsigned int v = 0;
    stream->readBits(&v, 1);
    int b = (v == 1);
    *(char*)((char*)this + 0x10) = (char)b;
    if (b) {
        v = 0;
        stream->readBits(&v, 8);
        *(char*)((char*)this + 0x11) = (char)v;
    } else {
        v = 0;
        stream->readBits(&v, 8);
        unsigned char len = (unsigned char)v;
        *(char*)((char*)this + 0x12) = (char)len;
        stream->readBits((char*)this + 0x13, len << 3);
    }
    if (stream->m_overflow == 0)
        return true;
    stream->m_bitsRead = 0;
    stream->m_overflow = 0;
    return false;
}
}}
