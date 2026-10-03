// FUNCTION: BF2 0xad4280
extern "C" void dice_hfe_ConsoleObjects_unregisterConsoleObjects_std_list_dice_hfe_ConsoleObjectptr_std_allocator_dice_hfe_ConsoleObjectptr_ref(void* list, void* g);
extern "C" void dice_anim_RagDollTemplate_shutdown(void);
extern "C" void dice_anim_Skeleton_closeMemory(void);
extern "C" void dice_anim_ValueHolderManager_dtor_ValueHolderManager(void* vh);
extern "C" void _ZdlPv(void* p);

int fn_ad4280(void* self) {
    dice_hfe_ConsoleObjects_unregisterConsoleObjects_std_list_dice_hfe_ConsoleObjectptr_std_allocator_dice_hfe_ConsoleObjectptr_ref(*(void**)0xf6c690, (void*)0x1140720);
    void* base = (char*)self + 8;
    void* em = *(void**)0x10b3730;
    ((void (*)(void*, int, void*))(*(void***)em)[0xc])(em, 5, base);
    dice_anim_RagDollTemplate_shutdown();
    dice_anim_Skeleton_closeMemory();
    void* am = *(void**)0x1093598;
    if (am != 0) {
        ((void (*)(void*))(*(void***)am)[0x6])(am);
    }
    void* atm = *(void**)0x10935c8;
    if (atm != 0) {
        ((void (*)(void*))(*(void***)atm)[0x1])(atm);
    }
    void* vh = *(void**)0x10a3140;
    if (vh != 0) {
        dice_anim_ValueHolderManager_dtor_ValueHolderManager(vh);
        _ZdlPv(vh);
    }
    return 1;
}
