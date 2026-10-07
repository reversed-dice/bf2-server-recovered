// FUNCTION: BF2 0x41f140
namespace dice { namespace hfe { namespace io {

class BitStream {
public:
    char _pad[0x20];
    unsigned char m_overflow;
    char _pad2[3];
    unsigned int m_bitsRead;
    void writeBits(const void* src, unsigned int n);
};

}

class ArtilleryEvent {
public:
    char _pad[0x10];
    int f_10;
    int f_14;
    unsigned char f_18;
    char _pad19[3];
    int f_1c;
    int f_20;
    short f_24;

    bool serialize(io::BitStream* stream);
};

bool ArtilleryEvent::serialize(io::BitStream* stream) {
    unsigned int nbits = 0;
    unsigned int maxv = *(unsigned int*)(*(char**)0x0108b3b0 + 0x70);
    if (maxv != 0) {
        unsigned int n = 0;
        unsigned int one = 1;
        do { n++; } while (maxv > ((one << n) - 1));
        nbits = n;
    }
    unsigned int v = ((unsigned int (*)(void*))(*(void***)this)[0x30 / 8])(this);
    stream->writeBits(&v, nbits);
    stream->writeBits(&f_20, 2);
    v = f_18;
    stream->writeBits(&v, 0x20);
    if (f_20 == 1) {
        stream->writeBits(&f_10, 0x20);
        stream->writeBits(&f_14, 0x20);
    } else if (f_20 == 2) {
        stream->writeBits(&f_24, 0x10);
        stream->writeBits(&f_1c, 0x20);
    }
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
