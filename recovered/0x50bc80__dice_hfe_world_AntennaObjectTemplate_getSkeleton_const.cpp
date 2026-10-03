// FUNCTION: BF2 0x50bc80
// AntennaObjectTemplate::getSkeleton 0x50bc80
// Function-local static with guard variable
namespace dice { namespace hfe { namespace world {

extern "C" {
    extern char guard_variable_for_dice_anim_Skeleton_getPath_const_tmp;
    extern long dice_anim_Skeleton_getPath_const_tmp;
    extern void* __dso_handle;
    int __cxa_guard_acquire(char* guard);
    void __cxa_guard_release(char* guard);
    void __cxa_atexit(void (*dtor)(void*), void* arg, void* handle);
    void* dice_hfe_getEmptyString();
}

void skeletonPathDestructor(void*) {
    // Cleanup function for the static string (if needed)
}

long* getSkeleton(long self) {
    if (*(long*)(self + 0x1d0) == 0) {
        return (long*)dice_hfe_getEmptyString();
    }
    
    if (guard_variable_for_dice_anim_Skeleton_getPath_const_tmp == 0) {
        if (__cxa_guard_acquire(&guard_variable_for_dice_anim_Skeleton_getPath_const_tmp) != 0) {
            dice_anim_Skeleton_getPath_const_tmp = 0xf6c6e8;
            __cxa_guard_release(&guard_variable_for_dice_anim_Skeleton_getPath_const_tmp);
            __cxa_atexit(skeletonPathDestructor, 0, &__dso_handle);
            return &dice_anim_Skeleton_getPath_const_tmp;
        }
    }
    return &dice_anim_Skeleton_getPath_const_tmp;
}

} } }
