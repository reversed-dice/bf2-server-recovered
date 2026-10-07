// FUNCTION: BF2 0x4208d0
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

class ChangeSquadNameEvent {
public:
    char _head[0x10];
    char f_10[32];
    unsigned char f_30;
    unsigned char f_31;
    unsigned char f_32;
    unsigned char f_33;
    bool serialize(io::BitStream* stream);
};

bool ChangeSquadNameEvent::serialize(io::BitStream* stream) {
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
    v = f_32;
    stream->writeBits(&v, 0x8);
    v = f_31;
    stream->writeBits(&v, 0x8);
    v = f_33;
    stream->writeBits(&v, 0x8);
    v = f_30;
    stream->writeBits(&v, 0x8);
    stream->writeBits(f_10, (unsigned int)f_30 << 3);
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
