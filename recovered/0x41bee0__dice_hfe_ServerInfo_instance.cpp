// FUNCTION: BF2 0x41bee0
namespace dice { namespace hfe {
extern "C" int __cxa_guard_acquire(char*);
extern "C" void __cxa_guard_release(char*);
extern "C" int __cxa_atexit(void(*)(void*), void*, void*);
extern "C" void* __dso_handle;
extern "C" char guard_variable_for_dice_hfe_ServerInfo_instance_obj;
extern "C" char dice_hfe_ServerInfo_instance_obj[1];
extern "C" void dice_hfe_ServerInfo_ServerInfo(void*);
extern "C" void __tcf_0(void*);

extern "C" void* dice_hfe_ServerInfo_instance() {
    if (!guard_variable_for_dice_hfe_ServerInfo_instance_obj) {
        if (__cxa_guard_acquire(&guard_variable_for_dice_hfe_ServerInfo_instance_obj)) {
            dice_hfe_ServerInfo_ServerInfo(dice_hfe_ServerInfo_instance_obj);
            __cxa_guard_release(&guard_variable_for_dice_hfe_ServerInfo_instance_obj);
            __cxa_atexit(__tcf_0, 0, &__dso_handle);
            return dice_hfe_ServerInfo_instance_obj;
        }
    }
    return dice_hfe_ServerInfo_instance_obj;
}
} }
