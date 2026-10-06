// FUNCTION: BF2 0x421030
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

class CommanderCamEvent {
public:
    char _head[0x10];
    Vec3 m_pos;
    bool deSerialize(io::BitStream* stream);
};

bool CommanderCamEvent::deSerialize(io::BitStream* stream) {
    Vec3 v;
    stream->readBits(&v.x, 32);
    stream->readBits(&v.y, 32);
    stream->readBits(&v.z, 32);
    m_pos = v;
    if (stream->m_overflow != 0) {
        stream->m_bitsRead = 0;
        stream->m_overflow = 0;
        return false;
    }
    return true;
}

} }
