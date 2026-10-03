// FUNCTION: BF2 0x59e7b0
#include <string>
namespace dice { namespace hfe {
typedef std::string str_59e7b0;
typedef void* (*vfn_59e7b0)(void*, std::string const&);
typedef void (*mfn_59e7b0)(void*, void*);
extern void dice_hfe_world_SpriteParticleSystemTemplateBase_dtor_SpriteParticleSystemTemplateBase(void*);
extern "C" void _ZdlPv(void*);

void dtor_59e7b0(char* self) {
    *(void**)((char*)self + 0x0) = (void*)0xb61970;
    *(void**)((char*)self + 0x10) = (void*)0xb61c48;
    void* m;
    {
        void* cm = *(void**)0x010b3798;
        vfn_59e7b0 fn = *(vfn_59e7b0*)((char*)*(void**)cm + 0x98);
        std::string s("ParticleSystemManager");
        m = fn(*(void**)0x010b3798, s);
    }
    if (m) {
        void* arg = *(void**)((char*)self + 0x80);
        if (arg) {
            mfn_59e7b0 g = *(mfn_59e7b0*)((char*)*(void**)m + 0x40);
            g(m, arg);
        }
    }
    ((str_59e7b0*)(self + 0x98))->~str_59e7b0();
    dice_hfe_world_SpriteParticleSystemTemplateBase_dtor_SpriteParticleSystemTemplateBase((void*)self);
    _ZdlPv(self);
}
}}
// REVERSED_FUNCTION: dice_hfe_world_MeshParticleSystemTemplate_dtor_MeshParticleSystemTemplate (0x59e7b0)
