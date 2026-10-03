// FUNCTION: BF2 0x5a5910
#include <string>
namespace dice { namespace hfe {
typedef void* (*vfn_5a5910)(void*, std::string const&);
typedef void* (*mfn_5a5910)(void*, void*);
extern void base_ctor_5a5910(void*, void*);

void ctor_5a5910(void** self, char* tmpl) {
    base_ctor_5a5910((void*)self, (void*)tmpl);
    *(void**)((char*)self + 0x0) = (void*)0xb632d0;
    *(void**)((char*)self + 0x100) = (void*)0xb635e8;
    void* m;
    {
        void* cm = *(void**)0x010b3798;
        vfn_5a5910 fn = *(vfn_5a5910*)((char*)*(void**)cm + 0x98);
        std::string s("ParticleSystemManager");
        m = fn(*(void**)0x010b3798, s);
    }
    if (m) {
        mfn_5a5910 g = *(mfn_5a5910*)((char*)*(void**)m + 0x28);
        *(void**)((char*)self + 0x218) = g(m, *(void**)(tmpl + 0x80));
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_world_ParticleSystemEmitter_ParticleSystemEmitter_dice_hfe_world_ParticleSystemEmitterTemplate_constptr (0x5a5910)
