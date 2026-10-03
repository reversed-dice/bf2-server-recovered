// FUNCTION: BF2 0x5ed720
#include <string>

// dice::hfe::world::ReplenishingAmmoCompTemplate::~ReplenishingAmmoCompTemplate (deleting) -- 0x5ed720
//
// Two vtable pointers (secondary vtable at +8), the COW string at +0x50, then
// operator delete.

extern "C" void dtor_5ed720(char* self)
{
    *(void**)self = (void*)0xb6fdf0;
    *(void**)(self + 8) = (void*)0xb6fe68;
    ((std::string*)(self + 0x50))->~basic_string();
    operator delete((void*)self);
}
// REVERSED_FUNCTION: dice_hfe_world_ReplenishingAmmoCompTemplate_dtor_ReplenishingAmmoCompTemplate (0x5ed720)
