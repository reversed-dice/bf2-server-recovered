// FUNCTION: BF2 0x72f640
namespace dice { namespace hfe {

struct Vec4 {
    float x, y, z, w;
    float& operator[](int i) { return (&x)[i]; }
    const float& operator[](int i) const { return (&x)[i]; }
};

class Mat4 {
public:
    Mat4& setTranspose(const Mat4& o);
    Vec4 r[4];
};

Mat4& Mat4::setTranspose(const Mat4& o)
{
    r[0][0] = o.r[0][0];
    r[0][1] = o.r[1][0];
    r[0][2] = o.r[2][0];
    r[0][3] = o.r[3][0];
    r[1][0] = o.r[0][1];
    r[1][1] = o.r[1][1];
    r[1][2] = o.r[2][1];
    r[1][3] = o.r[3][1];
    r[2][0] = o.r[0][2];
    r[2][1] = o.r[1][2];
    r[2][2] = o.r[2][2];
    r[2][3] = o.r[3][2];
    r[3][0] = o.r[0][3];
    r[3][1] = o.r[1][3];
    r[3][2] = o.r[2][3];
    r[3][3] = o.r[3][3];
    return *this;
}

} }
