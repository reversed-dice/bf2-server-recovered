// FUNCTION: BF2 0x5ab1b0
#include <string>
typedef void* (*lookup_5ab1b0)(void*, std::string const&);
typedef void  (*rel_5ab1b0)(void*, void*);
extern "C" void base_dtor_5a8240(void*);
extern "C" void _ZdlPv(void*);

// Same shape as the other particle-template destructors plus one std::string
// member at +0x98 destroyed before the base dtor.
extern "C" void dtor_5ab1b0(char* self) {
    *(void**)(self + 0x00) = (void*)0xb64fd0;
    *(void**)(self + 0x10) = (void*)0xb65268;
    void* cm = *(void**)0x010b3798;
    lookup_5ab1b0 fn = *(lookup_5ab1b0*)(*(char**)cm + 0x98);
    void* mgr = fn(*(void**)0x010b3798, std::string("ParticleSystemManager"));
    if (mgr != 0) {
        void* h = *(void**)(self + 0x80);
        if (h != 0) (*(rel_5ab1b0*)(*(char**)mgr + 0x40))(mgr, h);
    }
    ((std::string*)(self + 0x98))->~basic_string();
    base_dtor_5a8240(self);
    _ZdlPv(self);
}
// REVERSED_FUNCTION: dice_hfe_world_SpriteParticleSystemTemplate_dtor_SpriteParticleSystemTemplate (0x5ab1b0)
