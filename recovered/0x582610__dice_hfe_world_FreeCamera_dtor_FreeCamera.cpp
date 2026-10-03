// FUNCTION: BF2 0x582610
#include <string>
struct RbTree0 { void erase(void*); };
struct RbTree1 { void erase(void*); };
extern "C" {
void dice_hfe_world_Bundle_dtor_Bundle(void*);
void std_List_base_std_string_std_allocator_std_string_M_clear(void*);
}
extern "C" void dtor_582610(char* param_1) {
    *(void**)param_1 = (void*)0xb595b0;
    *(void**)(param_1 + 0x100) = (void*)0xb59b70;
    *(void**)(param_1 + 0x238) = (void*)0xb59ba8;
    *(void**)(param_1 + 0x240) = (void*)0xb59cc0;
    *(void**)(param_1 + 0x248) = (void*)0xb59d10;
    int* p1 = *(int**)(param_1 + 0x428);
    if (p1 != 0) { int v1 = *p1 - 1; *p1 = v1; if (v1 == 0) operator delete(p1); }
    ((std::string*)(param_1 + 0x3a0))->~basic_string();
    if (*(void**)(param_1 + 0x308) != 0) operator delete(*(void**)(param_1 + 0x308));
    RbTree0* t0 = (RbTree0*)(param_1 + 0x2d8);
    t0->erase(*(void**)((char*)t0 + 0x10));
    RbTree1* t1 = (RbTree1*)(param_1 + 0x2a8);
    t1->erase(*(void**)((char*)t1 + 0x10));
    int* p2 = *(int**)(param_1 + 0x298);
    if (p2 != 0) { int v2 = *p2 - 1; *p2 = v2; if (v2 == 0) operator delete(p2); }
    ((std::string*)(param_1 + 0x290))->~basic_string();
    std_List_base_std_string_std_allocator_std_string_M_clear(param_1 + 0x280);
    std_List_base_std_string_std_allocator_std_string_M_clear(param_1 + 0x270);
    if (*(void**)(param_1 + 0x258) != 0) operator delete(*(void**)(param_1 + 0x258));
    dice_hfe_world_Bundle_dtor_Bundle(param_1);
}
// REVERSED_FUNCTION: dice_hfe_world_FreeCamera_dtor_FreeCamera (0x582610)
