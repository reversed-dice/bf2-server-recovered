// FUNCTION: BF2 0x4167c0
extern "C" void _ZNSs6assignERKSs(void*, const void*);

void dice_hfe_DemoAvailableInfo_setUrl_std_string_constref(void* param_1, const void* param_2) {
    _ZNSs6assignERKSs(param_1, param_2);
    *((unsigned char*)param_1 + 0x26) = 1;
}

// REVERSED_FUNCTION: dice_hfe_DemoAvailableInfo_setUrl_std_string_constref::dice_hfe_DemoAvailableInfo_setUrl_std_string_constref (0x40c8e0)