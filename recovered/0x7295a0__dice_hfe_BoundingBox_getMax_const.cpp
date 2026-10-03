// FUNCTION: BF2 0x7295a0
// BF2_FLAGS: -fno-tree-loop-optimize -fno-strength-reduce
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    Vec3() {}
    Vec3(float ax, float ay, float az) : x(ax), y(ay), z(az) {}
    Vec3(const Vec3& o) : x(o.x), y(o.y), z(o.z) {}
};

class BoundingBox {
public:
    Vec3 getMax() const;
    Vec3 m_corners[8];
};

Vec3 BoundingBox::getMax() const
{
    float x = m_corners[0].x, y = m_corners[0].y, z = m_corners[0].z;
    const Vec3* p = &m_corners[1];
    for (int i = 1; i != 8; ++i, ++p) {
        x = p->x > x ? p->x : x;
        y = p->y > y ? p->y : y;
        z = p->z > z ? p->z : z;
    }
    return Vec3(x, y, z);
}

} }
