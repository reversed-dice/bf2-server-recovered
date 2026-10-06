// FUNCTION: BF2 0x422b30
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    Vec3() : x(0), y(0), z(0) {}
    Vec3(const Vec3& o) : x(o.x), y(o.y), z(o.z) {}
    Vec3& operator=(const Vec3& o) { x = o.x; y = o.y; z = o.z; return *this; }
};

namespace io {

class BitStream {
public:
    void readBits(void* dst, unsigned int n);
    char _pad[0x20];
    unsigned char m_overflow;
    char _pad2[3];
    unsigned int m_bitsRead;
};

}

class CreateKitEvent {
public:
    char _head[0x10];
    int f_10;
    short f_14;
    Vec3 m_pos;
    int f_24;
    int f_28;
    bool deSerialize(io::BitStream* stream);
};

bool CreateKitEvent::deSerialize(io::BitStream* stream) {
    int v = 0;
    stream->readBits(&v, 32);
    f_10 = v;
    v = 0;
    stream->readBits(&v, 16);
    f_14 = (short)v;
    {
        Vec3 p;
        stream->readBits(&p.x, 32);
        stream->readBits(&p.y, 32);
        stream->readBits(&p.z, 32);
        m_pos = p;
    }
    v = 0;
    stream->readBits(&v, 4);
    f_24 = v;
    v = 0;
    stream->readBits(&v, 4);
    f_28 = v - 1;
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
