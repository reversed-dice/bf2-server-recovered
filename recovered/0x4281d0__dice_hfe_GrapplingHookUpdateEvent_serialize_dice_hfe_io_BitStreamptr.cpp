// FUNCTION: BF2 0x4281d0
// BF2_FLAGS: -fno-strict-aliasing
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

class GrapplingHookUpdateEvent {
public:
    char _head[0x10];
    short f_10;
    char f_12;
    char _pad13;
    Vec3 f_14;
    Vec3 f_20;
    bool f_2c;

    bool serialize(io::BitStream* stream);
};

bool GrapplingHookUpdateEvent::serialize(io::BitStream* stream) {
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
    const Vec3* pVec = &f_14;
    v = (unsigned short)f_10;
    stream->writeBits(&v, 0x10);
    v = (unsigned char)f_12;
    stream->writeBits(&v, 8);
    if (stream->m_useCompressed) {
        stream->writeCompressedVector(*pVec, stream->m_refVec, 1000.0f);
    } else {
        v = 0;
        stream->writeBits(&v, 2);
        stream->writeBits(&pVec->x, 0x20);
        stream->writeBits(&pVec->y, 0x20);
        stream->writeBits(&pVec->z, 0x20);
    }
    pVec = &f_20;
    if (stream->m_useCompressed) {
        stream->writeCompressedVector(*pVec, stream->m_refVec, 1000.0f);
    } else {
        v = 0;
        stream->writeBits(&v, 2);
        stream->writeBits(&pVec->x, 0x20);
        stream->writeBits(&pVec->y, 0x20);
        stream->writeBits(&pVec->z, 0x20);
    }
    if (f_2c) {
        v = 1;
        stream->writeBits(&v, 1);
    } else {
        v = 0;
        stream->writeBits(&v, 1);
    }
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
