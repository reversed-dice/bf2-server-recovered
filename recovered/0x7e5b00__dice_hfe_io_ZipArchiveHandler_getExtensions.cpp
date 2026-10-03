// FUNCTION: BF2 0x7e5b00
namespace dice { namespace hfe {
extern "C" int __cxa_guard_acquire(char*);
extern "C" void __cxa_guard_release(char*);
extern "C" int __cxa_atexit(void(*)(void*), void*, void*);
extern "C" void* __dso_handle;
extern "C" char guard_variable_for_dice_hfe_io_ZipArchiveHandler_getExtensions_ext;
extern "C" void* dice_hfe_io_ZipArchiveHandler_getExtensions_ext;
extern "C" void _ZNSsC1EPKcRKSaIcE(void*, const char*, void*);
extern "C" void __tcf_0(void*);

extern "C" void* dice_hfe_io_ZipArchiveHandler_getExtensions() {
    if (!guard_variable_for_dice_hfe_io_ZipArchiveHandler_getExtensions_ext) {
        if (__cxa_guard_acquire(&guard_variable_for_dice_hfe_io_ZipArchiveHandler_getExtensions_ext)) {
            char alloc;
            _ZNSsC1EPKcRKSaIcE(&dice_hfe_io_ZipArchiveHandler_getExtensions_ext, "ZIP PK3", &alloc);
            __cxa_guard_release(&guard_variable_for_dice_hfe_io_ZipArchiveHandler_getExtensions_ext);
            __cxa_atexit(__tcf_0, 0, &__dso_handle);
            return &dice_hfe_io_ZipArchiveHandler_getExtensions_ext;
        }
    }
    return &dice_hfe_io_ZipArchiveHandler_getExtensions_ext;
}
} }
