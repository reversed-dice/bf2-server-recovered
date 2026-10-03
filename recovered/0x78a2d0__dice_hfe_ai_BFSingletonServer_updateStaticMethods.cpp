// FUNCTION: BF2 0x78a2d0
#include <string>
typedef void* (*getfn_78a2d0)(void*, std::string const&);
typedef void  (*upd_78a2d0)(void*);
extern "C" void update_internal_78a000();

extern "C" void update_78a2d0() {
    void* cm = *(void**)0x010b3798;
    getfn_78a2d0 fn = *(getfn_78a2d0*)(*(char**)cm + 0xb8);
    void* u = fn(*(void**)0x010b3798, std::string("AISingletonServerUpdater"));
    if (u != 0) (*(upd_78a2d0*)(*(char**)u + 0x10))(u);
    update_internal_78a000();
}
// REVERSED_FUNCTION: dice_hfe_ai_BFSingletonServer_updateStaticMethods (0x78a2d0)
