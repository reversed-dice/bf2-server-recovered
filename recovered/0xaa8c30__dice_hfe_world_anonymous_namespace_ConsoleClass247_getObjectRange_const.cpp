// FUNCTION: BF2 0xaa8c30
struct Vec3 { float x, y, z; };
struct RangePair { Vec3* a; Vec3* b; };

namespace dice { namespace hfe { namespace world { namespace {

class ConsoleClass247 {
public:
    RangePair getObjectRange() const;
};

RangePair ConsoleClass247::getObjectRange() const {
    float* f1 = (float*)((char*)this + 0x118);
    float lo = -4096.0f;
    float hi = 4096.0f;
    f1[0] = lo;
    f1[1] = lo;
    f1[2] = lo;
    float* f2 = (float*)((char*)this + 0x124);
    f2[0] = hi;
    f2[1] = hi;
    f2[2] = hi;
    RangePair r;
    r.a = (Vec3*)f1;
    r.b = (Vec3*)f2;
    return r;
}

} } } }
