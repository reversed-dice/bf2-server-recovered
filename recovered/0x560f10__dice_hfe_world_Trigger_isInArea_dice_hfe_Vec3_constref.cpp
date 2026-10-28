// FUNCTION: BF2 0x560f10
#include <math.h>

namespace dice { namespace hfe { namespace world {

struct Vec3 { float x; float y; float z; };

struct Volume {
    char pad0[0x1fc];
    float m_radius;
};

class Obj {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26();
    virtual Vec3 const& getAbsolutePosition() const;
    char pad1[568];
    Volume* m_volume;
    bool isInArea(Vec3 const& p) const;
};

bool Obj::isInArea(Vec3 const& p) const {
    Vec3 const& a = getAbsolutePosition();
    float dy = a.y - p.y;
    float dz = a.z - p.z;
    float dx = a.x - p.x;
    float d = sqrtf(dx * dx + dy * dy + dz * dz);
    return m_volume->m_radius > d;
}

}}}
