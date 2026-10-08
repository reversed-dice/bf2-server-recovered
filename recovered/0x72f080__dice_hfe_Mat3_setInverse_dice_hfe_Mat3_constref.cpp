// FUNCTION: BF2 0x72f080
namespace dice { namespace hfe {

struct Mat3 {
    float m[9];
    Mat3& setInverse(Mat3 const& in);
};

Mat3& Mat3::setInverse(Mat3 const& in)
{
    float a = in.m[0]; m[0] = a;
    float d = in.m[3]; m[1] = d;
    float b = in.m[1]; m[3] = b;
    float e = in.m[4]; m[4] = e;
    m[6] = -(a * in.m[6] + b * in.m[7]);
    m[7] = -(d * in.m[6] + e * in.m[7]);
    m[2] = m[5] = 0.0f;
    return *this;
}

} }
