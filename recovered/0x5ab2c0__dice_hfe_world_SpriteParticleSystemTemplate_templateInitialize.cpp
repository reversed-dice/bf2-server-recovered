// FUNCTION: BF2 0x5ab2c0
#include <string>
typedef void* (*lookup_5ab2c0)(void*, std::string const&);
typedef void* (*makefn_5ab2c0)(void*, int, void*);
typedef void* (*selffn_5ab2c0)(void*);
typedef void  (*setname_5ab2c0)(void*, std::string const&);

struct Sprite_5ab2c0 { char pad[0x80]; void* ps; };

extern "C" void tmpl_init_5ab2c0(Sprite_5ab2c0* self) {
    void* cm = *(void**)0x010b3798;
    lookup_5ab2c0 fn = *(lookup_5ab2c0*)(*(char**)cm + 0x98);
    void* mgr = fn(*(void**)0x010b3798, std::string("ParticleSystemManager"));
    if (mgr != 0) {
        makefn_5ab2c0 mk = *(makefn_5ab2c0*)(*(char**)mgr + 0x38);
        void* x = (*(selffn_5ab2c0*)(*(char**)self + 0x58))(self);
        self->ps = mk(mgr, 0, x);
    }
    if (self->ps != 0) {
        setname_5ab2c0 s1 = *(setname_5ab2c0*)(*(char**)self + 600);
        s1(self, std::string("Sorted"));
        setname_5ab2c0 s2 = *(setname_5ab2c0*)(*(char**)self + 0x200);
        s2(self, std::string("Standard"));
        if (self->ps != 0)
            (*(selffn_5ab2c0*)(*(char**)self->ps + 0x18))(self->ps);
    }
}
// REVERSED_FUNCTION: dice_hfe_world_SpriteParticleSystemTemplate_templateInitialize (0x5ab2c0)
