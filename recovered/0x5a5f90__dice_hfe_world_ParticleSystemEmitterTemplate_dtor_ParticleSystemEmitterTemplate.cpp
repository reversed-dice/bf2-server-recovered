// FUNCTION: BF2 0x5a5f90
#include <string>
typedef void* (*lookup_5a5f90)(void*, std::string const&);
typedef void  (*rel_5a5f90)(void*, void*);
extern "C" void base_dtor_5a5f90(void*);
extern "C" void _ZdlPv(void*);

// The manager call takes the cached handle as its second argument: Ghidra
// prints it argument-less because the value is already in RSI, but the ASM
// loads [self+0x80] into RSI before the null test and never reloads it.
extern "C" void dtor_5a5f90(char* self) {
    *(void**)(self + 0x00) = (void*)0xb63690;
    *(void**)(self + 0x10) = (void*)0xb63938;
    void* cm = *(void**)0x010b3798;
    lookup_5a5f90 fn = *(lookup_5a5f90*)(*(char**)cm + 0x98);
    void* mgr = fn(*(void**)0x010b3798, std::string("ParticleSystemManager"));
    if (mgr != 0) {
        void* h = *(void**)(self + 0x80);
        if (h != 0) (*(rel_5a5f90*)(*(char**)mgr + 0x40))(mgr, h);
    }
    base_dtor_5a5f90(self);
    _ZdlPv(self);
}
// REVERSED_FUNCTION: dice_hfe_world_ParticleSystemEmitterTemplate_dtor_ParticleSystemEmitterTemplate (0x5a5f90)
