// FUNCTION: BF2 0x42c8e0
extern "C" void _ZdlPv(void*);
extern "C" void dtor_42c8e0(void* self) {
    *(void**)self = (void*)0xb2d8f0;
    _ZdlPv(self);
}
// REVERSED_FUNCTION: dice_hfe_RemoteEvent_dtor_RemoteEvent (0x42c8e0)
