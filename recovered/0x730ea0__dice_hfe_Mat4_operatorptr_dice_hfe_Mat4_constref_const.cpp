// FUNCTION: BF2 0x730ea0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

struct Vec4 {
    Vec4() : x(0), y(0), z(0), w(0) {}
    void set(float x_, float y_, float z_, float w_) { (*this)[0] = x_; (*this)[1] = y_; (*this)[2] = z_; (*this)[3] = w_; }
    float& operator[](int i) { return (&x)[i]; }
    const float& operator[](int i) const { return (&x)[i]; }
    float x, y, z, w;
};

class Mat4 {
public:
    Mat4() {}
    Vec4& operator[](int i) { return r[i]; }
    Mat4(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23, float m30, float m31, float m32, float m33)
    {
        (*this)[0].set(m00, m01, m02, m03);
        (*this)[1].set(m10, m11, m12, m13);
        (*this)[2].set(m20, m21, m22, m23);
        (*this)[3].set(m30, m31, m32, m33);
    }
    Mat4 operator*(const Mat4& m) const;
    Vec4 r[4];
};

Mat4 Mat4::operator*(const Mat4& m) const
{
    return Mat4(r[0][0] * m.r[0][0] + r[0][1] * m.r[1][0] + r[0][2] * m.r[2][0] + r[0][3] * m.r[3][0],
        r[1][0] * m.r[0][0] + r[1][1] * m.r[1][0] + r[1][2] * m.r[2][0] + r[1][3] * m.r[3][0],
        r[2][0] * m.r[0][0] + r[2][1] * m.r[1][0] + r[2][2] * m.r[2][0] + r[2][3] * m.r[3][0],
        r[3][0] * m.r[0][0] + r[3][1] * m.r[1][0] + r[3][2] * m.r[2][0] + r[3][3] * m.r[3][0],
        r[0][0] * m.r[0][1] + r[0][1] * m.r[1][1] + r[0][2] * m.r[2][1] + r[0][3] * m.r[3][1],
        r[1][0] * m.r[0][1] + r[1][1] * m.r[1][1] + r[1][2] * m.r[2][1] + r[1][3] * m.r[3][1],
        r[2][0] * m.r[0][1] + r[2][1] * m.r[1][1] + r[2][2] * m.r[2][1] + r[2][3] * m.r[3][1],
        r[3][0] * m.r[0][1] + r[3][1] * m.r[1][1] + r[3][2] * m.r[2][1] + r[3][3] * m.r[3][1],
        r[0][0] * m.r[0][2] + r[0][1] * m.r[1][2] + r[0][2] * m.r[2][2] + r[0][3] * m.r[3][2],
        r[1][0] * m.r[0][2] + r[1][1] * m.r[1][2] + r[1][2] * m.r[2][2] + r[1][3] * m.r[3][2],
        r[2][0] * m.r[0][2] + r[2][1] * m.r[1][2] + r[2][2] * m.r[2][2] + r[2][3] * m.r[3][2],
        r[3][0] * m.r[0][2] + r[3][1] * m.r[1][2] + r[3][2] * m.r[2][2] + r[3][3] * m.r[3][2],
        r[0][0] * m.r[0][3] + r[0][1] * m.r[1][3] + r[0][2] * m.r[2][3] + r[0][3] * m.r[3][3],
        r[1][0] * m.r[0][3] + r[1][1] * m.r[1][3] + r[1][2] * m.r[2][3] + r[1][3] * m.r[3][3],
        r[2][0] * m.r[0][3] + r[2][1] * m.r[1][3] + r[2][2] * m.r[2][3] + r[2][3] * m.r[3][3],
        r[3][0] * m.r[0][3] + r[3][1] * m.r[1][3] + r[3][2] * m.r[2][3] + r[3][3] * m.r[3][3]);
}

} }
