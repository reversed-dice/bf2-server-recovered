// FUNCTION: BF2 0x434800
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

class UpdateTriggerEvent {
public:
    char _head[0x10];
    unsigned int f_10;
    unsigned short f_14;
    char _gap_18[2];
    char f_18[4];
    char f_1c[4];
    char f_20[4];
    char f_24[4];
    char f_28[4];
    char f_2c[4];
    unsigned int f_30;
    unsigned int f_34;
    bool serialize(io::BitStream* stream);
};

bool UpdateTriggerEvent::serialize(io::BitStream* stream) {
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
    stream->writeBits(&f_24, 0x20);
    stream->writeBits(&f_28, 0x20);
    stream->writeBits(&f_2c, 0x20);
    v = f_34;
    stream->writeBits(&v, 0x8);
    v = f_30;
    stream->writeBits(&v, 0x8);
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
