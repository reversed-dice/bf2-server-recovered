// FUNCTION: BF2 0x6b15c0
extern "C" void dice_anim_TriggerManager_dtor_TriggerManager(void* p);
extern "C" void dice_anim_BundleManager_dtor_BundleManager(void* p);
extern "C" void dice_anim_IAnimationSystemTemplate_dtor_IAnimationSystemTemplate(void* self);
extern "C" void _ZdlPv(void* p);

void dtor_6b15c0(void* self) {
    void* p1 = *(void**)((char*)self + 8);
    *(void**)self = (void*)0xb90bf0;
    if (p1 != 0) {
        dice_anim_TriggerManager_dtor_TriggerManager(p1);
        _ZdlPv(p1);
    }
    void* p2 = *(void**)((char*)self + 0x10);
    if (p2 != 0) {
        dice_anim_BundleManager_dtor_BundleManager(p2);
        _ZdlPv(p2);
    }
    _ZdlPv(*(void**)((char*)self + 0x18));
    dice_anim_IAnimationSystemTemplate_dtor_IAnimationSystemTemplate(self);
    _ZdlPv(self);
}
