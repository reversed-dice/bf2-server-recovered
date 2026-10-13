// BF2_FLAGS: -funroll-loops
// FUNCTION: BF2 0x6d50e0
namespace maya {

class AwMatrix {
public:
    double m[16];
};

class AwVector {
public:
    double x;
    double y;
    double z;
    AwMatrix operator*(AwMatrix const& mat) const;
};

AwMatrix AwVector::operator*(AwMatrix const& mat) const {
    AwMatrix r;
    for (int i = 15; i >= 0; --i) r.m[i] = 0.0;
    r.m[15] = 1.0;
    r.m[10] = 1.0;
    r.m[5] = 1.0;
    r.m[0] = 1.0;
    r.m[12] = x;
    r.m[13] = y;
    r.m[14] = z;
    return r;
}

}
