// FUNCTION: BF2 0x615010
typedef unsigned int (*vfn1)(void*);
typedef void* (*vfn2)(void*);
typedef void (*vfn3)(void*);
typedef void (*vfn4)(void*, unsigned int);

extern "C" void* dice_hfe_gameLogic;

namespace dice { namespace hfe {

class GameLogic {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void slot13(unsigned int, unsigned int, unsigned int);
};

} }

namespace dice { namespace hfe { namespace world {

class GenericProjectileTemplate {
public:
    unsigned long long getWaterTracerTemplate() const;
    void preCache() const;
};

void GenericProjectileTemplate::preCache() const {
    void* self = (void*)this;
    if ((((vfn1)(*(void***)self)[0x90 / 8])(self) & 0x20) == 0) {
        void* a = ((vfn2)(*(void***)self)[0x128 / 8])(self);
        if (*(long*)(*(char**)a - 0x18) != 0) {
            ((GameLogic*)dice_hfe_gameLogic)->slot13(
                ((vfn1)(*(void***)self)[0x88 / 8])(self), 0x10, 0x10);
        }
        void* p = ((vfn2)(*(void***)self)[0xa8 / 8])(self);
        ((vfn3)(*(void***)p)[0x40 / 8])(p);
        ((vfn4)(*(void***)p)[0x490 / 8])(p, 0);
        *(char*)((char*)p + 0x361) = 1;
        ((vfn3)(*(void***)p)[0x70 / 8])(p);
        void* s = ((vfn2)(*(void***)self)[0x2b8 / 8])(self);
        if (s != 0) {
            void* r = ((vfn2)(*(void***)s)[0x48 / 8])(s);
            ((vfn3)(*(void***)r)[0x10 / 8])(r);
        }
        void* t = (void*)getWaterTracerTemplate();
        if (t != 0) {
            void* r = ((vfn2)(*(void***)t)[0x48 / 8])(t);
            return ((vfn3)(*(void***)r)[0x10 / 8])(r);
        }
    }
}

} } }
