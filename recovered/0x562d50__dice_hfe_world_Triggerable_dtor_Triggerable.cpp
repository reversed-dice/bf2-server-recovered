// FUNCTION: BF2 0x562d50
extern "C" void dice_hfe_world_TriggerableManager_removeTriggerable_dice_hfe_world_Triggerableptr(void* mgr, void* self);
extern "C" void _ZdlPv(void* p);
extern "C" void dice_hfe_world_Bundle_dtor_Bundle(void* self);

void dtor_562d50(void* self) {
    *(void**)self = (void*)0xb52750;
    *(void**)((char*)self + 0x100) = (void*)0xb52a78;
    *(void**)((char*)self + 0x238) = (void*)0xb52ab0;
    void* mgr = *(void**)0x108f1a0;
    if (mgr != 0) {
        dice_hfe_world_TriggerableManager_removeTriggerable_dice_hfe_world_Triggerableptr(mgr, self);
    }
    void* p1 = *(void**)((char*)self + 0x278);
    if (p1 != 0) {
        ((void (*)(void*))(*(void***)p1)[0x1])(p1);
    }
    void* p2 = *(void**)((char*)self + 0x280);
    if (p2 != 0) {
        ((void (*)(void*))(*(void***)p2)[0x1])(p2);
    }
    void* p3 = *(void**)((char*)self + 0x260);
    if (p3 != 0) {
        _ZdlPv(p3);
    }
    dice_hfe_world_Bundle_dtor_Bundle(self);
    _ZdlPv(self);
}
