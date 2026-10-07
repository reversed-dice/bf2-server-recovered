// FUNCTION: BF2 0x42a920
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
    void readBits(void* dst, unsigned int n);
    Vec3 readCompressedVector(const Vec3& ref, float scale);
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
    float f_20[3];
    char f_2c;
    bool deSerialize(io::BitStream* stream);
};

bool KilledByEvent::deSerialize(io::BitStream* stream) {
    unsigned int v = 0;
    stream->readBits(&v, 8);
    f_10 = (char)v;
    v = 0;
    stream->readBits(&v, 8);
    f_11 = (char)v;
    v = 0;
    stream->readBits(&v, 1);
    f_12 = (v == 1);
    v = 0;
    stream->readBits(&v, 0x10);
    f_14 = (short)v;
    v = 0;
    stream->readBits(&v, 0x20);
    f_1c = v;
    v = 0;
    stream->readBits(&v, 0x20);
    f_18 = v;
    v = 0;
    stream->readBits(&v, 8);
    f_2c = (char)v;
    Vec3 vec = stream->readCompressedVector(stream->m_refVec, 1000.0f);
    float* dst = f_20;
    dst[0] = vec.x;
    dst[1] = vec.y;
    dst[2] = vec.z;
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
