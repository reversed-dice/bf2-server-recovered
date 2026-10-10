// FUNCTION: BF2 0x592310
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    Vec3() {}
    Vec3(const Vec3& o) : y(o.y), z(o.z), x(o.x) {}
};

namespace world {

class IColorProvider {
public:
    virtual ~IColorProvider();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
    virtual void dummy7();
    virtual dice::hfe::Vec3 getColor() const;
};

class DecalTemplate {
public:
    char _pad[0x70];
    IColorProvider* m_colorProvider;

    dice::hfe::Vec3 getColor() const;
};

dice::hfe::Vec3 DecalTemplate::getColor() const {
    if (m_colorProvider) {
        return m_colorProvider->getColor();
    }
    dice::hfe::Vec3 res;
    res.y = 0.0f;
    res.z = 0.0f;
    res.x = 0.0f;
    return res;
}

} } }
