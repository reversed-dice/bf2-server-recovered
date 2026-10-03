// FUNCTION: BF2 0x7f9e90
#include <string>
extern "C" {
char DAT_00bb25f1;
void _ZNSsC1ERKSs(void*, void*);
void _ZNSsC1EPKcRKSaIcE(void*, const char*, void*);
}
typedef void* (*Fn)(void*);

extern "C" void* getPlayerControlMap_7f9e90(void* param_1, long param_2) {
    void* p = *(void**)(param_2 + 0x38);
    if (p != 0) {
        Fn f = (Fn)(*(void***)p)[0x28 / 8];
        void* result = f(p);
        _ZNSsC1ERKSs(param_1, result);
    } else {
        unsigned char alloc;
        _ZNSsC1EPKcRKSaIcE(param_1, &DAT_00bb25f1, &alloc);
    }
    return param_1;
}
// REVERSED_FUNCTION: dice_hfe_io_InputManager_getPlayerControlMap (0x7f9e90)
