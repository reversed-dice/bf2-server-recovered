// FUNCTION: BF2 0x420c50
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

class ChangeSquadNameEvent {
public:
    char _head[0x10];
    char f_10[32];
    unsigned char f_30;
    unsigned char f_31;
    unsigned char f_32;
    unsigned char f_33;
    bool deSerialize(io::BitStream* stream);
};

bool ChangeSquadNameEvent::deSerialize(io::BitStream* stream) {
    unsigned int v = 0;
    stream->readBits(&v, 8);
    f_32 = (unsigned char)v;
    v = 0;
    stream->readBits(&v, 8);
    f_31 = (unsigned char)v;
    v = 0;
    stream->readBits(&v, 8);
    f_33 = (unsigned char)v;
    v = 0;
    stream->readBits(&v, 8);
    f_30 = (unsigned char)v;
    stream->readBits(f_10, (unsigned int)f_30 << 3);
    f_10[f_30] = 0;
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
