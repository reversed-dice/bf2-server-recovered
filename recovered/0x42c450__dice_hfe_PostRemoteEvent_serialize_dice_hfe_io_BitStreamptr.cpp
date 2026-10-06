// FUNCTION: BF2 0x42c450
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

class PostRemoteEvent {
public:
    char _head[0x10];
    unsigned int f_10;
    unsigned int f_14;
    char f_18[52];
    unsigned char f_4c;
    char _gap_4d[3];
    unsigned int f_50;
    bool serialize(io::BitStream* stream);
};

bool PostRemoteEvent::serialize(io::BitStream* stream) {
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
    stream->writeBits(&v, 0x4);
    v = f_14;
    stream->writeBits(&v, 0x20);
    stream->writeBits(&f_50, 0x20);
    v = f_4c;
    stream->writeBits(&v, 0x8);
    if (f_4c != 0)
        stream->writeBits(f_18, f_4c << 3);
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
