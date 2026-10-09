// FUNCTION: BF2 0x6041a0
// BF2_FLAGS: -fno-gcse
#include <new>

struct Obj {
    int refs;
};

class Ptr {
public:
    Obj* h;
    Ptr() : h(0) {}
    void release() {
        if (h) {
            if (--h->refs == 0)
                ::operator delete(h);
        }
    }
    ~Ptr() { release(); }
    Ptr& operator=(const Ptr& o) {
        if (o.h)
            ++o.h->refs;
        release();
        h = o.h;
        return *this;
    }
};

class IObject {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual Ptr getProjectile();
};

namespace dice { namespace hfe { namespace world {

void LPTargetComp_setCurrentProjectile(char* self, IObject* obj)
{
    if (obj == 0) {
        Ptr empty;
        *(Ptr*)(self + 0x88) = empty;
        return;
    }
    Ptr tmp = obj->getProjectile();
    *(Ptr*)(self + 0x88) = tmp;
}

} } }
