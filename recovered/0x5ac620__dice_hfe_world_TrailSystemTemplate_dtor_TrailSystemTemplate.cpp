// FUNCTION: BF2 0x5ac620
#include <string>
namespace dice { namespace hfe {
typedef void* (*vfn_5ac620)(void*, std::string const&);
typedef void (*mfn_5ac620)(void*, void*);
extern void dice_hfe_world_SpriteParticleSystemTemplateBase_dtor_SpriteParticleSystemTemplateBase(void*);

void dtor_5ac620(char* self) {
    *(void**)((char*)self + 0x0) = (void*)0xb65750;
    *(void**)((char*)self + 0x10) = (void*)0xb659b8;
    void* m;
    {
        void* cm = *(void**)0x010b3798;
        vfn_5ac620 fn = *(vfn_5ac620*)((char*)*(void**)cm + 0x98);
        std::string s("ParticleSystemManager");
        m = fn(*(void**)0x010b3798, s);
    }
    if (m) {
        // One load, used as both the guard and the second argument: Ghidra
        // prints this call with a single argument, the ASM keeps the value in
        // RSI across it.
        void* arg = *(void**)((char*)self + 0x80);
        if (arg) {
            mfn_5ac620 g = *(mfn_5ac620*)((char*)*(void**)m + 0x40);
            g(m, arg);
        }
    }
    dice_hfe_world_SpriteParticleSystemTemplateBase_dtor_SpriteParticleSystemTemplateBase((void*)self);
}
} }
// REVERSED_FUNCTION: dice_hfe_world_TrailSystemTemplate_dtor_TrailSystemTemplate (0x5ac620)
