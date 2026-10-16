// FUNCTION: BF2 0x7c3d20
// BF2_FLAGS: -fno-gcse
namespace dice { namespace hfe { namespace io {

extern "C" int __cxa_guard_acquire(char*);
extern "C" void __cxa_guard_release(char*);
extern "C" int __cxa_atexit(void (*)(void*), void*, void*);
extern "C" void* __dso_handle;
extern "C" void __tcf_0(void*);
extern "C" char guard_variable_for_dice_hfe_io_internal_getNetworkStatsMap_sMap;
extern "C" long _DAT_010aeb80;
extern "C" long _DAT_010aeb88;
extern "C" long _DAT_010aeb90;
extern "C" long _DAT_010aeb98;
extern "C" long _DAT_010aeba0;
extern "C" long _DAT_010aeba8;

extern "C" void* internal_getNetworkStatsMap() {
    if (!guard_variable_for_dice_hfe_io_internal_getNetworkStatsMap_sMap) {
        if (__cxa_guard_acquire(&guard_variable_for_dice_hfe_io_internal_getNetworkStatsMap_sMap)) {
            _DAT_010aeb88 = 0;
            _DAT_010aeba8 = 0;
            *(int*)&_DAT_010aeb88 = 0;
            _DAT_010aeb90 = 0;
            _DAT_010aeb98 = (long)&_DAT_010aeb88;
            _DAT_010aeba0 = (long)&_DAT_010aeb88;
            __cxa_guard_release(&guard_variable_for_dice_hfe_io_internal_getNetworkStatsMap_sMap);
            __cxa_atexit(__tcf_0, 0, &__dso_handle);
            return &_DAT_010aeb80;
        }
    }
    return &_DAT_010aeb80;
}

} } }
