// FUNCTION: BF2 0x5e4cc0
namespace dice { namespace hfe { namespace world {

class IObject {
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
    virtual bool isActive();
};

class WeakRef {
public:
    void* pad0;
    IObject* obj;
};

class GenericFireArm {
public:
    IObject* getPlayer();
};

IObject* GenericFireArm::getPlayer() {
    IObject* r = 0;
    WeakRef* w = *(WeakRef**)((char*)this + 0x328);
    if (w != 0) {
        r = w->obj;
        if (r != 0 && r->isActive()) {
            return r;
        }
        if (*(char*)((char*)this + 0x30c) == 0) {
            r = 0;
        }
    }
    return r;
}

} } }
