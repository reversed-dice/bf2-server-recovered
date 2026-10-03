// FUNCTION: BF2 0x6fa050
// BF2_FLAGS: -fno-strict-aliasing
#include <cmath>
#include <cfloat>
namespace dice { namespace hfe { namespace world {

class Heightmap {
public:
    bool splitHorizontalRay(float x0, float y0, float z0, float x1, float& outX, float& outY, float& outZ) const;
    bool splitVerticalRay(float x0, float y0, float z0, float z1, float& outX, float& outY, float& outZ) const;
    char _pad0[0xb8];
    float m_slopeXZ;
    float m_slopeZX;
    float m_slopeXY;
    float m_slopeZY;
    bool m_flatX;
    bool m_flatZ;
};

bool Heightmap::splitVerticalRay(float x0, float y0, float z0, float z1, float& outX, float& outY, float& outZ) const
{
    float d = z1 - z0;
    outY = d * m_slopeZY + y0;
    outZ = z1;
    if (!m_flatX)
        x0 += d * m_slopeZX;
    outX = x0;
    return !(std::fabs(d) <= FLT_EPSILON);
}

} } }
