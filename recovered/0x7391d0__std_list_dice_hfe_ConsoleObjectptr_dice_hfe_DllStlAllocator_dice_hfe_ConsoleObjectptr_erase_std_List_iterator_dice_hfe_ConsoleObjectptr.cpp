// FUNCTION: BF2 0x7391d0
extern "C" void unhook_call(void*);
extern "C" void delete_call(void*);
void* fn_0x7391d0(void* listThis, void* node) {
    void* next = *(void**)node;
    unhook_call(node);
    delete_call(node);
    return next;
}
// REVERSED_FUNCTION: std_list_dice_hfe_ConsoleObjectptr_dice_hfe_DllStlAllocator_dice_hfe_ConsoleObjectptr_erase_std_List_iterator_dice_hfe_ConsoleObjectptr (0x7391d0)
