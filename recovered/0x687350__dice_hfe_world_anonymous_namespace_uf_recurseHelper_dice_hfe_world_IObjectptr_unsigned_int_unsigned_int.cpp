// FUNCTION: BF2 0x687350
namespace dice { namespace hfe { namespace world {
class IObject { public: char _pad[0x1000]; };
namespace {
typedef void* (*Vfn1e0)(void*);
typedef void (*VfnC0)(void*, unsigned int, unsigned int);
void uf_recurseHelper(dice::hfe::world::IObject* o, unsigned int a, unsigned int b) {
    IObject* c = (IObject*)((Vfn1e0)(*(void***)o)[0x1e0 / 8])(o);
    if (c == 0)
        return;
    do {
        ((VfnC0)(*(void***)c)[0xc0 / 8])(c, a, b);
        uf_recurseHelper(c, a, b);
        c = (IObject*)(*(void**)((char*)c + 0x58));
    } while (c != 0);
}
}
}}}
