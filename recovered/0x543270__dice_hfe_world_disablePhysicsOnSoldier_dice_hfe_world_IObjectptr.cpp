// FUNCTION: BF2 0x543270
// dice::hfe::world::disablePhysicsOnSoldier(dice::hfe::world::IObject*)
namespace dice { namespace hfe { namespace world {

struct IObject;
struct Vec3 { float x, y, z; };

typedef unsigned int (*FnGetCID)(void*);
typedef void         (*FnOne )(void*, int);
typedef void*        (*FnQuery)(void*, unsigned int, unsigned int);
typedef void         (*FnThree)(void*, int);
typedef void         (*FnVec  )(void*, Vec3*);
typedef void*        (*FnFirst)(void*);

void disablePhysicsOnSoldier(IObject* p)
{
    if (((FnGetCID)(*(void***)(*(void**)((char*)p + 0x28)))[0x20 / 8])(*(void**)((char*)p + 0x28))
            == *(unsigned int*)0x00c7d03c)
    {
        *(float*)((char*)p + 0x3c4) = 0.0f;
        *(float*)((char*)p + 0x3c0) = 0.0f;
    }

    void* m88 = *(void**)((char*)p + 0x88);
    if (m88)
        ((FnOne)(*(void***)m88)[0x200 / 8])(m88, 1);

    unsigned int iid = *(unsigned int*)0x00c965a8;
    void* rp = ((FnQuery)(*(void***)p)[0xb8 / 8])(p, iid, iid);
    if (rp) {
        ((FnThree)(*(void***)rp)[0x98 / 8])(rp, 3);
        FnVec f = (FnVec)(*(void***)rp)[0x110 / 8];
        Vec3 v = {0, 0, 0};
        f(rp, &v);
    }

    void* c = ((FnFirst)(*(void***)p)[0x1e0 / 8])(p);
    while (c) {
        disablePhysicsOnSoldier((IObject*)c);
        c = *(void**)((char*)c + 0x58);
    }
}

} } }
