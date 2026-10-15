// BF2_FLAGS: -fno-math-errno
// FUNCTION: BF2 0x586dc0
namespace dice { namespace hfe { namespace world {
extern "C" void Bundle_init(void*);
extern "C" float sqrtf(float);
extern "C" void* getRootParent(void*);
typedef void* (*FnV)(void*);
struct Vec3 { float x, y, z; };
typedef void (*FnV3)(void*, int, int);

void RotationalBundle_init_586dc0(void* self) {
    Bundle_init(self);
    char* t = *(char**)((char*)self + 0x28);
    if (*(char*)(t + 0x263) != 0) {
        Vec3* s = (Vec3*)((FnV)(*(void***)self)[0x308 / 8])(self);
        volatile Vec3* d = (Vec3*)((char*)self + 0x27c);
        float z = s->z;
        float y = s->y;
        float x = s->x;
        d->x = x;
        d->y = y;
        d->z = z;
    }
    Vec3* p = (Vec3*)(t + 0x248);
    float len = __builtin_sqrtf(p->x * p->x + p->y * p->y + p->z * p->z);
    if (len > 1.1920929e-07f) {
        void* root = getRootParent(self);
        ((FnV3)(*(void***)root)[0xc0 / 8])(root, 0x4000000, 0);
    }
}
} } }
