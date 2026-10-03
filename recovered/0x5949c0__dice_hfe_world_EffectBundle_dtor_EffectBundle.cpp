// FUNCTION: BF2 0x5949c0
extern "C" void dice_hfe_world_EffectBundle_removeInstances(void* self);
extern "C" void _ZdlPv(void* p);
extern "C" void dice_hfe_world_Bundle_dtor_Bundle(void* self);

void dtor_5949c0(void* self) {
    *(void**)self = (void*)0xb5e630;
    *(void**)((char*)self + 0x100) = (void*)0xb5e978;
    *(void**)((char*)self + 0x238) = (void*)0xb5e9b0;
    *(void**)((char*)self + 0x240) = (void*)0xb5e9d0;
    dice_hfe_world_EffectBundle_removeInstances(self);
    void* sub = *(void**)((char*)self + 0x258);
    if (sub != 0) {
        ((void (*)(void*, int, int))(*(void***)sub)[0x11])(sub, 0, 0);
        ((void (*)(void*, int, int))(*(void***)*(void**)((char*)self + 0x258))[0x13])(*(void**)((char*)self + 0x258), 0, 0);
        ((void (*)(void*))(*(void***)*(void**)((char*)self + 0x258))[0x1])(*(void**)((char*)self + 0x258));
    }
    void* p1 = *(void**)((char*)self + 0x280);
    if (p1 != 0) {
        _ZdlPv(p1);
    }
    void* p2 = *(void**)((char*)self + 0x268);
    if (p2 != 0) {
        _ZdlPv(p2);
    }
    dice_hfe_world_Bundle_dtor_Bundle(self);
}
