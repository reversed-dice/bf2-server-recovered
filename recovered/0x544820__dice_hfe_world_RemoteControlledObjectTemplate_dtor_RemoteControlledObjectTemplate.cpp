// FUNCTION: BF2 0x544820
#include <string>
extern "C" void dice_hfe_world_BundleTemplate_dtor_BundleTemplate(void*);
extern "C" void dtor_544820(char* param_1) {
    *(void**)param_1 = (void*)0xb4cc70;
    *(void**)(param_1 + 0x10) = (void*)0xb4cf00;
    *(void**)(param_1 + 0x68) = (void*)0xb4cf38;
    *(void**)(param_1 + 0x1c8) = (void*)0xb4cfb8;
    ((std::string*)(param_1 + 0x200))->~basic_string();
    dice_hfe_world_BundleTemplate_dtor_BundleTemplate(param_1);
    operator delete(param_1);
}
// REVERSED_FUNCTION: dice_hfe_world_RemoteControlledObjectTemplate_dtor_RemoteControlledObjectTemplate (0x544820)
