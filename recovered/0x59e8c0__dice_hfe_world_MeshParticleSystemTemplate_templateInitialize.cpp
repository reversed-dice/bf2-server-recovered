// FUNCTION: BF2 0x59e8c0
#include <string>
typedef void* (*lookup_59e8c0)(void*, std::string const&);
typedef void* (*makefn_59e8c0)(void*, int, void*);
typedef void* (*selffn_59e8c0)(void*);
typedef void  (*setname_59e8c0)(void*, std::string const&);

struct Mesh_59e8c0 { char pad[0x80]; void* ps; };

extern "C" void tmpl_init_59e8c0(Mesh_59e8c0* self) {
    void* cm = *(void**)0x010b3798;
    lookup_59e8c0 fn = *(lookup_59e8c0*)(*(char**)cm + 0x98);
    void* mgr = fn(*(void**)0x010b3798, std::string("ParticleSystemManager"));
    if (mgr != 0) {
        makefn_59e8c0 mk = *(makefn_59e8c0*)(*(char**)mgr + 0x38);
        void* x = (*(selffn_59e8c0*)(*(char**)self + 0x58))(self);
        self->ps = mk(mgr, 1, x);
        setname_59e8c0 s1 = *(setname_59e8c0*)(*(char**)self + 0x200);
        s1(self, std::string("Standard"));
        setname_59e8c0 s2 = *(setname_59e8c0*)(*(char**)self + 600);
        s2(self, std::string("AlphaBlend"));
        (*(selffn_59e8c0*)(*(char**)self->ps + 0x18))(self->ps);
    }
}
// REVERSED_FUNCTION: dice_hfe_world_MeshParticleSystemTemplate_templateInitialize (0x59e8c0)
