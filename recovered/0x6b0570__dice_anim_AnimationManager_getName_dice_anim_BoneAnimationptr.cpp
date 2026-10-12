// FUNCTION: BF2 0x6b0570
#include <string>

extern "C" {
    extern char guard_variable_for_dice_anim_AnimationManager_getName_dice_anim_BoneAnimationptr_notFound;
    extern void* dice_anim_AnimationManager_getName_dice_anim_BoneAnimationptr_notFound;
    extern void* __dso_handle;
    void* _ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base(void* node);
    void _ZNSsC1EPKcRKSaIcE(void* dst, const char* s, void* alloc);
    int __cxa_guard_acquire(char* guard);
    void __cxa_guard_release(char* guard);
    void __cxa_atexit(void (*dtor)(void*), void* obj, void* dso);
    void __tcf_1(void* obj);
}

extern "C" void* dice_anim_AnimationManager_getName_dice_anim_BoneAnimationptr(void* self, void* anim)
{
    void* first = *(void**)((char*)self + 0x20);
    void* sentinel = (char*)self + 0x10;
    while (first != sentinel) {
        void* value_ptr = (char*)first + 0x20;
        void* cmp_target = *(void**)((char*)value_ptr + 0x10);
        if (anim == cmp_target) return value_ptr;
        first = _ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base(first);
    }

    if (guard_variable_for_dice_anim_AnimationManager_getName_dice_anim_BoneAnimationptr_notFound == 0) {
        if (__cxa_guard_acquire(&guard_variable_for_dice_anim_AnimationManager_getName_dice_anim_BoneAnimationptr_notFound)) {
            char tmp;
            _ZNSsC1EPKcRKSaIcE(&dice_anim_AnimationManager_getName_dice_anim_BoneAnimationptr_notFound, "no animation", &tmp);
            __cxa_guard_release(&guard_variable_for_dice_anim_AnimationManager_getName_dice_anim_BoneAnimationptr_notFound);
            __cxa_atexit(__tcf_1, 0, &__dso_handle);
        }
    }
    return &dice_anim_AnimationManager_getName_dice_anim_BoneAnimationptr_notFound;
}
