// FUNCTION: BF2 0x78a6e0
#include <string>
typedef void* (*getfn_78a6e0)(void*, std::string const&);
typedef void  (*regfn_78a6e0)(void*, std::string const&, void*);
extern "C" void base_ctor_78b890(void*);

// Both strings are TEMPORARIES, not named locals in sibling scopes. As named
// locals GCC 4.0 lets the two sibling blocks share one stack slot, needs a
// fourth callee-saved register, and shifts every allocator byte: 71.32%.
extern "C" void ctor_78a6e0(void** self) {
    base_ctor_78b890(self);
    *self = (void*)0xba4d30;
    void* cm = *(void**)0x010b3798;
    getfn_78a6e0 fn = *(getfn_78a6e0*)(*(char**)cm + 0xb8);
    void* found = fn(*(void**)0x010b3798, std::string("BFSingletonServerUpdater"));
    if (found == 0) {
        void* cm2 = *(void**)0x010b3798;
        regfn_78a6e0 fn2 = *(regfn_78a6e0*)(*(char**)cm2 + 0xa8);
        fn2(*(void**)0x010b3798, std::string("BFSingletonServerUpdater"), self);
    }
}
// REVERSED_FUNCTION: dice_hfe_ai_BFSingletonServerUpdater_BFSingletonServerUpdater (0x78a6e0)
