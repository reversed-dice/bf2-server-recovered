// FUNCTION: BF2 0x562610
extern "C" void* op_new_407508(unsigned long);
extern "C" void list_insert_407e78(void*, void*);
void fn_0x562610(void* self, void* templatePtr) {
    void* listHead = (char*)self + 0x18;
    void* node = op_new_407508(0x18);
    *(void**)((char*)node + 0x10) = templatePtr;
    list_insert_407e78(node, listHead);
}
// REVERSED_FUNCTION: dice_hfe_world_TriggerableManager_addTriggerableTemplate_dice_hfe_world_TriggerableTemplateptr (0x562610)
