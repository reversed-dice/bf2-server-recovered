// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x69e780
#include <set>

namespace dice { namespace hfe {
struct Vec3 { float x, y, z; };
} }

namespace dice { namespace hfe { namespace world {

class IWindAffector {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual bool isEnabled();
    virtual void v16();
    virtual float getExtent();
    virtual Vec3 const& getPosition();
    virtual void v19();
};

class WindManager {
public:
    char _pad0[0x10];
    std::set<IWindAffector*> m_all;
    char _pad1[0x70 - 0x10 - 0x30];
    std::set<IWindAffector*> m_hit;
};

std::set<IWindAffector*> const& getWindAffectors(WindManager* self, dice::hfe::Vec3 const& pos, float radius)
{
    std::set<IWindAffector*>& out = self->m_hit;
    out.clear();
    std::set<IWindAffector*>::iterator it = self->m_all.begin();
    std::set<IWindAffector*>::iterator end = self->m_all.end();
    for (; it != end; ++it) {
        IWindAffector* a = *it;
        if (a->isEnabled()) {
            dice::hfe::Vec3 const& p = a->getPosition();
            float dx = p.x - pos.x;
            float dy = p.y - pos.y;
            float dz = p.z - pos.z;
            float range = a->getExtent() + radius;
            if (range * range > dx * dx + dy * dy + dz * dz) {
                out.insert(a);
            }
        }
    }
    return out;
}

} } }
