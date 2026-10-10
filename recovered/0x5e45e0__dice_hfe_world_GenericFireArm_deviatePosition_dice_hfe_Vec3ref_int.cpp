// FUNCTION: BF2 0x5e45e0
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    Vec3() {}
    Vec3(float a, float b, float c) : x(a), y(b), z(c) {}
    Vec3(const Vec3&) {}
    ~Vec3() {}
};

} }

namespace dice { namespace hfe { namespace world {

class DeviationComp {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void d35();
    virtual void d36();
    virtual dice::hfe::Vec3 deviate(dice::hfe::Vec3& pos, int a);
};

class GenericFireArm {
public:
    dice::hfe::Vec3 deviatePosition(dice::hfe::Vec3& pos, int a);
private:
    char m_pad[0x2c8];
    DeviationComp* m_deviationComp;
};

dice::hfe::Vec3 GenericFireArm::deviatePosition(dice::hfe::Vec3& pos, int a)
{
    if (m_deviationComp != 0)
        return m_deviationComp->deviate(pos, a);
    return dice::hfe::Vec3(0.0f, 0.0f, 0.0f);
}

} } }
