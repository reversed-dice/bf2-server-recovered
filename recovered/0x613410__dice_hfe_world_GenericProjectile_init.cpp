// FUNCTION: BF2 0x613410
namespace dice { namespace hfe { namespace world {
extern int CID_CameraTemplate;
extern int IID_ICameraObject;
struct Bundle { void init(); };
class GenericProjectile {
public:
    void determineExplosionType();
};
} } }

typedef void* (*FnV)(void*);
typedef int (*FnI)(void*);
typedef void (*Fn1)(void*);
typedef void (*Fn3)(void*, int, int);
typedef void* (*FnVI)(void*, int);

namespace dice { namespace hfe { namespace world {

void GenericProjectile_init_613410(void* p_raw) {
    char* p = (char*)p_raw;
    ((Bundle*)p)->init();
    ((Fn3*)(*(void**)p))[0xc0 / 8](p, 0, 0xc00);
    ((Fn3*)(*(void**)p))[0x2e8 / 8](p, 0, 0xc00);
    if (((FnV*)(*(void**)p))[0x1b0 / 8](p) != 0) {
        *(char*)(p + 0x2c5) = 1;
    }
    ((Fn1*)(*(void**)p))[0x170 / 8](p);
    void* t = *(void**)(p + 0x258);
    ((Fn1*)(*(void**)t))[0x2b8 / 8](t);
    ((Fn1*)(*(void**)p))[0x300 / 8](p);
    ((GenericProjectile*)p)->determineExplosionType();
    void* q = *(void**)(p + 0x258);
    if (*(char*)((char*)q + 0x293) != 0) {
        void* c = ((FnV*)(*(void**)p))[0x1e0 / 8](p);
        if (c != 0) {
            int cid = CID_CameraTemplate;
            do {
                void* o = *(void**)((char*)c + 0x28);
                if (((FnI*)(*(void**)o))[0x20 / 8](o) == cid) {
                    *(void**)(p + 0x338) =
                        ((FnVI*)(*(void**)c))[0x18 / 8](c, IID_ICameraObject);
                    break;
                }
                c = *(void**)((char*)c + 0x58);
            } while (c != 0);
        }
    }
}

} } }
