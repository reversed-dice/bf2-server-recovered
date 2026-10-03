// FUNCTION: BF2 0x551680
// releaseAnimation 0x551680
// Cleans up two skeleton pointers and unregisters from animation system
extern "C" {
    extern void* dice_anim_animationSystemTemplateManager;  // 0x010935c8
    extern void _ZN5dice4anim9SkeletonD1Ev(void* skeleton);
    extern void _ZdlPv(void* ptr);
}

typedef void (*FnUnreg)(void*, void*);

void releaseAnimation(void* self) {
    // Clean up first skeleton at offset 0x2a8
    void* skel1 = *(void**)((char*)self + 0x2a8);
    if (skel1 != 0) {
        _ZN5dice4anim9SkeletonD1Ev(skel1);
        _ZdlPv(skel1);
    }
    
    // Clean up second skeleton at offset 0x2c0
    void* skel2 = *(void**)((char*)self + 0x2c0);
    if (skel2 != 0) {
        _ZN5dice4anim9SkeletonD1Ev(skel2);
        _ZdlPv(skel2);
    }
    
    // Unregister first animation at offset 0x2b0 via vtable[0x20]
    void* mgr = dice_anim_animationSystemTemplateManager;
    FnUnreg unreg = (FnUnreg)(*(void**)((char*)*(void**)mgr + 0x20));
    unreg(mgr, *(void**)((char*)self + 0x2b0));
    
    // Unregister second animation at offset 0x2c8 via vtable[0x20]
    // Tail call optimization target
    void* mgr2 = dice_anim_animationSystemTemplateManager;
    FnUnreg unreg2 = (FnUnreg)(*(void**)((char*)*(void**)mgr2 + 0x20));
    unreg2(mgr2, *(void**)((char*)self + 0x2c8));
}
