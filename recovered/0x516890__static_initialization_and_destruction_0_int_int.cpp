// FUNCTION: BF2 0x516890
// static_initialization_and_destruction_0(int, int) - initializes iostream and floats
extern "C" {
    void _ZNSt8ios_base4InitC1Ev(void* obj);
    void __cxa_atexit(void (*dtor)(void*), void* obj, void* dso);
    extern char __dso_handle;
    extern long std_ioinit;
    extern int dice_hfe_DWB_DEFAULT_EFFECT_SIZES;
    extern int DAT_0108df88;
    extern int DAT_0108df8c;
}

void __tcf_0(void*) {}

void static_initialization_and_destruction_0(int param_1, int param_2) {
    if (param_1-- == 1 && param_2 == 0xffff) {
        _ZNSt8ios_base4InitC1Ev(&std_ioinit);
        __cxa_atexit(__tcf_0, 0, &__dso_handle);
        dice_hfe_DWB_DEFAULT_EFFECT_SIZES = 0x3e4ccccd;
        DAT_0108df88 = 0x3f800000;
        DAT_0108df8c = 0x3fe66666;
    }
}
