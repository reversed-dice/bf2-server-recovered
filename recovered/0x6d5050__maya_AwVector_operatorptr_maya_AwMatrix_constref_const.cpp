// FUNCTION: BF2 0x6d5050
namespace maya {

struct AwMatrix;

struct AwVector {
    double x, y, z;
    AwVector() : x(0.0), y(0.0), z(0.0) {}
    AwVector operator*(AwMatrix const& m) const;
};

struct AwMatrix {
    double m[4][4];
};

AwVector AwVector::operator*(AwMatrix const& mm) const
{
    AwVector r;
    r.x = x * mm.m[0][0] + y * mm.m[1][0] + z * mm.m[2][0];
    r.y = x * mm.m[0][1] + y * mm.m[1][1] + z * mm.m[2][1];
    r.z = x * mm.m[0][2] + y * mm.m[1][2] + z * mm.m[2][2];
    return r;
}

}
