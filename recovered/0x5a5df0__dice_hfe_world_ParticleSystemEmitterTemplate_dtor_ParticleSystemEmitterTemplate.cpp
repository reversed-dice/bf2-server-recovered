// FUNCTION: BF2 0x5a5df0
#include <string>
namespace dice { namespace hfe {
typedef void* (*vfn_5a5df0)(void*, std::string const&);
typedef void (*mfn_5a5df0)(void*, void*);
extern void dice_hfe_world_ParticleSystemTemplateBase_dtor_ParticleSystemTemplateBase(void*);

void dtor_5a5df0(char* self) {
    *(void**)((char*)self + 0x0) = (void*)0xb63690;
    *(void**)((char*)self + 0x10) = (void*)0xb63938;
    void* m;
    {
        void* cm = *(void**)0x010b3798;
        vfn_5a5df0 fn = *(vfn_5a5df0*)((char*)*(void**)cm + 0x98);
        std::string s("ParticleSystemManager");
        m = fn(*(void**)0x010b3798, s);
    }
    if (m) {
        // One load, used as both the guard and the second argument: Ghidra
        // prints this call with a single argument, the ASM keeps the value in
        // RSI across it.
        void* arg = *(void**)((char*)self + 0x80);
        if (arg) {
            mfn_5a5df0 g = *(mfn_5a5df0*)((char*)*(void**)m + 0x40);
            g(m, arg);
        }
    }
    dice_hfe_world_ParticleSystemTemplateBase_dtor_ParticleSystemTemplateBase((void*)self);
}
} }
// REVERSED_FUNCTION: dice_hfe_world_ParticleSystemEmitterTemplate_dtor_ParticleSystemEmitterTemplate (0x5a5df0)
