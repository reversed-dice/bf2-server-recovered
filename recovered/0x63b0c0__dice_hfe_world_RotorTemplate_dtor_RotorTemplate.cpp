// FUNCTION: BF2 0x63b0c0
#include <string>
extern "C" void dice_hfe_world_BundleTemplate_dtor_BundleTemplate(void*);
extern "C" void dtor_63b0c0(char* param_1) {
    *(void**)param_1 = (void*)0xb85490;
    *(void**)(param_1 + 0x10) = (void*)0xb85720;
    *(void**)(param_1 + 0x68) = (void*)0xb85758;
    *(void**)(param_1 + 0x1c8) = (void*)0xb857d8;
    ((std::string*)(param_1 + 0x200))->~basic_string();
    dice_hfe_world_BundleTemplate_dtor_BundleTemplate(param_1);
}
// REVERSED_FUNCTION: dice_hfe_world_RotorTemplate_dtor_RotorTemplate (0x63b0c0)
