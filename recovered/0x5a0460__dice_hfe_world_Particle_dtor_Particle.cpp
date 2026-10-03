// FUNCTION: BF2 0x5a0460
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

extern "C" {
    extern int dice_hfe_world_Particle_mNoParticlesDebug;
    void _ZdlPv(void*);
}

struct Particle {
    void* vtable;
    char _pad[0x20];
    void* field_28;
    char _pad2[0x100 - 0x28 - 8];
    void* vtable2;
    char _pad3[0x218 - 0x100 - 8];
    void* vtable3;
    char _pad4[0x250 - 0x218 - 8];
    void* field_250;
};

extern "C" void dice_hfe_world_Object_dtor_Object(void*);

void dtor_5a04e0(Particle* p) {
    p->vtable = (void*)0x00b62630;
    p->vtable2 = (void*)0x00b62940;
    p->vtable3 = (void*)0x00b62978;
    if (p->field_250 != 0) {
        typedef void (*Fn)(void*, int);
        Fn f = (Fn)(*(void***)p->field_250)[0x68/8];
        f(p->field_250, 1);
    }
    dice_hfe_world_Particle_mNoParticlesDebug -= 1;
    void* f28 = p->field_28;
    {
        typedef void (*Fn2)(void*, Particle*);
        Fn2 f2 = (Fn2)(*(void***)f28)[0x118/8];
        f2(f28, p);
    }
    {
        typedef void (*Fn2)(void*, Particle*);
        Fn2 f3 = (Fn2)(*(void***)f28)[0x108/8];
        f3(f28, p);
    }
    dice_hfe_world_Object_dtor_Object(p);
}

} }
