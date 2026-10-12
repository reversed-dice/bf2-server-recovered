// FUNCTION: BF2 0x72f350
namespace dice { namespace hfe {
struct Mat3 { float m[3][3]; Mat3& rotMult(Mat3 const& a, Mat3 const& b); };
Mat3& Mat3::rotMult(Mat3 const& a, Mat3 const& b) {
    m[0][0] = a.m[0][0] * b.m[0][0] + a.m[0][1] * b.m[1][0];
    m[1][0] = a.m[1][0] * b.m[0][0] + a.m[1][1] * b.m[1][0];
    m[0][1] = a.m[0][0] * b.m[0][1] + a.m[0][1] * b.m[1][1];
    m[1][1] = a.m[1][0] * b.m[0][1] + a.m[1][1] * b.m[1][1];
    return *this;
}
}}
