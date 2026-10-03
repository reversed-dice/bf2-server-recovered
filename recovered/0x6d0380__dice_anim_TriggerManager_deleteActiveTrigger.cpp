// FUNCTION: BF2 0x6d0380
namespace dice { namespace anim {

extern "C" void TriggerManager_deleteTrigger_Triggerptr(void*, void*);
void fn_0x6d0380(void* self) {
    void* p = *(void**)((char*)self+0x30);
    TriggerManager_deleteTrigger_Triggerptr(self, p);
    *(void**)((char*)self+0x30) = 0;
}

} }
// REVERSED_FUNCTION: dice_anim_TriggerManager_deleteActiveTrigger (0x6d0380)
