// FUNCTION: BF2 0x422a10
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

extern "C" char* g_eventReg;

class CreateKitEvent {
public:
    char _head[0x10];
    unsigned int f_10;
    unsigned short f_14;
    char _gap_18[2];
    char f_18[4];
    char f_1c[4];
    char f_20[4];
    unsigned int f_24;
    unsigned int f_28;
    bool serialize(io::BitStream* stream);
};

bool CreateKitEvent::serialize(io::BitStream* stream) {
    unsigned int nbits = 0;
    unsigned int maxv = *(unsigned int*)(g_eventReg + 0x70);
    if (maxv != 0) {
        unsigned int n = 0;
        unsigned int one = 1;
        do { n++; } while (maxv > ((one << n) - 1));
        nbits = n;
    }
    unsigned int v = ((unsigned int (*)(void*))(*(void***)this)[0x30 / 8])(this);
    stream->writeBits(&v, nbits);
    v = f_10;
    stream->writeBits(&v, 0x20);
    v = f_14;
    stream->writeBits(&v, 0x10);
    stream->writeBits(&f_18, 0x20);
    stream->writeBits(&f_1c, 0x20);
    stream->writeBits(&f_20, 0x20);
    v = f_24;
    stream->writeBits(&v, 0x4);
    v = f_28 + 1;
    stream->writeBits(&v, 0x4);
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
