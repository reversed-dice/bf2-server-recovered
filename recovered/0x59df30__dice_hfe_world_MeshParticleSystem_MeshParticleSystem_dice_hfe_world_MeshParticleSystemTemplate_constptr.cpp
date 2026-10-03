// FUNCTION: BF2 0x59df30
#include <string>
namespace dice { namespace hfe {
typedef void* (*vfn_59df30)(void*, std::string const&);
typedef void* (*mfn_59df30)(void*, void*);
extern void base_ctor_59df30(void*, void*);

void ctor_59df30(void** self, char* tmpl) {
    base_ctor_59df30((void*)self, (void*)tmpl);
    *(void**)((char*)self + 0x0) = (void*)0xb615b0;
    *(void**)((char*)self + 0x100) = (void*)0xb618c8;
    void* m;
    {
        void* cm = *(void**)0x010b3798;
        vfn_59df30 fn = *(vfn_59df30*)((char*)*(void**)cm + 0x98);
        std::string s("ParticleSystemManager");
        m = fn(*(void**)0x010b3798, s);
    }
    if (m) {
        mfn_59df30 g = *(mfn_59df30*)((char*)*(void**)m + 0x28);
        *(void**)((char*)self + 0x218) = g(m, *(void**)(tmpl + 0x80));
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_world_MeshParticleSystem_MeshParticleSystem_dice_hfe_world_MeshParticleSystemTemplate_constptr (0x59df30)
