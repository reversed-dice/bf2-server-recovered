// FUNCTION: BF2 0x471400
namespace dice { namespace hfe {
extern "C" int __cxa_guard_acquire(char*);
extern "C" void __cxa_guard_release(char*);
extern "C" int __cxa_atexit(void(*)(void*), void*, void*);
extern "C" void* __dso_handle;
extern "C" char guard_variable_for_dice_hfe_ClientGameLogic_spawnMultipleObjects_dummy;
extern "C" long dice_hfe_ClientGameLogic_spawnMultipleObjects_dummy;
extern "C" long _DAT_0108ca98;
extern "C" long _DAT_0108caa0;
extern "C" void __tcf_0(void*);

extern "C" void* dice_hfe_ClientGameLogic_spawnMultipleObjects() {
    if (!guard_variable_for_dice_hfe_ClientGameLogic_spawnMultipleObjects_dummy) {
        if (__cxa_guard_acquire(&guard_variable_for_dice_hfe_ClientGameLogic_spawnMultipleObjects_dummy)) {
            dice_hfe_ClientGameLogic_spawnMultipleObjects_dummy = 0;
            _DAT_0108ca98 = 0;
            _DAT_0108caa0 = 0;
            __cxa_guard_release(&guard_variable_for_dice_hfe_ClientGameLogic_spawnMultipleObjects_dummy);
            __cxa_atexit(__tcf_0, 0, &__dso_handle);
            return &dice_hfe_ClientGameLogic_spawnMultipleObjects_dummy;
        }
    }
    return &dice_hfe_ClientGameLogic_spawnMultipleObjects_dummy;
}
} }
