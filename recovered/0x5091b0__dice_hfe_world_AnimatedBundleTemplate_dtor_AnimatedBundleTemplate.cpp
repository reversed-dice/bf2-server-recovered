// FUNCTION: BF2 0x5091b0
extern "C" void dice_anim_Skeleton_dtor_Skeleton(void* s);
extern "C" void _ZdlPv(void* p);
extern "C" void dice_hfe_world_BundleTemplate_dtor_BundleTemplate(void* self);

void dtor_5091b0(void* self) {
    void* sk = *(void**)((char*)self + 0x1f8);
    *(void**)self = (void*)0xb3d410;
    *(void**)((char*)self + 0x10) = (void*)0xb3d6a0;
    *(void**)((char*)self + 0x68) = (void*)0xb3d6d8;
    *(void**)((char*)self + 0x1c8) = (void*)0xb3d758;
    if (sk != 0) {
        dice_anim_Skeleton_dtor_Skeleton(sk);
        _ZdlPv(sk);
    }
    void* mgr = *(void**)0x10935c8;
    ((void (*)(void*, void*))(*(void***)mgr)[0x4])(mgr, *(void**)((char*)self + 0x200));
    ((void (*)(void*, void*))(*(void***)*(void**)0x10935c8)[0x4])(*(void**)0x10935c8, *(void**)((char*)self + 0x208));
    dice_hfe_world_BundleTemplate_dtor_BundleTemplate(self);
    _ZdlPv(self);
}
