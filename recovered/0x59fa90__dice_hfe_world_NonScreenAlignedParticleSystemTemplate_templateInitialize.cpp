// FUNCTION: BF2 0x59fa90
#include <string>
typedef void* (*lookup_59fa90)(void*, std::string const&);
typedef void* (*makefn_59fa90)(void*, int, void*);
typedef void* (*selffn_59fa90)(void*);

extern "C" void tmpl_init_59fa90(char* self) {
    void* cm = *(void**)0x010b3798;
    lookup_59fa90 fn = *(lookup_59fa90*)(*(char**)cm + 0x98);
    void* mgr = fn(*(void**)0x010b3798, std::string("ParticleSystemManager"));
    if (mgr != 0) {
        makefn_59fa90 mk = *(makefn_59fa90*)(*(char**)mgr + 0x38);
        void* x = (*(selffn_59fa90*)(*(char**)self + 0x58))(self);
        *(void**)(self + 0x80) = mk(mgr, 4, x);
    }
}
// REVERSED_FUNCTION: dice_hfe_world_NonScreenAlignedParticleSystemTemplate_templateInitialize (0x59fa90)
