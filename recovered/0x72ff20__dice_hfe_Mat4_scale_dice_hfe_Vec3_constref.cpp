// FUNCTION: BF2 0x72ff20
namespace dice { namespace hfe {
class Vec3 { public: float x; float y; float z; };
class Mat4 {
public:
    float m[16];
    Mat4& scale(Vec3 const& v);
};
} }

namespace dice { namespace hfe {

Mat4& Mat4::scale(Vec3 const& vec) {
    float* v = (float*)&vec;
    m[0] = m[0] * v[0];
    m[4] = m[4] * v[0];
    m[8] = m[8] * v[0];
    m[12] = m[12] * v[0];
    m[1] = m[1] * v[1];
    m[5] = m[5] * v[1];
    m[9] = m[9] * v[1];
    m[13] = m[13] * v[1];
    m[2] = m[2] * v[2];
    m[6] = m[6] * v[2];
    m[10] = m[10] * v[2];
    m[14] = m[14] * v[2];
    return *this;
}
} }
