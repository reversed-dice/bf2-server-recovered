// FUNCTION: BF2 0x59fcf0
#include <string>
namespace dice { namespace hfe {
typedef void* (*vfn_59fcf0)(void*, std::string const&);
typedef void (*mfn_59fcf0)(void*, void*);
extern void dice_hfe_world_SpriteParticleSystemTemplateBase_dtor_SpriteParticleSystemTemplateBase(void*);

void dtor_59fcf0(char* self) {
    *(void**)((char*)self + 0x0) = (void*)0xb62170;
    *(void**)((char*)self + 0x10) = (void*)0xb623d8;
    void* m;
    {
        void* cm = *(void**)0x010b3798;
        vfn_59fcf0 fn = *(vfn_59fcf0*)((char*)*(void**)cm + 0x98);
        std::string s("ParticleSystemManager");
        m = fn(*(void**)0x010b3798, s);
    }
    if (m) {
        // One load, used as both the guard and the second argument: Ghidra
        // prints this call with a single argument, the ASM keeps the value in
        // RSI across it.
        void* arg = *(void**)((char*)self + 0x80);
        if (arg) {
            mfn_59fcf0 g = *(mfn_59fcf0*)((char*)*(void**)m + 0x40);
            g(m, arg);
        }
    }
    dice_hfe_world_SpriteParticleSystemTemplateBase_dtor_SpriteParticleSystemTemplateBase((void*)self);
}
} }
// REVERSED_FUNCTION: dice_hfe_world_NonScreenAlignedParticleSystemTemplate_dtor_NonScreenAlignedParticleSystemTemplate (0x59fcf0)
