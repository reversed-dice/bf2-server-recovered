// FUNCTION: BF2 0x567520
struct RbTreeLike { void erase(void*); };
extern "C" {
extern void* dice_hfe_world_TriggerManager_m_instance;
extern void* dice_hfe_eventManager;
extern void std_List_base_dice_hfe_world_Triggerptr_std_allocator_dice_hfe_world_Triggerptr_M_clear(void*);
}
extern "C" void dtor_567520(char* param_1) {
    *(void**)param_1 = (void*)0xb536a0;
    void* instance = dice_hfe_world_TriggerManager_m_instance;
    void* newval = (param_1 == instance) ? 0 : instance;
    dice_hfe_world_TriggerManager_m_instance = newval;
    (*(void(**)(void*,int,void*))((char*)(*(void**)dice_hfe_eventManager) + 0x60))(dice_hfe_eventManager, 5, param_1);
    RbTreeLike* t = (RbTreeLike*)(param_1 + 0x18);
    t->erase(*(void**)((char*)t + 0x10));
    std_List_base_dice_hfe_world_Triggerptr_std_allocator_dice_hfe_world_Triggerptr_M_clear(param_1 + 8);
}
// REVERSED_FUNCTION: dice_hfe_world_TriggerManager_dtor_TriggerManager (0x567520)
