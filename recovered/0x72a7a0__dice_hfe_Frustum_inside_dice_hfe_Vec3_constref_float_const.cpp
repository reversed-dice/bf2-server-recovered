// FUNCTION: BF2 0x72a7a0
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
    bool inside(const Vec3& p, float radius) const;
};

bool Frustum::inside(const Vec3& p, float radius) const
{
    const Plane* pl;
    pl = &m_plane5;
    if (pl->x * p.x + pl->y * p.y + pl->z * p.z + pl->w > radius)
        return false;
    pl = &m_plane4;
    if (pl->x * p.x + pl->y * p.y + pl->z * p.z + pl->w > radius)
        return false;
    pl = &m_plane1;
    if (pl->x * p.x + pl->y * p.y + pl->z * p.z + pl->w > radius)
        return false;
    pl = &m_plane0;
    if (pl->x * p.x + pl->y * p.y + pl->z * p.z + pl->w > radius)
        return false;
    pl = &m_plane2;
    if (pl->x * p.x + pl->y * p.y + pl->z * p.z + pl->w > radius)
        return false;
    pl = &m_plane3;
    if (pl->x * p.x + pl->y * p.y + pl->z * p.z + pl->w > radius)
        return false;
    return true;
}

} }
