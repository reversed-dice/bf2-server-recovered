// FUNCTION: BF2 0x426f60
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace io {

class BitStream {
public:
    char _pad[0x20];
    unsigned char m_overflow;
    char _pad2[3];
    unsigned int m_bitsRead;
    void readBits(void* dst, unsigned int n);
};

}

struct Vec3 {
    float x, y, z;
    Vec3() : x(0), y(0), z(0) {}
    Vec3& operator=(const Vec3& o) { x = o.x; y = o.y; z = o.z; return *this; }
};

class GrapplingHookContainerDetachEvent {
public:
    char _head[0x10];
    unsigned int f_10;
    Vec3 m_pos;
    bool deSerialize(io::BitStream* stream);
};

bool GrapplingHookContainerDetachEvent::deSerialize(io::BitStream* stream) {
    unsigned int v = 0;
    stream->readBits(&v, 8);
    f_10 = v;
    Vec3 p;
    stream->readBits(&p.x, 32);
    stream->readBits(&p.y, 32);
    stream->readBits(&p.z, 32);
    m_pos = p;
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
