// FUNCTION: BF2 0x42c950
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

class PythonCommandEvent {
public:
    char _head[0x14];
    unsigned int f_14;
    unsigned int f_18;
    int f_1c[4];
    int f_2c;
    bool serialize(io::BitStream* stream);
};

bool PythonCommandEvent::serialize(io::BitStream* stream) {
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
    v = f_18;
    stream->writeBits(&v, 0x20);
    v = f_14;
    stream->writeBits(&v, 8);
    v = f_2c;
    stream->writeBits(&v, 4);
    for (int i = 0; i < f_2c; ++i) {
        v = f_1c[i];
        stream->writeBits(&v, 0x20);
    }
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
