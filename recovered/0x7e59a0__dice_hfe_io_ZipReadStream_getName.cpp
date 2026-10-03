// FUNCTION: BF2 0x7e59a0
namespace dice { namespace hfe {
extern "C" int __cxa_guard_acquire(char*);
extern "C" void __cxa_guard_release(char*);
extern "C" int __cxa_atexit(void(*)(void*), void*, void*);
extern "C" void* __dso_handle;
extern "C" char guard_variable_for_dice_hfe_io_ZipReadStream_getName_name;
extern "C" void* dice_hfe_io_ZipReadStream_getName_name;
extern "C" void _ZNSsC1EPKcRKSaIcE(void*, const char*, void*);
extern "C" void __tcf_1(void*);

extern "C" void* dice_hfe_io_ZipReadStream_getName() {
    if (!guard_variable_for_dice_hfe_io_ZipReadStream_getName_name) {
        if (__cxa_guard_acquire(&guard_variable_for_dice_hfe_io_ZipReadStream_getName_name)) {
            char alloc;
            _ZNSsC1EPKcRKSaIcE(&dice_hfe_io_ZipReadStream_getName_name, "Name not stored per zipStream", &alloc);
            __cxa_guard_release(&guard_variable_for_dice_hfe_io_ZipReadStream_getName_name);
            __cxa_atexit(__tcf_1, 0, &__dso_handle);
            return &dice_hfe_io_ZipReadStream_getName_name;
        }
    }
    return &dice_hfe_io_ZipReadStream_getName_name;
}
} }
