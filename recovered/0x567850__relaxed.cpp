// FUNCTION: BF2 0x567850
extern "C" void* op_new_407508(unsigned long);
extern "C" void list_insert_407e78(void*, void*);
void fn_0x5625d0(void* self, void* templatePtr) {
    void* listHead = (char*)self + 0x8;
    void* node = op_new_407508(0x18);
    *(void**)((char*)node + 0x10) = templatePtr;
    list_insert_407e78(node, listHead);
}
// REVERSED_FUNCTION: dice_hfe_world_TriggerableManager_addTriggerableTargetTemplate_dice_hfe_world_TriggerableTargetTemplateptr (0x5625d0)
