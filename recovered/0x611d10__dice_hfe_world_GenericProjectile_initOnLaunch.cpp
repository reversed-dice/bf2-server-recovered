// FUNCTION: BF2 0x611d10
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace world {
extern void* gameLogic;
class GenericProjectile {
public:
    void updateTracer();
    void sendMissileInitEvent();
};
} } }

typedef void* (*FnV)(void*);
typedef void (*FnVV)(void*);
typedef unsigned char (*FnB)(void*);

namespace dice { namespace hfe { namespace world {

void GenericProjectile_initOnLaunch_611d10(void* p_raw) {
    char* p = (char*)p_raw;
    unsigned* v = (unsigned*)(((FnV*)(*(void**)p))[0xd8 / 8](p));
    unsigned* d = (unsigned*)(p + 0x2f0);
    unsigned a2 = v[2], a1 = v[1], a0 = v[0];
    d[0] = a0;
    d[1] = a1;
    d[2] = a2;
    void* q = *(void**)(p + 0x2b0);
    if (q != 0 && *(void**)((char*)q + 0x8) != 0 &&
        ((FnB*)(*(void**)gameLogic))[0x278 / 8](gameLogic)) {
        if (((FnV*)(*(void**)p))[0x1b0 / 8](p) != 0) {
            ((GenericProjectile*)p)->sendMissileInitEvent();
            ((FnVV*)(*(void**)p))[0x328 / 8](p);
        }
    }
    ((GenericProjectile*)p)->updateTracer();
}

} } }
