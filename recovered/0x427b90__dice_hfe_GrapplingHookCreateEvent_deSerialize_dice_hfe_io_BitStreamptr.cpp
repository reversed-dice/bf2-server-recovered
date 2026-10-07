// FUNCTION: BF2 0x427b90
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
};

namespace io {

class BitStream {
public:
    char _pad[0x20];
    unsigned char m_overflow;
    char _pad2[3];
    unsigned int m_bitsRead;
    void readBits(void* dst, unsigned int n);
};

}

class GrapplingHookCreateEvent {
public:
    char _head[0x10];
    short f_10;
    char _pad12[2];
    unsigned int f_14;
    unsigned int f_18;
    Vec3 f_1c;
    Vec3 f_28;

    bool deSerialize(io::BitStream* stream);
};

bool GrapplingHookCreateEvent::deSerialize(io::BitStream* stream) {
    unsigned int v = 0;
    stream->readBits(&v, 0x10);
    f_10 = (short)v;
    v = 0;
    stream->readBits(&v, 8);
    f_14 = v;
    stream->readBits(&f_18, 0x20);

    Vec3 v2;
    Vec3 v1;

    v1.x = 0; v1.y = 0; v1.z = 0;
    stream->readBits(&v1.x, 0x20);
    stream->readBits(&v1.y, 0x20);
    stream->readBits(&v1.z, 0x20);
    float* dst1 = (float*)&f_1c;
    dst1[0] = v1.x;
    dst1[1] = v1.y;
    dst1[2] = v1.z;

    v2.x = 0; v2.y = 0; v2.z = 0;
    stream->readBits(&v2.x, 0x20);
    stream->readBits(&v2.y, 0x20);
    stream->readBits(&v2.z, 0x20);
    float* dst2 = (float*)&f_28;
    dst2[0] = v2.x;
    dst2[1] = v2.y;
    dst2[2] = v2.z;

    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
