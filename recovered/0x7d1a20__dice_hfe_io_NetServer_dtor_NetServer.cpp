// FUNCTION: BF2 0x7d1a20
#include <string>
extern "C" void _ZdlPv(void*);
struct RbTree { void erase(void*); };
extern "C" {
void dice_hfe_io_PacketFilter_dtor_PacketFilter(void*);
void dice_hfe_Mutex_dtor_Mutex(void*);
void std_Deque_base_int_std_allocator_int_dtor_Deque_base(void*);
}
extern "C" void dtor_7d1a20(char* param_1) {
    *(void**)param_1 = (void*)0xbaacf0;
    dice_hfe_io_PacketFilter_dtor_PacketFilter(param_1 + 0x5b8);
    dice_hfe_Mutex_dtor_Mutex(param_1 + 0x5a0);
    ((std::string*)(param_1 + 0x590))->~basic_string();
    dice_hfe_Mutex_dtor_Mutex(param_1 + 0x580);
    dice_hfe_Mutex_dtor_Mutex(param_1 + 0x578);
    ((std::string*)(param_1 + 0x568))->~basic_string();
    ((std::string*)(param_1 + 0x520))->~basic_string();
    ((std::string*)(param_1 + 0x518))->~basic_string();
    ((std::string*)(param_1 + 0x510))->~basic_string();
    ((std::string*)(param_1 + 0x500))->~basic_string();
    std_Deque_base_int_std_allocator_int_dtor_Deque_base(param_1 + 0x48);
    RbTree* t = (RbTree*)(param_1 + 0x10);
    t->erase(*(void**)((char*)t + 0x10));
    operator delete(param_1);
}
