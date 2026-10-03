// FUNCTION: BF2 0x4226c0
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

class ContentCheckEvent {
public:
    char _head[0x10];
    char f_10[16];
    char f_20[16];
    char f_30[16];
    bool serialize(io::BitStream* stream);
};

bool ContentCheckEvent::serialize(io::BitStream* stream) {
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
    stream->writeBits(&f_10, 0x80);
    stream->writeBits(&f_20, 0x80);
    stream->writeBits(&f_30, 0x80);
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
