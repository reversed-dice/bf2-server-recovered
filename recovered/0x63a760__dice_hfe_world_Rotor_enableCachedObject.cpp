// FUNCTION: BF2 0x63a760
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {
struct Vec3 { float x, y, z; Vec3() : x(0), y(0), z(0) {}
    void zero() { x = 0; y = 0; z = 0; }
};
namespace world {

class Bundle {
public:
    void enableCachedObject();
    char _pad[0x23c];
};

class Rotor : public Bundle {
public:
    int m_23c;
    float m_240;
    float m_244;
    char _pad248[8];
    Vec3 m_250;
    void enableCachedObject();
};

void Rotor::enableCachedObject()
{
    Bundle::enableCachedObject();
    m_250.zero();
    m_23c = -1;
    m_240 = 3.0f;
    m_244 = 0.0f;
}

} } }
