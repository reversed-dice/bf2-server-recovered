// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x72a8e0
namespace dice { namespace hfe {

struct Vec3 { float x, y, z; };

struct Plane { float x, y, z, w; };

class Frustum {
public:
    Plane m_plane0;
    Plane m_plane1;
    Plane m_plane2;
    Plane m_plane3;
    Plane m_plane4;
    Plane m_plane5;
    bool inside(const Vec3& p, float radius, bool& b) const;
};

bool Frustum::inside(const Vec3& p, float radius, bool& b) const
{
    const Plane* pl;
    float d[6];
    pl = &m_plane4;
    d[2] = pl->x * p.x + pl->y * p.y + pl->z * p.z + pl->w;
    if (d[2] > radius)
        return false;
    pl = &m_plane5;
    d[3] = pl->x * p.x + pl->y * p.y + pl->z * p.z + pl->w;
    if (d[3] > radius)
        return false;
    pl = &m_plane0;
    d[0] = pl->x * p.x + pl->y * p.y + pl->z * p.z + pl->w;
    if (d[0] > radius)
        return false;
    pl = &m_plane1;
    d[1] = pl->x * p.x + pl->y * p.y + pl->z * p.z + pl->w;
    if (d[1] > radius)
        return false;
    pl = &m_plane2;
    d[4] = pl->x * p.x + pl->y * p.y + pl->z * p.z + pl->w;
    if (d[4] > radius)
        return false;
    pl = &m_plane3;
    d[5] = pl->x * p.x + pl->y * p.y + pl->z * p.z + pl->w;
    if (d[5] > radius)
        return false;
    d[0] += radius;
    d[1] += radius;
    d[2] += radius;
    d[3] += radius;
    d[4] += radius;
    d[5] += radius;
    unsigned m = *(unsigned*)&d[0] & *(unsigned*)&d[1] & *(unsigned*)&d[2]
        & *(unsigned*)&d[3] & *(unsigned*)&d[4] & *(unsigned*)&d[5];
    b = (m >> 31) & 1;
    return true;
}

} }
