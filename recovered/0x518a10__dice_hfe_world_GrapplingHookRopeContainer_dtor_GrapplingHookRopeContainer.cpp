// FUNCTION: BF2 0x518a10
extern "C" void dice_hfe_world_PlayerControlObject_dtor_PlayerControlObject(void* self);

void dice_hfe_world_GrapplingHookRopeContainer_dtor_GrapplingHookRopeContainer(void* self) {
    *(void**)self = (void*)0xb423d0;
    *(void**)((char*)self + 0x100) = (void*)0xb429a8;
    *(void**)((char*)self + 0x238) = (void*)0xb429e0;
    *(void**)((char*)self + 0x240) = (void*)0xb42cb0;
    if (__builtin_expect(*(long*)((char*)self + 0x50) == 0, 0)) {
        void* gl = *(void**)0x10b8c08;
        ((void (*)(void*, void*))(*(void***)gl)[0x67])(gl, self);
    }
    dice_hfe_world_PlayerControlObject_dtor_PlayerControlObject(self);
}
