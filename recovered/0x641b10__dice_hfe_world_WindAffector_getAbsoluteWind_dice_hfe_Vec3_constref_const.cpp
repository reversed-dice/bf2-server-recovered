// FUNCTION: BF2 0x641b10
namespace dice { namespace hfe {
struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3& operator=(const Vec3& o) { set(o.x, o.y, o.z); return *this; }
    Vec3() {}
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
};
} }

namespace dice { namespace hfe { namespace world {

class IWindAffector {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19(dice::hfe::Vec3 const& in, dice::hfe::Vec3* dir, float* scale) const;
};

class WindAffector : public IWindAffector {
public:
    dice::hfe::Vec3 getAbsoluteWind(dice::hfe::Vec3 const& in) const;
    char _pad[0x18];
    char m_0x20;
};

dice::hfe::Vec3 WindAffector::getAbsoluteWind(dice::hfe::Vec3 const& in) const
{
    if (m_0x20 == 0) {
        dice::hfe::Vec3 zero;
        zero.x = 0.0f;
        zero.y = 0.0f;
        zero.z = 0.0f;
        return zero;
    }
    dice::hfe::Vec3 dir;
    dir.x = 0.0f;
    dir.y = 0.0f;
    dir.z = 0.0f;
    float scale;
    v19(in, &dir, &scale);
    const float f = scale;
    dice::hfe::Vec3 r;
    r.z = f * dir.z;
    r.y = f * dir.y;
    r.x = f * dir.x;
    return r;
}

} } }
