// FUNCTION: BF2 0x5c6140
#include <string>

typedef void (*Fn)(void*, void*);

extern "C" void setter_5c6140(void* param_1, std::string* param_2) {
    void** vtbl = *(void***)param_1;
    Fn fn = (Fn)vtbl[0x78 / 8];
    std::string tmp(*param_2);
    fn(param_1, &tmp);
}
// REVERSED_FUNCTION: dice_hfe_world_WeaponHudCompTemplate_setHudSid_std_string (0x5c6140)
