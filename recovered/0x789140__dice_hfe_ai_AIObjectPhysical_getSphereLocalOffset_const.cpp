// FUNCTION: BF2 0x789140
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3() {}
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
};

struct LocalBoundingBox {
    char pad[0x20];
    bool m_dirty;
    char pad2[0x30 - 0x21];
    Vec3 m_sphereLocalOffset;
    void calcRadius();
};

namespace ai {

class AIObjectPhysical {
public:
    virtual ~AIObjectPhysical();
    virtual void v02() const;
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07() const;
    virtual void v08() const;
    virtual void v09() const;
    virtual void v10() const;
    virtual void v11() const;
    virtual LocalBoundingBox* getLocalBoundingBox() const;
    virtual void v13();
    virtual void v14();
    virtual void v15() const;
    virtual Vec3 getSphereLocalOffset() const;
};

Vec3 AIObjectPhysical::getSphereLocalOffset() const {
    LocalBoundingBox* box = getLocalBoundingBox();
    if (box->m_dirty)
        box->calcRadius();
    return box->m_sphereLocalOffset;
}

} } }
