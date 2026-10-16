// FUNCTION: BF2 0x72f1c0
namespace dice { namespace hfe {

struct Mat3 {
    float m[9];
    Mat3& fullMult(Mat3 const& a, Mat3 const& b);
};

Mat3& Mat3::fullMult(Mat3 const& a, Mat3 const& b)
{
    m[0] = a.m[0] * b.m[0] + a.m[1] * b.m[3] + a.m[2] * b.m[6];
    float* r1 = &m[3];
    r1[0] = a.m[3] * b.m[0] + a.m[4] * b.m[3] + a.m[5] * b.m[6];
    float* r2 = &m[6];
    r2[0] = a.m[6] * b.m[0] + a.m[7] * b.m[3] + a.m[8] * b.m[6];
    m[1] = a.m[0] * b.m[1] + a.m[1] * b.m[4] + a.m[2] * b.m[7];
    r1[1] = a.m[3] * b.m[1] + a.m[4] * b.m[4] + a.m[5] * b.m[7];
    r2[1] = a.m[6] * b.m[1] + a.m[7] * b.m[4] + a.m[8] * b.m[7];
    m[2] = a.m[0] * b.m[2] + a.m[1] * b.m[5] + a.m[2] * b.m[8];
    r1[2] = a.m[3] * b.m[2] + a.m[4] * b.m[5] + a.m[5] * b.m[8];
    r2[2] = a.m[6] * b.m[2] + a.m[7] * b.m[5] + a.m[8] * b.m[8];
    return *this;
}

} }
