// FUNCTION: BF2 0x6b83d0
extern "C" void unhook_call(void*);
extern "C" void delete_call(void*);
void* fn_0x6b83d0(void* listThis, void* node) {
    void* next = *(void**)node;
    unhook_call(node);
    delete_call(node);
    return next;
}
// REVERSED_FUNCTION: std_list_std_pair_float_dice_anim_BoneAnimationptr_std_allocator_std_pair_float_dice_anim_BoneAnimationptr_erase_std_List_iterator_std_pair_float_dice_anim_BoneAnimationptr (0x6b83d0)
