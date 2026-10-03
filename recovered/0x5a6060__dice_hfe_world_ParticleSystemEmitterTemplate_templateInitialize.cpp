// FUNCTION: BF2 0x5a6060
#include <string>
typedef void* (*lookup_5a6060)(void*, std::string const&);
typedef void* (*makefn_5a6060)(void*, int, void*);
typedef void* (*selffn_5a6060)(void*);
typedef void  (*setname_5a6060)(void*, std::string const&);

// `ps` is written then read back inside the same guard, so it is a struct
// field (TRICK 39). Both strings are temporaries (TRICK 41).
struct PSE_5a6060 { char pad[0x80]; void* ps; };

extern "C" void tmpl_init_5a6060(PSE_5a6060* self) {
    void* cm = *(void**)0x010b3798;
    lookup_5a6060 fn = *(lookup_5a6060*)(*(char**)cm + 0x98);
    void* mgr = fn(*(void**)0x010b3798, std::string("ParticleSystemManager"));
    if (mgr != 0) {
        makefn_5a6060 mk = *(makefn_5a6060*)(*(char**)mgr + 0x38);
        void* x = (*(selffn_5a6060*)(*(char**)self + 0x58))(self);
        self->ps = mk(mgr, 3, x);
        setname_5a6060 sn = *(setname_5a6060*)(*(char**)self + 0x200);
        sn(self, std::string("Standard"));
        (*(selffn_5a6060*)(*(char**)self->ps + 0x18))(self->ps);
    }
}
// REVERSED_FUNCTION: dice_hfe_world_ParticleSystemEmitterTemplate_templateInitialize (0x5a6060)
