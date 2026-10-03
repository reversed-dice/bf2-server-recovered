// FUNCTION: BF2 0x740d70
#include <string>
struct Rb0 { void erase(void*); };
extern "C" void dtor_740d70(char* param_1) {
    *(void**)param_1 = (void*)0xb98b10;
    Rb0* t0 = (Rb0*)(param_1 + 0x2230);
    t0->erase(*(void**)((char*)t0 + 0x10));
    ((std::string*)(param_1 + 0x21e8))->~basic_string();
}
// REVERSED_FUNCTION: dice_hfe_Profiler_dtor_Profiler (0x740d70)
