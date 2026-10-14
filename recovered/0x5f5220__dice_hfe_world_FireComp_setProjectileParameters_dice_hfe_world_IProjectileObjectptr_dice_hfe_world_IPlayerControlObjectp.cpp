// FUNCTION: BF2 0x5f5220
// BF2_FLAGS: -fcrossjumping
namespace dice { namespace hfe { namespace world {

extern unsigned int IID_IObject;

class IProjectileObject;
class IPlayerControlObject;

void FireComp_setProjectileParameters_0x5f5220(void* self, IProjectileObject* proj, IPlayerControlObject* pco) {
    void* m = *(void**)((char*)self + 0x18);
    void* v = ((void* (*)(void*))(*(void***)m)[0x380 / 8])(m);
    ((void (*)(void*, void*))(*(void***)proj)[0xa0 / 8])(proj, v);
    if (v != 0) {
        void* f = ((void**)(*(void***)proj))[0xc0 / 8];
        unsigned int u = ((unsigned int (*)(void*))(*(void***)v)[0x1d0 / 8])(v);
        ((void (*)(void*, unsigned int))f)(proj, u);
    }
    ((void (*)(void*, void*))(*(void***)proj)[0x60 / 8])(proj, *(void**)((char*)self + 0x18));
    if (pco == 0) {
        void* g = ((void**)(*(void***)proj))[0x90 / 8];
        ((void (*)(void*, void*))g)(proj, 0);
    } else {
        void* g = ((void**)(*(void***)proj))[0x90 / 8];
        void* q = ((void* (*)(void*, unsigned int))(*(void***)pco)[0x18 / 8])(pco, IID_IObject);
        ((void (*)(void*, void*))g)(proj, q);
    }
}
} } }
