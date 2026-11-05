// FUNCTION: BF2 0x6fb590
// BF2_FLAGS: -fno-strict-aliasing
#include <cmath>
#include <cfloat>

namespace dice { namespace hfe {

struct Vec3 { float x, y, z; };

namespace world {

class Heightmap
{
public:
    int getHeightFromGrid(int, int) const;
private:
    char _pad0[0x3c];
    float m_3c;
    float m_40;
public:
    void internalPhongGetNormal(int, int, Vec3&) const;
};

void Heightmap::internalPhongGetNormal(int x, int y, Vec3& normal) const
{
    float const h0 = (float)((int (*)(Heightmap const*, int, int))
        (*(void***)(void const*)this)[0x110 / 8])(this, x, y);
    float const dx = ((float)((int (*)(Heightmap const*, int, int))
        (*(void***)(void const*)this)[0x110 / 8])(this, x + 1, y) - h0) * m_40;
    float const s = m_3c;
    float const dz = ((float)((int (*)(Heightmap const*, int, int))
        (*(void***)(void const*)this)[0x110 / 8])(this, x, y + 1) - h0) * m_40;

    normal.x = dz * 0.0f - dx * s;
    normal.y = s * s;
    normal.z = dx * 0.0f - s * dz;

    float const len2 = normal.x * normal.x + normal.y * normal.y + normal.z * normal.z;
    if (fabsf(len2 - 1.0f) < FLT_EPSILON)
        return;

    if (fabsf(len2) < FLT_EPSILON) {
        normal.x = 0.0f;
        normal.y = 0.0f;
        normal.z = 0.0f;
        return;
    }

    float const f = 1.0f / sqrtf(len2);
    normal.x = normal.x * f;
    normal.y = normal.y * f;
    normal.z = normal.z * f;
}

} } }
