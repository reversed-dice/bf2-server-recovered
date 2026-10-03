// FUNCTION: BF2 0x562990
struct Rb0 { void erase(void*); };
struct Rb1 { void erase(void*); };
struct Rb2 { void erase(void*); };
extern "C" {
extern void* dice_hfe_world_TriggerableManager_m_instance;
extern void std_List_base_dice_hfe_world_TriggerableTargetTemplateptr_std_allocator_dice_hfe_world_TriggerableTargetTemplateptr_M_clear(void*);
extern void std_List_base_dice_hfe_world_TriggerableTargetptr_std_allocator_dice_hfe_world_TriggerableTargetptr_M_clear(void*);
extern void std_List_base_dice_hfe_world_TriggerableTemplateptr_std_allocator_dice_hfe_world_TriggerableTemplateptr_M_clear(void*);
extern void std_List_base_dice_hfe_world_Triggerableptr_std_allocator_dice_hfe_world_Triggerableptr_M_clear(void*);
}
extern "C" void dtor_562990(char* param_1) {
    *(void**)param_1 = (void*)0xb52730;
    void* instance = dice_hfe_world_TriggerableManager_m_instance;
    void* newval = (param_1 == instance) ? 0 : instance;
    dice_hfe_world_TriggerableManager_m_instance = newval;
    Rb0* t0 = (Rb0*)(param_1 + 0xb8);
    t0->erase(*(void**)((char*)t0 + 0x10));
    Rb1* t1 = (Rb1*)(param_1 + 0x80);
    t1->erase(*(void**)((char*)t1 + 0x10));
    Rb2* t2 = (Rb2*)(param_1 + 0x48);
    t2->erase(*(void**)((char*)t2 + 0x10));
    std_List_base_dice_hfe_world_TriggerableTargetTemplateptr_std_allocator_dice_hfe_world_TriggerableTargetTemplateptr_M_clear(param_1 + 0x38);
    std_List_base_dice_hfe_world_TriggerableTargetptr_std_allocator_dice_hfe_world_TriggerableTargetptr_M_clear(param_1 + 0x28);
    std_List_base_dice_hfe_world_TriggerableTemplateptr_std_allocator_dice_hfe_world_TriggerableTemplateptr_M_clear(param_1 + 0x18);
    std_List_base_dice_hfe_world_Triggerableptr_std_allocator_dice_hfe_world_Triggerableptr_M_clear(param_1 + 8);
}
// REVERSED_FUNCTION: dice_hfe_world_TriggerableManager_dtor_TriggerableManager (0x562990)
