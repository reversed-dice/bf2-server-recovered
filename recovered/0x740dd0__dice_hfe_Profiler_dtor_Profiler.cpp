// FUNCTION: BF2 0x740dd0
#include <string>
struct RbTreeLike { void erase(void*); };
extern "C" void dtor_740dd0(char* param_1) {
    *(void**)param_1 = (void*)0xb98b10;
    RbTreeLike* t = (RbTreeLike*)(param_1 + 0x2230);
    t->erase(*(void**)((char*)t + 0x10));
    ((std::string*)(param_1 + 0x21e8))->~basic_string();
    operator delete(param_1);
}
// REVERSED_FUNCTION: dice_hfe_Profiler_dtor_Profiler (0x740dd0)
