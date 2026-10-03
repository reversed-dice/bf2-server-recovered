// FUNCTION: BF2 0x567850
extern "C" void* op_new_407508(unsigned long);
extern "C" void list_insert_407e78(void*, void*);
void fn_0x567850(void* self, void* trigger) {
    void* listHead = (char*)self + 0x8;
    void* node = op_new_407508(0x18);
    *(void**)((char*)node + 0x10) = trigger;
    list_insert_407e78(node, listHead);
}
// REVERSED_FUNCTION: dice_hfe_world_TriggerManager_addTrigger_dice_hfe_world_Triggerptr (0x567850)
