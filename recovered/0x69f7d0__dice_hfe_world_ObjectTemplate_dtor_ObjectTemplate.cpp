// FUNCTION: BF2 0x69f7d0
#include <string>
struct RbTree { void erase(void*); };
extern "C" void dice_hfe_world_IObjectTemplate_dtor_IObjectTemplate(void*);
extern "C" void dtor_69f7d0(char* param_1) {
    *(void**)(param_1 + 0x10) = (void*)0xb8f370;
    *(void**)param_1 = (void*)0xb8f190;
    RbTree* t = (RbTree*)(param_1 + 0x30);
    t->erase(*(void**)((char*)t + 0x10));
    ((std::string*)(param_1 + 0x20))->~basic_string();
    ((std::string*)(param_1 + 0x18))->~basic_string();
    dice_hfe_world_IObjectTemplate_dtor_IObjectTemplate(param_1);
    operator delete(param_1);
}
// REVERSED_FUNCTION: dice_hfe_world_ObjectTemplate_dtor_ObjectTemplate (0x69f7d0)
