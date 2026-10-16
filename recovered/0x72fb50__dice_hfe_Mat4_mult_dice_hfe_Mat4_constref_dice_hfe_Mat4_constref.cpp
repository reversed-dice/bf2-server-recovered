// FUNCTION: BF2 0x72fb50
namespace dice { namespace hfe {

struct Mat4 {
    float m[16];
    Mat4& mult(Mat4 const& a, Mat4 const& b);
};

Mat4& Mat4::mult(Mat4 const& a, Mat4 const& b)
{
    m[0] = a.m[0] * b.m[0] + a.m[1] * b.m[4] + a.m[2] * b.m[8];
    float* r1 = &m[4];
    r1[0] = a.m[4] * b.m[0] + a.m[5] * b.m[4] + a.m[6] * b.m[8];
    float* r2 = &m[8];
    r2[0] = a.m[8] * b.m[0] + a.m[9] * b.m[4] + a.m[10] * b.m[8];
    const float* b3 = &b.m[12];
    float* r3 = &m[12];
    r3[0] = a.m[12] * b.m[0] + a.m[13] * b.m[4] + a.m[14] * b.m[8] + b3[0];
    m[1] = a.m[0] * b.m[1] + a.m[1] * b.m[5] + a.m[2] * b.m[9];
    r1[1] = a.m[4] * b.m[1] + a.m[5] * b.m[5] + a.m[6] * b.m[9];
    r2[1] = a.m[8] * b.m[1] + a.m[9] * b.m[5] + a.m[10] * b.m[9];
    r3[1] = a.m[12] * b.m[1] + a.m[13] * b.m[5] + a.m[14] * b.m[9] + b3[1];
    m[2] = a.m[0] * b.m[2] + a.m[1] * b.m[6] + a.m[2] * b.m[10];
    r1[2] = a.m[4] * b.m[2] + a.m[5] * b.m[6] + a.m[6] * b.m[10];
    r2[2] = a.m[8] * b.m[2] + a.m[9] * b.m[6] + a.m[10] * b.m[10];
    r3[2] = a.m[12] * b.m[2] + a.m[13] * b.m[6] + a.m[14] * b.m[10] + b3[2];
    m[3] = 0.0f;
    r1[3] = 0.0f;
    r2[3] = 0.0f;
    r3[3] = 1.0f;
    return *this;
}

} }
