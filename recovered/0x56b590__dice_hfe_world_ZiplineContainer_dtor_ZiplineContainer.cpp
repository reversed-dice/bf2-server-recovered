// FUNCTION: BF2 0x56b590
extern "C" void dice_hfe_world_PlayerControlObject_dtor_PlayerControlObject(void* self);

void dice_hfe_world_ZiplineContainer_dtor_ZiplineContainer(void* self) {
    *(void**)self = (void*)0xb55590;
    *(void**)((char*)self + 0x100) = (void*)0xb55b78;
    *(void**)((char*)self + 0x238) = (void*)0xb55bb0;
    *(void**)((char*)self + 0x240) = (void*)0xb55e80;
    if (__builtin_expect(*(long*)((char*)self + 0x50) == 0, 0)) {
        void* gl = *(void**)0x10b8c08;
        ((void (*)(void*, void*))(*(void***)gl)[0x67])(gl, self);
    }
    dice_hfe_world_PlayerControlObject_dtor_PlayerControlObject(self);
}
