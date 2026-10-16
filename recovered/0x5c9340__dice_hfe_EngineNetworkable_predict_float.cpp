// FUNCTION: BF2 0x5c9340
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    Vec3() {}
    Vec3(float a, float b, float c) : x(a), y(b), z(c) {}
    Vec3(const Vec3& o) { x = o.x; y = o.y; z = o.z; }
};

class EngineNetworkable {
public:
    struct UPDATE_UPDATE {
        char _pad0[6];
        unsigned char f6;        // 0x06
        char _pad1[1];
        int f8;                  // 0x08
        char _pad2[0x14 - 0xc];
        float f14;               // 0x14
        float f18;               // 0x18
        float f1c;               // 0x1c
        int f20;                 // 0x20
        int f24;                 // 0x24
        int f28;                 // 0x28
        char _pad3[0x3c - 0x2c];
    };

    char _pad0[0x4c];
    unsigned int m_sent;         // 0x4c
    char _pad1[0x78 - 0x50];
    void* m_unk78;               // 0x78
    UPDATE_UPDATE* m_arr;        // 0x80

    void setA(Vec3 v);
    void setB(Vec3 v);
    void predict(float);
};

void EngineNetworkable::setA(Vec3) {}
void EngineNetworkable::setB(Vec3) {}

void EngineNetworkable::predict(float)
{
    if (*(char*)((char*)this + 0x30) != 0)
        return;
    if (*(char*)((char*)m_unk78 + 0x2c8) == 0)
        return;

    *(unsigned char*)((char*)m_unk78 + 0x2c9) = (unsigned char)m_arr[m_sent].f6;
    *(int*)((char*)m_unk78 + 0x2fc) = m_arr[m_sent].f8;

    ((void (*)(void*, Vec3))(*(void***)m_unk78)[0x300 / 8])(
        m_unk78, Vec3(m_arr[m_sent].f1c, 0.0f, m_arr[m_sent].f18));

    ((void (*)(void*, Vec3))(*(void***)m_unk78)[0x310 / 8])(
        m_unk78, Vec3(0.0f, 0.0f, m_arr[m_sent].f14));

    *(int*)((char*)m_unk78 + 0x2d8) = m_arr[m_sent].f20;
    *(int*)((char*)m_unk78 + 0x2e8) = m_arr[m_sent].f24;
    *(int*)((char*)m_unk78 + 0x2ec) = m_arr[m_sent].f28;
}

} }
