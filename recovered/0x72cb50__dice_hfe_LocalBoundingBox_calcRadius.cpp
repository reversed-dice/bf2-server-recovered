// FUNCTION: BF2 0x72cb50
// BF2_FLAGS: -fno-tree-dominator-opts
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3() {}
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
};

class LocalBoundingBox {
public:
    Vec3 getCorner(int) const;
    void calcRadius();
private:
    Vec3  m_min;
    Vec3  m_max;
    float m_radius;
    float m_radius2;
    bool  m_dirty;
    Vec3  m_extents;
    Vec3  m_sphereLocalOffset;
};

} }

extern "C" {
    float sqrtf(float x);
}

namespace dice { namespace hfe {

void LocalBoundingBox::calcRadius()
{
    Vec3 local;
    float r2 = 0.0f;
    for (int i = 0; i < 8; ++i) {
        Vec3 c = getCorner(i);
        float d = c.x * c.x + c.y * c.y + c.z * c.z;
        if (d > r2) r2 = d;
    }
    m_radius = sqrtf(r2);

    Vec3 const& lo = m_min;
    Vec3 const& hi = m_max;
    Vec3& ctr = m_sphereLocalOffset;

    float* c = (float*)&m_sphereLocalOffset;
    float cx = (lo.x + hi.x) * 0.5f;
    float cz = (lo.z + hi.z) * 0.5f;
    float cy = (lo.y + hi.y) * 0.5f;
    c[0] = cx;
    c[2] = cz;
    c[1] = cy;

    r2 = 0.0f;
    for (int i = 0; i < 8; ++i) {
        local = getCorner(i);
        float dx = local.x - ctr.x;
        float dy = local.y - ctr.y;
        float dz = local.z - ctr.z;
        float d = dx * dx + dy * dy + dz * dz;
        if (d > r2) r2 = d;
    }
    m_radius2 = sqrtf(r2);

    float* d = (float*)&m_extents;
    float ez = hi.z - lo.z;
    float ey = hi.y - lo.y;
    float ex = hi.x - lo.x;
    d[0] = ex;
    d[1] = ey;
    d[2] = ez;
    ((unsigned char*)this)[0x20] = 0;   // m_dirty = false
}

} }
