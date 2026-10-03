// FUNCTION: BF2 0x78a5c0
#include <string>
typedef void* (*getfn_78a5c0)(void*, std::string const&);
typedef void  (*unregfn_78a5c0)(void*, std::string const&);
extern "C" void base_dtor_78b8b0(void*);

// Both strings are TEMPORARIES, not named locals in sibling scopes -- see the
// constructor at 0x78a6e0 for what named locals cost here (71.32%).
extern "C" void dtor_78a5c0(void** self) {
    *self = (void*)0xba4d30;
    void* cm = *(void**)0x010b3798;
    getfn_78a5c0 fn = *(getfn_78a5c0*)(*(char**)cm + 0xb8);
    void* found = fn(*(void**)0x010b3798, std::string("BFSingletonServerUpdater"));
    if (self == found) {
        void* cm2 = *(void**)0x010b3798;
        unregfn_78a5c0 fn2 = *(unregfn_78a5c0*)(*(char**)cm2 + 0xb0);
        fn2(*(void**)0x010b3798, std::string("BFSingletonServerUpdater"));
    }
    base_dtor_78b8b0(self);
}
// REVERSED_FUNCTION: dice_hfe_ai_BFSingletonServerUpdater_dtor_BFSingletonServerUpdater (0x78a5c0)
