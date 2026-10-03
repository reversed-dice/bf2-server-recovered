// FUNCTION: BF2 0x6c3c50
extern "C" void unhook_call(void*);
extern "C" void delete_call(void*);
void* fn_0x6c3c50(void* listThis, void* node) {
    void* next = *(void**)node;
    unhook_call(node);
    delete_call(node);
    return next;
}
// REVERSED_FUNCTION: std_list_dice_anim_RagDollTemplate_Constraint_std_allocator_dice_anim_RagDollTemplate_Constraint_erase_std_List_iterator_dice_anim_RagDollTemplate_Constraint (0x6c3c50)
