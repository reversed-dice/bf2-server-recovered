// FUNCTION: BF2 0x6c57d0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {
struct Vec3 {
    float x, y, z;
    Vec3() : x(0), y(0), z(0) {}
    void zero() { x = 0; y = 0; z = 0; }
};
} }
namespace dice { namespace anim { 

class Skeleton {
public:
    class BoneTemplate {
    public:
        int m_0;
        short m_4;
        short m_6;
        char _pad8[0x4];
        dice::hfe::Vec3 m_c;
        float m_18;
        float m_1c;
        BoneTemplate();
    };
};

Skeleton::BoneTemplate::BoneTemplate()
    : m_0(-1), m_4(-1), m_6(-1), m_18(1.0f), m_1c(-1.0f)
{
}

}}
