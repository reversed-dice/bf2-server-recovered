// FUNCTION: BF2 0x5e4730
#include <cstddef>

namespace dice { namespace hfe { namespace world {

class Aux {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void remove(void*);
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
    virtual void clear();
};

class GF {
public:
    char m_pad[0x400];
};

void* getLocalPredictedProjectile(GF* self);

extern Aux* objectManager;

void resetFirearm(GF* self)
{
    void* p;
    while ((p = getLocalPredictedProjectile(self)) != 0)
        objectManager->remove(p);
    if (*(Aux**)((char*)self + 0x290) != 0)
        (*(Aux**)((char*)self + 0x290))->clear();
    if (*(Aux**)((char*)self + 0x2c0) != 0)
        (*(Aux**)((char*)self + 0x2c0))->clear();
}
}}}

