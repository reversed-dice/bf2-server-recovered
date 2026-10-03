// FUNCTION: BF2 0x508e90
extern "C" void dice_anim_Skeleton_dtor_Skeleton(void* s);
extern "C" void _ZdlPv(void* p);
extern "C" void dice_hfe_world_Bundle_dtor_Bundle(void* self);

void dtor_508e90(void* self) {
    *(void**)self = (void*)0xb3d050;
    *(void**)((char*)self + 0x100) = (void*)0xb3d380;
    *(void**)((char*)self + 0x238) = (void*)0xb3d3b8;
    void* s = *(void**)((char*)self + 0x260);
    if (s != 0) {
        dice_anim_Skeleton_dtor_Skeleton(s);
        _ZdlPv(s);
    }
    void* p1 = *(void**)((char*)self + 0x248);
    if (p1 != 0) {
        ((void (*)(void*))(*(void***)p1)[0x1])(p1);
    }
    void* p2 = *(void**)((char*)self + 0x250);
    if (p2 != 0) {
        ((void (*)(void*))(*(void***)p2)[0x1])(p2);
    }
    dice_hfe_world_Bundle_dtor_Bundle(self);
    _ZdlPv(self);
}
