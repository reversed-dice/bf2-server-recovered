// FUNCTION: BF2 0x8013b0
namespace dice { namespace hfe {
extern "C" int __cxa_guard_acquire(char*);
extern "C" void __cxa_guard_release(char*);
extern "C" int __cxa_atexit(void(*)(void*), void*, void*);
extern "C" void* __dso_handle;
extern "C" char guard_variable_for_dice_hfe_io_UnixFileSystem_getRootSubstitution_const_cwd;
extern "C" void* dice_hfe_io_UnixFileSystem_getRootSubstitution_const_cwd;
extern "C" void _ZNSsC1EPKcRKSaIcE(void*, const char*, void*);
extern "C" void __tcf_1(void*);

extern "C" void* dice_hfe_io_UnixFileSystem_getRootSubstitution_const() {
    if (!guard_variable_for_dice_hfe_io_UnixFileSystem_getRootSubstitution_const_cwd) {
        if (__cxa_guard_acquire(&guard_variable_for_dice_hfe_io_UnixFileSystem_getRootSubstitution_const_cwd)) {
            char alloc;
            _ZNSsC1EPKcRKSaIcE(&dice_hfe_io_UnixFileSystem_getRootSubstitution_const_cwd, ".", &alloc);
            __cxa_guard_release(&guard_variable_for_dice_hfe_io_UnixFileSystem_getRootSubstitution_const_cwd);
            __cxa_atexit(__tcf_1, 0, &__dso_handle);
            return &dice_hfe_io_UnixFileSystem_getRootSubstitution_const_cwd;
        }
    }
    return &dice_hfe_io_UnixFileSystem_getRootSubstitution_const_cwd;
}
} }
