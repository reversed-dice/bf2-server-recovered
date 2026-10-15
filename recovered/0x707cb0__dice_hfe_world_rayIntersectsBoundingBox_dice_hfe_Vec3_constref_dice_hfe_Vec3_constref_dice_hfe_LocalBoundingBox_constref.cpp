// FUNCTION: BF2 0x707cb0
namespace dice { namespace hfe {

struct Vec3 { float x, y, z; };

struct LocalBoundingBox {
    Vec3 m_min;
    Vec3 m_max;
};

bool rayIntersectsBoundingBox(Vec3 const& origin, Vec3 const& dir, LocalBoundingBox const& box)
{
    Vec3 const& hi = box.m_max;
    float tmin;
    float tmax;
    float t1;
    float t2;
    if (dir.x >= 0.0f) {
        tmin = (box.m_min.x - origin.x) * dir.x;
        tmax = (hi.x - origin.x) * dir.x;
    } else {
        tmin = (hi.x - origin.x) * dir.x;
        tmax = (box.m_min.x - origin.x) * dir.x;
    }
    if (dir.y >= 0.0f) {
        t1 = (box.m_min.y - origin.y) * dir.y;
        t2 = (hi.y - origin.y) * dir.y;
    } else {
        t1 = (hi.y - origin.y) * dir.y;
        t2 = (box.m_min.y - origin.y) * dir.y;
    }
    if (tmin > t2) return false;
    if (t1 > tmax) return false;
    if (t1 > tmin) tmin = t1;
    if (t2 < tmax) tmax = t2;
    if (dir.z >= 0.0f) {
        t1 = (box.m_min.z - origin.z) * dir.z;
        t2 = (hi.z - origin.z) * dir.z;
    } else {
        t1 = (hi.z - origin.z) * dir.z;
        t2 = (box.m_min.z - origin.z) * dir.z;
    }
    if (tmin > t2) return false;
    if (t1 > tmax) return false;
    if (t1 > tmin) tmin = t1;
    if (t2 < tmax) tmax = t2;
    return tmin <= 1.0f && tmax >= 0.0f;
}

} }
