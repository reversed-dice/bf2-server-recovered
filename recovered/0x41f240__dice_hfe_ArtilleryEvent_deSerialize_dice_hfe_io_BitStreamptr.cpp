// FUNCTION: BF2 0x41f240
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

class ArtilleryEvent {
public:
    char _pad[0x10];
    int f_10;
    int f_14;
    char f_18;
    char _pad19[3];
    int f_1c;
    int f_20;
    short f_24;

    bool deSerialize(io::BitStream* stream);
};

bool ArtilleryEvent::deSerialize(io::BitStream* stream) {
    unsigned int v = 0;
    stream->readBits(&v, 2);
    f_20 = v;
    v = 0;
    stream->readBits(&v, 0x20);
    f_18 = (char)v;
    if (f_20 == 1) {
        stream->readBits(&f_10, 0x20);
        stream->readBits(&f_14, 0x20);
    } else if (f_20 == 2) {
        stream->readBits(&f_24, 0x10);
        stream->readBits(&f_1c, 0x20);
    }
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
