// BF2_FLAGS: -fno-strict-aliasing -fcrossjumping
#include <string>

extern "C" {
    void* _ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base(void* node);
    void _ZNSsC1EPKcRKSaIcE(void* dst, const char* s, void* alloc);
    void _ZNSsD1Ev(void* s);
    int __cxa_guard_acquire(char* guard);
    void __cxa_guard_release(char* guard);
    void __cxa_atexit(void (*dtor)(void*), void* obj, void* dso);
}

extern "C" {
    extern char guard_variable_for_dice_anim_BundleManager_getBundleName_dice_anim_Bundle_constptr_const_emptyString;
    extern void* dice_anim_BundleManager_getBundleName_dice_anim_Bundle_constptr_const_emptyString;
    extern void* __dso_handle;
}

static void tcf_emptyString(void* arg) {
    void* data = *(void**)&dice_anim_BundleManager_getBundleName_dice_anim_Bundle_constptr_const_emptyString;
    if ((char*)data - 0x18 != (char*)0xf6c6d0) {
        _ZNSsD1Ev(&dice_anim_BundleManager_getBundleName_dice_anim_Bundle_constptr_const_emptyString);
    }
}

extern "C" void* dice_anim_BundleManager_getBundleName_dice_anim_Bundle_constptr_const(
    void* self, const void* bundle)
{
    if (guard_variable_for_dice_anim_BundleManager_getBundleName_dice_anim_Bundle_constptr_const_emptyString == 0) {
        if (__cxa_guard_acquire(&guard_variable_for_dice_anim_BundleManager_getBundleName_dice_anim_Bundle_constptr_const_emptyString)) {
            char tmp;
            _ZNSsC1EPKcRKSaIcE(&dice_anim_BundleManager_getBundleName_dice_anim_Bundle_constptr_const_emptyString,
                              "no bundle found", &tmp);
            __cxa_guard_release(&guard_variable_for_dice_anim_BundleManager_getBundleName_dice_anim_Bundle_constptr_const_emptyString);
            __cxa_atexit(tcf_emptyString, 0, &__dso_handle);
        }
    }
    
    if (bundle != 0) {
        void* first = *(void**)((char*)self + 0x18);
        void* sentinel = (char*)self + 0x8;
        while (first != sentinel) {
            void** value_ptr = (void**)((char*)first + 0x20);
            volatile void* cmp_target = *(volatile void**)((char*)value_ptr + 0x8);
            if (bundle == cmp_target) {
                return value_ptr;
            }
            first = _ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base(first);
        }
    }
    return &dice_anim_BundleManager_getBundleName_dice_anim_Bundle_constptr_const_emptyString;
}
