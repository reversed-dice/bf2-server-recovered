// FUNCTION: BF2 0x6d2d70
namespace maya {

class AwMatrix {
public:
    double m[16];
    AwMatrix operator*(double s) const;
};

AwMatrix AwMatrix::operator*(double s) const
{
    AwMatrix r;
    r.m[0] = m[0];
    r.m[1] = m[1];
    r.m[2] = m[2];
    r.m[3] = m[3];
    r.m[4] = m[4];
    r.m[5] = m[5];
    r.m[6] = m[6];
    r.m[7] = m[7];
    r.m[8] = m[8];
    r.m[9] = m[9];
    r.m[10] = m[10];
    r.m[11] = m[11];
    r.m[12] = m[12];
    r.m[13] = m[13];
    r.m[14] = m[14];
    r.m[15] = m[15];
    r.m[0] *= s;
    r.m[1] *= s;
    r.m[2] *= s;
    r.m[3] *= s;
    r.m[4] *= s;
    r.m[5] *= s;
    r.m[6] *= s;
    r.m[7] *= s;
    r.m[8] *= s;
    r.m[9] *= s;
    r.m[10] *= s;
    r.m[11] *= s;
    r.m[12] *= s;
    r.m[13] *= s;
    r.m[14] *= s;
    r.m[15] *= s;
    return r;
}

}
