// FUNCTION: BF2 0x6a9050
#include <string>

namespace dice { namespace hfe {

class Vec3 {
public:
    float x, y, z;
    Vec3() { }
    Vec3(Vec3 const& o) { x = o.x; y = o.y; z = o.z; }
};

namespace world { class IObject; }

class IVObj {
public:
    virtual void d00(); virtual void d01(); virtual void d02(); virtual void d03();
    virtual void d04(); virtual void d05(); virtual void d06(); virtual void d07();
    virtual void d08(); virtual void d09(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15();
    virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19();
    virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26();
    virtual Vec3 const& getPos();
};

namespace tool {
class ObjectTemplateAdm {
public:
    Vec3 setObjectToGround(dice::hfe::world::IObject* obj);
};
} } }

dice::hfe::Vec3 dice::hfe::tool::ObjectTemplateAdm::setObjectToGround(dice::hfe::world::IObject* obj) {
    Vec3 v;
    if (obj) {
        IVObj* o = (IVObj*)obj;
        Vec3 const& s = o->getPos();
        unsigned const* p = (unsigned const*)&s;
        unsigned b2 = p[2];
        unsigned b1 = p[1];
        unsigned b0 = p[0];
        unsigned* out = (unsigned*)&v;
        out[0] = b0;
        out[1] = b1;
        out[2] = b2;
        return v;
    }
    float z = 0.0f;
    float* out = (float*)&v;
    out[0] = z;
    out[1] = z;
    out[2] = z;
    return v;
}
