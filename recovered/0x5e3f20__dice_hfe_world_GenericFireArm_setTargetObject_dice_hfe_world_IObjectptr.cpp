// FUNCTION: BF2 0x5e3f20
#include <cstddef>

namespace dice { namespace hfe { namespace world {

class Aux {
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
    virtual void d37();
    virtual void d38();
    virtual void d39();
    virtual void d40();
    virtual void setTarget(void*, int, void*);
};

class GF {
public:
    char m_pad[0x400];
};

void* getRootParent(void* o);

void setTargetObject(GF* self, void* obj)
{
    if (*(Aux**)((char*)self + 0x2c0) != 0)
        (*(Aux**)((char*)self + 0x2c0))->setTarget(obj, 1, getRootParent(obj));
}
}}}

