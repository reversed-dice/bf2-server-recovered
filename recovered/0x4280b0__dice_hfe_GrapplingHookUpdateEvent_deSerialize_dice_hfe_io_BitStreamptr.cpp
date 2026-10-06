// FUNCTION: BF2 0x4280b0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    Vec3() {}
    Vec3(const Vec3& o) : x(o.x), y(o.y), z(o.z) {}
    Vec3& operator=(const Vec3& o) { x = o.x; y = o.y; z = o.z; return *this; }
};

namespace io {

class BitStream {
public:
    void readBits(void* dst, unsigned int n);
    Vec3 readCompressedVector(const Vec3& ref, float precision);
    char _pad[0x20];
    unsigned char m_overflow;
    char _pad2[3];
    unsigned int m_bitsRead;
    char _pad3[0x30];
    Vec3 m_ref;
};

}

class GrapplingHookUpdateEvent {
public:
    char _head[0x10];
    short f_10;
    unsigned char f_12;
    Vec3 m_pos;
    Vec3 m_dir;
    bool f_2c;
    bool deSerialize(io::BitStream* stream);
};

bool GrapplingHookUpdateEvent::deSerialize(io::BitStream* stream) {
    unsigned int v = 0;
    stream->readBits(&v, 16);
    f_10 = (short)v;
    v = 0;
    stream->readBits(&v, 8);
    f_12 = (unsigned char)v;
    m_pos = stream->readCompressedVector(stream->m_ref, 1000.0f);
    m_dir = stream->readCompressedVector(stream->m_ref, 1000.0f);
    v = 0;
    stream->readBits(&v, 1);
    f_2c = (v == 1);
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
