// FUNCTION: BF2 0x42a760
namespace dice { namespace hfe {

class Vec3 {
public:
    Vec3();
    Vec3(const Vec3&);
    float x, y, z;
};

namespace io {

class BitStream {
public:
    char _pad[0x20];
    unsigned char m_overflow;
    char _pad2[3];
    unsigned int m_bitsRead;
    char _pad3[0x58 - 0x28];
    Vec3 m_refVec;
    bool m_useCompressed;
    void writeBits(const void* src, unsigned int n);
    void writeCompressedVector(const Vec3& val, const Vec3& ref, float scale);
};

}

class KilledByEvent {
public:
    char _head[0x10];
    char f_10;
    char f_11;
    bool f_12;
    char _pad;
    short f_14;
    char _pad2[2];
    int f_18;
    int f_1c;
    Vec3 f_20;
    char f_2c;
    bool serialize(io::BitStream* stream);
};

bool KilledByEvent::serialize(io::BitStream* stream) {
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
    v = (unsigned char)f_10;
    stream->writeBits(&v, 8);
    v = (unsigned char)f_11;
    stream->writeBits(&v, 8);
    if (f_12) {
        v = 1;
        stream->writeBits(&v, 1);
    } else {
        v = 0;
        stream->writeBits(&v, 1);
    }
    const Vec3& vec = f_20;
    v = (unsigned short)f_14;
    stream->writeBits(&v, 0x10);
    v = f_1c;
    stream->writeBits(&v, 0x20);
    v = f_18;
    stream->writeBits(&v, 0x20);
    v = (unsigned char)f_2c;
    stream->writeBits(&v, 8);
    if (stream->m_useCompressed) {
        stream->writeCompressedVector(vec, stream->m_refVec, 1000.0f);
    } else {
        v = 0;
        stream->writeBits(&v, 2);
        stream->writeBits(&vec.x, 0x20);
        stream->writeBits(&vec.y, 0x20);
        stream->writeBits(&vec.z, 0x20);
    }
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
