// FUNCTION: BF2 0x59f270
#include <string>
namespace dice { namespace hfe {
typedef void* (*vfn_59f270)(void*, std::string const&);
typedef void* (*mfn_59f270)(void*, void*);
extern void base_ctor_59f270(void*, void*);

void ctor_59f270(void** self, char* tmpl) {
    base_ctor_59f270((void*)self, (void*)tmpl);
    *(void**)((char*)self + 0x0) = (void*)0xb61db0;
    *(void**)((char*)self + 0x100) = (void*)0xb620c8;
    void* m;
    {
        void* cm = *(void**)0x010b3798;
        vfn_59f270 fn = *(vfn_59f270*)((char*)*(void**)cm + 0x98);
        std::string s("ParticleSystemManager");
        m = fn(*(void**)0x010b3798, s);
    }
    if (m) {
        mfn_59f270 g = *(mfn_59f270*)((char*)*(void**)m + 0x28);
        *(void**)((char*)self + 0x218) = g(m, *(void**)(tmpl + 0x80));
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_world_NonScreenAlignedParticleSystem_NonScreenAlignedParticleSystem_dice_hfe_world_NonScreenAlignedParticleSystemTemplate_constptr (0x59f270)
