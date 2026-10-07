// FUNCTION: BF2 0x434950
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

class UpdateTriggerEvent {
public:
    char _head[0x10];
    unsigned int f_10;
    unsigned short f_14;
    char _pad[2];
    Vec3 f_18;
    Vec3 f_24;
    unsigned int f_30;
    unsigned int f_34;

    bool deSerialize(io::BitStream* stream);
};

bool UpdateTriggerEvent::deSerialize(io::BitStream* stream) {
    unsigned int v = 0;
    stream->readBits(&v, 32);
    f_10 = v;
    v = 0;
    stream->readBits(&v, 16);
    f_14 = (unsigned short)v;

    Vec3 v2;
    Vec3 v1;

    v1.x = 0; v1.y = 0; v1.z = 0;
    stream->readBits(&v1.x, 32);
    stream->readBits(&v1.y, 32);
    stream->readBits(&v1.z, 32);
    float* dst1 = (float*)&f_18;
    dst1[0] = v1.x;
    dst1[1] = v1.y;
    dst1[2] = v1.z;

    v2.x = 0; v2.y = 0; v2.z = 0;
    stream->readBits(&v2.x, 32);
    stream->readBits(&v2.y, 32);
    stream->readBits(&v2.z, 32);
    float* dst2 = (float*)&f_24;
    dst2[0] = v2.x;
    dst2[1] = v2.y;
    dst2[2] = v2.z;

    v = 0;
    stream->readBits(&v, 8);
    f_34 = v;
    v = 0;
    stream->readBits(&v, 8);
    f_30 = v;

    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
