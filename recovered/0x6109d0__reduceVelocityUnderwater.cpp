// FUNCTION: BF2 0x6109d0
namespace dice { namespace hfe { namespace world {
// 0x6109d0 GenericProjectile::reduceVelocityUnderwater
typedef void* (*vfn0p)(void*);
typedef void (*vfn1v)(void*, void*);
void reduceVelocityUnderwater_0x6109d0(void* self) {
    void* w = *(void**)((char*)self + 0x88);
    if (w != 0) {
        float* v = (float*)((vfn0p*)*(void***)w)[0xc0/8](w);
        void* w2 = *(void**)((char*)self + 0x88);
        void (*fn)(void*, void*) = ((vfn1v*)*(void***)w2)[0xd0/8];
        float s = *(float*)(*(char**)((char*)self + 0x258) + 0x2a0);
        float z = v[2] * s;
        float y = v[1] * s;
        float x = s * v[0];
        struct V3 { float x, y, z; } r;
        r.x = x;
        r.y = y;
        r.z = z;
        fn(w2, &r);
    }
}
} } }
