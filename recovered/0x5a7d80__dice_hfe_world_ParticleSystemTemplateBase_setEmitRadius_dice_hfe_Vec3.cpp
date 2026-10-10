// FUNCTION: BF2 0x5a7d80
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3& operator=(const Vec3& o) { set(o.x, o.y, o.z); return *this; }
    Vec3() {}
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
};

namespace world {

class IParticleNode {
public:
    virtual ~IParticleNode();
    virtual void dummy1();
    virtual void dummy2(); // slot 3 = 0x18
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
    virtual void dummy7();
    virtual void dummy8();
    virtual void dummy9();
    virtual void dummy10(); // slot 11 = 0x58
};

class ParticleSystemTemplateBase {
public:
    char _pad[0x80];
    void* m_node; // +0x80

    void setEmitRadius(dice::hfe::Vec3 v);
};

void ParticleSystemTemplateBase::setEmitRadius(dice::hfe::Vec3 v) {
    if (m_node) {
        typedef void (*SetRadiusFn)(void*, dice::hfe::Vec3);
        void** vtbl = *(void***)m_node;
        SetRadiusFn fn = (SetRadiusFn)vtbl[0xb]; // 0x58 / 8 = 11
        fn(m_node, v);
        if (m_node) {
            typedef void (*UpdateFn)(void*);
            UpdateFn ufn = (UpdateFn)(*(void***)m_node)[3]; // 0x18 / 8 = 3
            ufn(m_node);
        }
    }
}

} } }
