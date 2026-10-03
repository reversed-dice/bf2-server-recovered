// FUNCTION: BF2 0x63e8e0
#include <string>
typedef void* (*lookup_63e8e0)(void*, std::string const&);
typedef void  (*setfn_63e8e0)(void*, void*);

extern "C" void set_sky_light_63e8e0(void* self) {
    void* cm = *(void**)0x010b3798;
    lookup_63e8e0 fn = *(lookup_63e8e0*)(*(char**)cm + 0x98);
    void* mgr = fn(*(void**)0x010b3798, std::string("LightManager"));
    if (mgr != 0) (*(setfn_63e8e0*)(*(char**)mgr + 0x48))(mgr, self);
}
// REVERSED_FUNCTION: dice_hfe_world_LightSource_setAsSkyLight (0x63e8e0)
