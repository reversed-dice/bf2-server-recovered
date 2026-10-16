// FUNCTION: BF2 0x5ccc50
namespace dice { namespace hfe {

namespace world {

class GenericProjectile {
public:
    char _pad0[0x88];
    void* m_88;
    char _pad1[0x36a - 0x90];
    unsigned char m_36a;
    void stopEffects();
};

}

typedef void* (*FnV)(void*);
typedef void (*FnVi)(void*, int);
typedef void (*FnVii)(void*, int, int);
typedef unsigned int (*FnU)(void*);
typedef void* (*FnVV)(void*, void*);

class GenericProjectileNetworkable {
public:
    world::GenericProjectile* createInterpolationProxy(world::GenericProjectile* arg);
};

world::GenericProjectile* GenericProjectileNetworkable::createInterpolationProxy(world::GenericProjectile* arg)
{
    void* o = *(void**)((char*)arg + 0x28);
    world::GenericProjectile* proj = (world::GenericProjectile*)((FnV)(*(void***)o)[0xa8 / 8])(o);

    ((FnVi)(*(void***)proj)[0x500 / 8])(proj, 1);
    ((FnV)(*(void***)proj)[0x40 / 8])(proj);

    void* child0 = *(void**)((char*)proj + 0x88);
    if (child0 != 0)
        ((FnV)(*(void***)child0)[0x260 / 8])(child0);

    ((FnVi)(*(void***)proj)[0x370 / 8])(proj, ((FnU)(*(void***)arg)[0x378 / 8])(arg));
    ((FnV)(*(void***)proj)[0x318 / 8])(proj);
    proj->stopEffects();

    void* c2 = *(void**)((char*)arg + 0x88);
    void* c1 = *(void**)((char*)proj + 0x88);
    if (c1 != 0 && c2 != 0) {
        ((FnVi)(*(void***)c1)[0x230 / 8])(c1, 1);
        ((FnVV)(*(void***)c1)[0xd0 / 8])(c1, ((FnV)(*(void***)c2)[0xc0 / 8])(c2));
    }

    ((FnVV)(*(void***)proj)[0x118 / 8])(proj, ((FnV)(*(void***)arg)[0x108 / 8])(arg));
    ((FnVii)(*(void***)proj)[0xc0 / 8])(proj, 2, 0x402);
    ((FnVV)(*(void***)proj)[0x350 / 8])(proj, ((FnV)(*(void***)arg)[0x358 / 8])(arg));

    *(unsigned char*)((char*)proj + 0x36a) = 0;
    return proj;
}

} }
