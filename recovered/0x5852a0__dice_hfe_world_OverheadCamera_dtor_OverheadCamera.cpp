// FUNCTION: BF2 0x5852a0
#include <string>
struct RbTree0 { void erase(void*); };
extern "C" {
void dice_hfe_world_Bundle_dtor_Bundle(void*);
void std_List_base_std_string_std_allocator_std_string_M_clear(void*);
}
extern "C" void dtor_5852a0(char* param_1) {
    *(void**)param_1 = (void*)0xb5aa90;
    *(void**)(param_1 + 0x100) = (void*)0xb5aed0;
    *(void**)(param_1 + 0x238) = (void*)0xb5af08;
    ((std::string*)(param_1 + 0x368))->~basic_string();
    if (*(void**)(param_1 + 0x2c8) != 0) operator delete(*(void**)(param_1 + 0x2c8));
    RbTree0* t0 = (RbTree0*)(param_1 + 0x298);
    t0->erase(*(void**)((char*)t0 + 0x10));
    ((std::string*)(param_1 + 0x280))->~basic_string();
    std_List_base_std_string_std_allocator_std_string_M_clear(param_1 + 0x270);
    std_List_base_std_string_std_allocator_std_string_M_clear(param_1 + 0x260);
    if (*(void**)(param_1 + 0x248) != 0) operator delete(*(void**)(param_1 + 0x248));
    dice_hfe_world_Bundle_dtor_Bundle(param_1);
    operator delete(param_1);
}
// REVERSED_FUNCTION: dice_hfe_world_OverheadCamera_dtor_OverheadCamera (0x5852a0)
