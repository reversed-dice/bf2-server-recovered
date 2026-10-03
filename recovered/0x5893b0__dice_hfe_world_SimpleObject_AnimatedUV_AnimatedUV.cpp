// FUNCTION: BF2 0x5893b0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {
struct Vec3 {
    float x, y, z;
    Vec3() : x(0), y(0), z(0) {}
    void zero() { x = 0; y = 0; z = 0; }
};
} }
namespace dice { namespace hfe { namespace world { 

class SimpleObject {
public:
    class AnimatedUV {
    public:
        float m_0;
        float m_4;
        float m_8;
        dice::hfe::Vec3 m_c;
        void* m_18;
        bool m_20;
        AnimatedUV();
    };
};

SimpleObject::AnimatedUV::AnimatedUV()
    : m_0(0.0f), m_4(0.0f), m_8(0.0f), m_18(0), m_20(true)
{
}

}}}
