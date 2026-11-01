// FUNCTION: BF2 0x56dd20
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3& operator=(const Vec3& o) { set(o.x, o.y, o.z); return *this; }
    Vec3() : x(0), y(0), z(0) {}
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
};

namespace world {

class ZiplineContainer {
public:
    char _pad[0x64c];
    Vec3 m_exit; // 0x64c
    Vec3 _getExitPosition() const;
};

Vec3 ZiplineContainer::_getExitPosition() const
{
    Vec3 result;
    result = m_exit;
    return result;
}

} } }
