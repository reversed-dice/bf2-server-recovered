// FUNCTION: BF2 0x4eff30
#include <string>

extern "C" {
char DAT_00bb25f1;
void _ZNSsC1EPKcRKSaIcE(void*, const char*, void*);
}

extern "C" void ctor_4eff30(char* param_1) {
    *(int*)(param_1) = 0;
    *(int*)(param_1 + 4) = 0;
    unsigned char a3, a2, a1;
    _ZNSsC1EPKcRKSaIcE(param_1 + 8, &DAT_00bb25f1, &a1);
    _ZNSsC1EPKcRKSaIcE(param_1 + 0x10, &DAT_00bb25f1, &a2);
    _ZNSsC1EPKcRKSaIcE(param_1 + 0x18, &DAT_00bb25f1, &a3);
    *(int*)(param_1 + 0x20) = 400;
    *(int*)(param_1 + 0x24) = 300;
    *(int*)(param_1 + 0x28) = 30;
    *(unsigned int*)(param_1 + 0x2c) = 0x42b40000;
    *(unsigned char*)(param_1 + 0x30) = 1;
    *(unsigned char*)(param_1 + 0x31) = 0;
    *(int*)(param_1 + 0x34) = 0;
    *(unsigned char*)(param_1 + 0x38) = 1;
    *(unsigned char*)(param_1 + 0x39) = 0;
    *(int*)(param_1 + 0x3c) = 0;
    *(int*)(param_1 + 0x40) = -1;
    *(unsigned char*)(param_1 + 0x44) = 0;
    *(int*)(param_1 + 0x48) = 1;
}
// REVERSED_FUNCTION: dice_hfe_DemoConfig_DemoConfig (0x4eff30)
