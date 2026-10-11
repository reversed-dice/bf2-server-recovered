// FUNCTION: BF2 0x6d3ba0
// maya::AwPoint::cartesianize()
#include <assert.h>

namespace maya {

class AwPoint {
public:
    double x;
    double y;
    double z;
    double w;

    AwPoint& cartesianize();
};

AwPoint& AwPoint::cartesianize()
{
    // padding so the assert below lands on line 93 (the binary's __LINE__)
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    if (w == 1.0)
        return *this;
    assert(w != 0.0);
    double inv = 1.0 / w;
    w = 1.0;
    x *= inv;
    y *= inv;
    z *= inv;
    return *this;
}

}
