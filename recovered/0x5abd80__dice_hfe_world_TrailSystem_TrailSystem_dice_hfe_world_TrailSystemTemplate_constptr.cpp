// FUNCTION: BF2 0x5abd80
#include <string>
namespace dice { namespace hfe {
typedef void* (*vfn_5abd80)(void*, std::string const&);
typedef void* (*mfn_5abd80)(void*, void*);
extern void base_ctor_5abd80(void*, void*);

void ctor_5abd80(void** self, char* tmpl) {
    base_ctor_5abd80((void*)self, (void*)tmpl);
    *(void**)((char*)self + 0x0) = (void*)0xb65390;
    *(void**)((char*)self + 0x100) = (void*)0xb656a8;
    void* m;
    {
        void* cm = *(void**)0x010b3798;
        vfn_5abd80 fn = *(vfn_5abd80*)((char*)*(void**)cm + 0x98);
        std::string s("ParticleSystemManager");
        m = fn(*(void**)0x010b3798, s);
    }
    if (m) {
        mfn_5abd80 g = *(mfn_5abd80*)((char*)*(void**)m + 0x28);
        *(void**)((char*)self + 0x218) = g(m, *(void**)(tmpl + 0x80));
    }
}
} }
// REVERSED_FUNCTION: dice_hfe_world_TrailSystem_TrailSystem_dice_hfe_world_TrailSystemTemplate_constptr (0x5abd80)
