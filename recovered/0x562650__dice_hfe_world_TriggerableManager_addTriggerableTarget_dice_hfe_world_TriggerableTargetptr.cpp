// FUNCTION: BF2 0x562650
extern "C" void* op_new_407508(unsigned long);
extern "C" void list_insert_407e78(void*, void*);
void fn_0x562650(void* self, void* target) {
    void* listHead = (char*)self + 0x28;
    void* node = op_new_407508(0x18);
    *(void**)((char*)node + 0x10) = target;
    list_insert_407e78(node, listHead);
}
// REVERSED_FUNCTION: dice_hfe_world_TriggerableManager_addTriggerableTarget_dice_hfe_world_TriggerableTargetptr (0x562650)
