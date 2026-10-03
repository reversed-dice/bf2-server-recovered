// FUNCTION: BF2 0x57e070
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {
struct Vec3 {
    float x, y, z;
    Vec3() : x(0), y(0), z(0) {}
    void zero() { x = 0; y = 0; z = 0; }
};
} }
namespace dice { namespace hfe { namespace world { 

class FreeCamera {
public:
    char _pad0[0x324];
    float m_324;
    char _pad328[0x10];
    int m_338;
    char _pad33c[0x40];
    int m_37c;
    bool m_380;
    char _pad381[0x73];
    float m_3f4;
    dice::hfe::Vec3 m_3f8;
    void resetTraceCamera();
};

void FreeCamera::resetTraceCamera()
{
    m_380 = true;
    m_338 = -1;
    m_37c = -1;
    m_3f8.zero();
    m_3f4 = 0.0f;
    m_324 = 0.0f;
}

}}}
