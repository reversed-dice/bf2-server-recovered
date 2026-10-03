// FUNCTION: BF2 0x7fb930
namespace dice { namespace hfe { namespace io {
extern void fn_7fb8f0(void* sub, void* arg);
extern void fn_4085b8(void* p);
int cb_7fb930(void* self) {
    int n = *(int*)((char*)self + 0x8) - 1;
    *(int*)((char*)self + 0x8) = n;
    if (n == 0) {
        if (self != 0) {
            *(void**)((char*)self + 0x0) = (void*)0xbaf8d0;
            void* sub = (char*)self + 0x10;
            fn_7fb8f0(sub, *(void**)((char*)sub + 0x10));
            fn_4085b8(self);
        }
    }
    return n;
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_NullInputDeviceManager_release (0x7fb930)
