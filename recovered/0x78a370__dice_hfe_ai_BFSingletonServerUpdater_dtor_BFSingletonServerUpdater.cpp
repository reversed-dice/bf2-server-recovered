// FUNCTION: BF2 0x78a370
#include <string>
typedef void* (*getfn_78a370)(void*, std::string const&);
typedef void  (*unregfn_78a370)(void*, std::string const&);
extern "C" void base_dtor_78a370(void*);
extern "C" void _ZdlPv(void*);

// Both strings are TEMPORARIES -- see the constructor variant of this pattern
// for what named locals cost (71.32%).
extern "C" void dtor_78a370(void** self) {
    *self = (void*)0xba4d30;
    void* cm = *(void**)0x010b3798;
    getfn_78a370 fn = *(getfn_78a370*)(*(char**)cm + 0xb8);
    void* found = fn(*(void**)0x010b3798, std::string("BFSingletonServerUpdater"));
    if (self == found) {
        void* cm2 = *(void**)0x010b3798;
        unregfn_78a370 fn2 = *(unregfn_78a370*)(*(char**)cm2 + 0xb0);
        fn2(*(void**)0x010b3798, std::string("BFSingletonServerUpdater"));
    }
    base_dtor_78a370(self);
    _ZdlPv(self);
}
// REVERSED_FUNCTION: dice_hfe_ai_BFSingletonServerUpdater_dtor_BFSingletonServerUpdater (0x78a370)
