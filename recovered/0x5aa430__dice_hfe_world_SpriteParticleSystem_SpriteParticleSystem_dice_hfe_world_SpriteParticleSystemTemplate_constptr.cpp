// FUNCTION: BF2 0x5aa430
#include <string>
namespace dice { namespace hfe {
typedef void* (*vfn_5aa430)(void*, std::string const&);
typedef void* (*mfn_5aa430)(void*, void*);
extern void base_ctor_5aa430(void*, void*);

void ctor_5aa430(void** self, char* tmpl) {
    base_ctor_5aa430((void*)self, (void*)tmpl);
    *(void**)((char*)self + 0x0) = (void*)0xb64c10;
    *(void**)((char*)self + 0x100) = (void*)0xb64f28;
    void* m;
    {
        void* cm = *(void**)0x010b3798;
        vfn_5aa430 fn = *(vfn_5aa430*)((char*)*(void**)cm + 0x98);
        std::string s("ParticleSystemManager");
        m = fn(*(void**)0x010b3798, s);
    }
    if (m) {
        mfn_5aa430 g = *(mfn_5aa430*)((char*)*(void**)m + 0x28);
        *(void**)((char*)self + 0x218) = g(m, *(void**)(tmpl + 0x80));
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_world_SpriteParticleSystem_SpriteParticleSystem_dice_hfe_world_SpriteParticleSystemTemplate_constptr (0x5aa430)
