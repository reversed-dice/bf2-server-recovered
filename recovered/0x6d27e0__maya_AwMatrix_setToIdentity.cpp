// FUNCTION: BF2 0x6d27e0
// BF2_FLAGS: -funroll-loops
namespace maya {

class AwMatrix
{
public:
    AwMatrix();
    ~AwMatrix();
    AwMatrix& setToIdentity();
    double m[16];
};

AwMatrix& AwMatrix::setToIdentity()
{
    for (int i = 0; i < 16; ++i)
        m[i] = (i % 5 == 0) ? 1.0 : 0.0;
    return *this;
}

}
