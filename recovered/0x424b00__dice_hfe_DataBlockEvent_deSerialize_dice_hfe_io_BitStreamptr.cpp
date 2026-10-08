// FUNCTION: BF2 0x424b00
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
class DataBlockEvent {
public:
    char _head[0x10];
    bool f_10;
    unsigned int f_14;
    unsigned int f_18;
    unsigned char f_1c;
    char f_1d[256];
    bool deSerialize(io::BitStream* stream);
};
bool DataBlockEvent::deSerialize(io::BitStream* stream) {
    unsigned int v = 0;
    stream->readBits(&v, 1);
    unsigned int b = (v == 1);
    f_10 = (b != 0);
    if (__builtin_expect(b, 1)) {
        v = 0;
        stream->readBits(&v, 0x20);
        f_14 = v;
        v = 0;
        stream->readBits(&v, 0x20);
        f_18 = v;
    } else {
        v = 0;
        stream->readBits(&v, 8);
        f_1c = (unsigned char)v;
        stream->readBits(f_1d, f_1c * 8);
    }
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}
} }

