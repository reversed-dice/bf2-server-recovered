// FUNCTION: BF2 0x4bac10
#include <string>
struct Rb0 { void erase(void*); };
struct Rb1 { void erase(void*); };
extern "C" {
void dice_hfe_SpawnManager_removeAll();
void std_List_base_int_std_allocator_int_M_clear(void*);
void std_List_base_dice_hfe_ISpawnPointptr_std_allocator_dice_hfe_ISpawnPointptr_M_clear(void*);
void dice_hfe_ISpawnManager_dtor_ISpawnManager(void*);
}
extern "C" void dtor_4bac10(char* param_1) {
    *(void**)param_1 = (void*)0xb371d0;
    dice_hfe_SpawnManager_removeAll();
    ((std::string*)(param_1 + 0xa0))->~basic_string();
    ((std::string*)(param_1 + 0x98))->~basic_string();
    std_List_base_int_std_allocator_int_M_clear(param_1 + 0x88);
    Rb0* t0 = (Rb0*)(param_1 + 0x58);
    t0->erase(*(void**)((char*)t0 + 0x10));
    Rb1* t1 = (Rb1*)(param_1 + 0x20);
    t1->erase(*(void**)((char*)t1 + 0x10));
    std_List_base_dice_hfe_ISpawnPointptr_std_allocator_dice_hfe_ISpawnPointptr_M_clear(param_1 + 0x10);
    dice_hfe_ISpawnManager_dtor_ISpawnManager(param_1);
}
// REVERSED_FUNCTION: dice_hfe_SpawnManager_dtor_SpawnManager (0x4bac10)
