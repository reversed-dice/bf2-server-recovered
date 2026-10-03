// FUNCTION: BF2 0x729660
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    Vec3() {}
    Vec3(float ax, float ay, float az) : x(ax), y(ay), z(az) {}
    Vec3(const Vec3& o) : x(o.x), y(o.y), z(o.z) {}
    Vec3 operator+(const Vec3& o) const { return Vec3(x + o.x, y + o.y, z + o.z); }
    Vec3 operator*(float s) const { return Vec3(x * s, y * s, z * s); }
};

class BoundingBox {
public:
    Vec3 getCentre() const;
    Vec3 m_min;
    char _padc[0x48];
    Vec3 m_max;
};

Vec3 BoundingBox::getCentre() const
{
    return (m_min + m_max) * 0.5f;
}

} }
