// FUNCTION: BF2 0x4c3180
#include <string>
struct RbTreeLike { void erase(void*); };
extern "C" void dtor_4c3180(char* param_1) {
    *(void**)param_1 = (void*)0xb384b0;
    RbTreeLike* t = (RbTreeLike*)(param_1 + 0x150);
    t->erase(*(void**)((char*)t + 0x10));
    ((std::string*)(param_1 + 8))->~basic_string();
    operator delete(param_1);
}
// REVERSED_FUNCTION: dice_hfe_Squad_dtor_Squad (0x4c3180)
