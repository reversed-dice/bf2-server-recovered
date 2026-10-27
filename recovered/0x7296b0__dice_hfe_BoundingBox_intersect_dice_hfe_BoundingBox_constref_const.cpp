// FUNCTION: BF2 0x7296b0
// BF2_FLAGS: -fno-strict-aliasing
#include <math.h>

namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    Vec3() {}
    Vec3(float ax, float ay, float az) : x(ax), y(ay), z(az) {}
    Vec3(const Vec3& o) : x(o.x), y(o.y), z(o.z) {}
    Vec3 operator-(const Vec3& o) const { return Vec3(x - o.x, y - o.y, z - o.z); }
    Vec3 operator*(float s) const { return Vec3(x * s, y * s, z * s); }
    Vec3& operator*=(float s) { x *= s; y *= s; z *= s; return *this; }
    float dot(const Vec3& o) const { return x * o.x + y * o.y + z * o.z; }
    float length() const { return sqrtf(x * x + y * y + z * z); }
};

class BoundingBox {
public:
    Vec3 getCentre() const;
    bool intersect(const BoundingBox& o) const;
    Vec3 m_corners[8];
};

bool BoundingBox::intersect(const BoundingBox& o) const
{
    Vec3 A0 = (m_corners[4] - m_corners[0]) * 0.5f;
    Vec3 A1 = (m_corners[2] - m_corners[0]) * 0.5f;
    Vec3 A2 = (m_corners[1] - m_corners[0]) * 0.5f;
    float a0 = A0.length();
    float a1 = A1.length();
    float a2 = A2.length();
    A0 *= 1.0f / a0;
    A1 *= 1.0f / a1;
    A2 *= 1.0f / a2;

    Vec3 B0 = (o.m_corners[4] - o.m_corners[0]) * 0.5f;
    Vec3 B1 = (o.m_corners[2] - o.m_corners[0]) * 0.5f;
    Vec3 B2 = (o.m_corners[1] - o.m_corners[0]) * 0.5f;
    float b0 = B0.length();
    float b1 = B1.length();
    float b2 = B2.length();
    B0 *= 1.0f / b0;
    B1 *= 1.0f / b1;
    B2 *= 1.0f / b2;

    Vec3 D = o.getCentre() - getCentre();
    Vec3 akA[3] = { A0, A1, A2 };
    Vec3 akB[3] = { B0, B1, B2 };
    float afEA[3] = { a0, a1, a2 };
    float afEB[3] = { b0, b1, b2 };

    float aafC[3][3];
    float aafAbsC[3][3];
    float afAD[3];
    float fR0, fR1, fR;
    float fR01;

    aafC[0][0] = akA[0].dot(akB[0]);
    aafC[0][1] = akA[0].dot(akB[1]);
    aafC[0][2] = akA[0].dot(akB[2]);
    afAD[0] = akA[0].dot(D);
    aafAbsC[0][0] = fabsf(aafC[0][0]);
    aafAbsC[0][1] = fabsf(aafC[0][1]);
    aafAbsC[0][2] = fabsf(aafC[0][2]);
    fR = fabsf(afAD[0]);
    fR1 = afEB[0] * aafAbsC[0][0] + afEB[1] * aafAbsC[0][1] + afEB[2] * aafAbsC[0][2];
    fR01 = afEA[0] + fR1;
    if (fR > fR01) return false;

    aafC[1][0] = akA[1].dot(akB[0]);
    aafC[1][1] = akA[1].dot(akB[1]);
    aafC[1][2] = akA[1].dot(akB[2]);
    afAD[1] = akA[1].dot(D);
    aafAbsC[1][0] = fabsf(aafC[1][0]);
    aafAbsC[1][1] = fabsf(aafC[1][1]);
    aafAbsC[1][2] = fabsf(aafC[1][2]);
    fR = fabsf(afAD[1]);
    fR1 = afEB[0] * aafAbsC[1][0] + afEB[1] * aafAbsC[1][1] + afEB[2] * aafAbsC[1][2];
    fR01 = afEA[1] + fR1;
    if (fR > fR01) return false;

    aafC[2][0] = akA[2].dot(akB[0]);
    aafC[2][1] = akA[2].dot(akB[1]);
    aafC[2][2] = akA[2].dot(akB[2]);
    afAD[2] = akA[2].dot(D);
    aafAbsC[2][0] = fabsf(aafC[2][0]);
    aafAbsC[2][1] = fabsf(aafC[2][1]);
    aafAbsC[2][2] = fabsf(aafC[2][2]);
    fR = fabsf(afAD[2]);
    fR1 = afEB[0] * aafAbsC[2][0] + afEB[1] * aafAbsC[2][1] + afEB[2] * aafAbsC[2][2];
    fR01 = afEA[2] + fR1;
    if (fR > fR01) return false;

    fR = fabsf(akB[0].dot(D));
    fR0 = afEA[0] * aafAbsC[0][0] + afEA[1] * aafAbsC[1][0] + afEA[2] * aafAbsC[2][0];
    fR01 = fR0 + afEB[0];
    if (fR > fR01) return false;

    fR = fabsf(akB[1].dot(D));
    fR0 = afEA[0] * aafAbsC[0][1] + afEA[1] * aafAbsC[1][1] + afEA[2] * aafAbsC[2][1];
    fR01 = fR0 + afEB[1];
    if (fR > fR01) return false;

    fR = fabsf(akB[2].dot(D));
    fR0 = afEA[0] * aafAbsC[0][2] + afEA[1] * aafAbsC[1][2] + afEA[2] * aafAbsC[2][2];
    fR01 = fR0 + afEB[2];
    if (fR > fR01) return false;

    fR = fabsf(afAD[2] * aafC[1][0] - afAD[1] * aafC[2][0]);
    fR0 = afEA[1] * aafAbsC[2][0] + afEA[2] * aafAbsC[1][0];
    fR1 = afEB[1] * aafAbsC[0][2] + afEB[2] * aafAbsC[0][1];
    fR01 = fR0 + fR1;
    if (fR > fR01) return false;

    fR = fabsf(afAD[2] * aafC[1][1] - afAD[1] * aafC[2][1]);
    fR0 = afEA[1] * aafAbsC[2][1] + afEA[2] * aafAbsC[1][1];
    fR1 = afEB[0] * aafAbsC[0][2] + afEB[2] * aafAbsC[0][0];
    fR01 = fR0 + fR1;
    if (fR > fR01) return false;

    fR = fabsf(afAD[2] * aafC[1][2] - afAD[1] * aafC[2][2]);
    fR0 = afEA[1] * aafAbsC[2][2] + afEA[2] * aafAbsC[1][2];
    fR1 = afEB[0] * aafAbsC[0][1] + afEB[1] * aafAbsC[0][0];
    fR01 = fR0 + fR1;
    if (fR > fR01) return false;

    fR = fabsf(afAD[0] * aafC[2][0] - afAD[2] * aafC[0][0]);
    fR0 = afEA[0] * aafAbsC[2][0] + afEA[2] * aafAbsC[0][0];
    fR1 = afEB[1] * aafAbsC[1][2] + afEB[2] * aafAbsC[1][1];
    fR01 = fR0 + fR1;
    if (fR > fR01) return false;

    fR = fabsf(afAD[0] * aafC[2][1] - afAD[2] * aafC[0][1]);
    fR0 = afEA[0] * aafAbsC[2][1] + afEA[2] * aafAbsC[0][1];
    fR1 = afEB[0] * aafAbsC[1][2] + afEB[2] * aafAbsC[1][0];
    fR01 = fR0 + fR1;
    if (fR > fR01) return false;

    fR = fabsf(afAD[0] * aafC[2][2] - afAD[2] * aafC[0][2]);
    fR0 = afEA[0] * aafAbsC[2][2] + afEA[2] * aafAbsC[0][2];
    fR1 = afEB[0] * aafAbsC[1][1] + afEB[1] * aafAbsC[1][0];
    fR01 = fR0 + fR1;
    if (fR > fR01) return false;

    fR = fabsf(afAD[1] * aafC[0][0] - afAD[0] * aafC[1][0]);
    fR0 = afEA[0] * aafAbsC[1][0] + afEA[1] * aafAbsC[0][0];
    fR1 = afEB[1] * aafAbsC[2][2] + afEB[2] * aafAbsC[2][1];
    fR01 = fR0 + fR1;
    if (fR > fR01) return false;

    fR = fabsf(afAD[1] * aafC[0][1] - afAD[0] * aafC[1][1]);
    fR0 = afEA[0] * aafAbsC[1][1] + afEA[1] * aafAbsC[0][1];
    fR1 = afEB[0] * aafAbsC[2][2] + afEB[2] * aafAbsC[2][0];
    fR01 = fR0 + fR1;
    if (fR > fR01) return false;

    fR = fabsf(afAD[1] * aafC[0][2] - afAD[0] * aafC[1][2]);
    fR0 = afEA[0] * aafAbsC[1][2] + afEA[1] * aafAbsC[0][2];
    fR1 = afEB[0] * aafAbsC[2][1] + afEB[1] * aafAbsC[2][0];
    fR01 = fR0 + fR1;
    if (fR > fR01) return false;

    return true;
}

} }
