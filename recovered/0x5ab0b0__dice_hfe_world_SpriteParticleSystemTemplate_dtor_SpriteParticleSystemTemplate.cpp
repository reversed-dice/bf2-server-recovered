// FUNCTION: BF2 0x5ab0b0
#include <string>
namespace dice { namespace hfe {
typedef std::string str_5ab0b0;
typedef void* (*vfn_5ab0b0)(void*, std::string const&);
typedef void (*mfn_5ab0b0)(void*, void*);
extern void dice_hfe_world_SpriteParticleSystemTemplateBase_dtor_SpriteParticleSystemTemplateBase(void*);

void dtor_5ab0b0(char* self) {
    *(void**)((char*)self + 0x0) = (void*)0xb64fd0;
    *(void**)((char*)self + 0x10) = (void*)0xb65268;
    void* m;
    {
        void* cm = *(void**)0x010b3798;
        vfn_5ab0b0 fn = *(vfn_5ab0b0*)((char*)*(void**)cm + 0x98);
        std::string s("ParticleSystemManager");
        m = fn(*(void**)0x010b3798, s);
    }
    if (m) {
        // One load, used as both the guard and the second argument: Ghidra
        // prints this call with a single argument, the ASM keeps the value in
        // RSI across it.
        void* arg = *(void**)((char*)self + 0x80);
        if (arg) {
            mfn_5ab0b0 g = *(mfn_5ab0b0*)((char*)*(void**)m + 0x40);
            g(m, arg);
        }
    }
    ((str_5ab0b0*)(self + 0x98))->~str_5ab0b0();
    dice_hfe_world_SpriteParticleSystemTemplateBase_dtor_SpriteParticleSystemTemplateBase((void*)self);
}
} }
// REVERSED_FUNCTION: dice_hfe_world_SpriteParticleSystemTemplate_dtor_SpriteParticleSystemTemplate (0x5ab0b0)
