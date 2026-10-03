// FUNCTION: BF2 0x566ca0
extern "C" void unhook_call(void*);
extern "C" void delete_call(void*);
void* fn_0x566ca0(void* listThis, void* node) {
    void* next = *(void**)node;
    unhook_call(node);
    delete_call(node);
    return next;
}
// REVERSED_FUNCTION: std_list_dice_hfe_world_TriggerableTargetptr_std_allocator_dice_hfe_world_TriggerableTargetptr_erase_std_List_iterator_dice_hfe_world_TriggerableTargetptr (0x566ca0)
