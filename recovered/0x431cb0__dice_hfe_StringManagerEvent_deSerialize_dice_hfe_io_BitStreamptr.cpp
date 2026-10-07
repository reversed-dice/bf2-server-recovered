// FUNCTION: BF2 0x431cb0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace io {

class BitStream {
public:
    char _pad[0x20];
    unsigned char m_overflow;
    char _pad2[3];
    unsigned int m_bitsRead;
    bool readBits(void* dst, unsigned int n);
};

}

class StringManagerEvent {
public:
    char _head[0x10];
    int f_10;
    char f_14[0x44];
    unsigned int f_58;
    int f_5c;
    bool f_60;
    bool f_61;

    bool deSerialize(io::BitStream* stream);
};

bool StringManagerEvent::deSerialize(io::BitStream* stream) {
    int v = 0;
    stream->readBits(&v, 1);
    f_10 = (v == 1);
    v = 0;
    stream->readBits(&v, 6);
    f_58 = v;
    if (!stream->readBits(f_14, f_58 << 3)) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    *((char*)this + f_58 + 0x14) = 0;
    v = 0;
    stream->readBits(&v, 1);
    if (v == 1) {
        v = 0;
        stream->readBits(&v, 8);
        f_5c = v;
    } else {
        f_5c = -1;
    }
    v = 0;
    stream->readBits(&v, 1);
    f_60 = (v == 1);
    v = 0;
    stream->readBits(&v, 1);
    f_61 = (v == 1);
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
