// FUNCTION: BF2 0x43e190
extern "C" void _ZdlPv(void*);
extern "C" void dtor_43e190(void* self) {
    *(void**)self = (void*)0xb2d8f0;
    _ZdlPv(self);
}
// REVERSED_FUNCTION: dice_hfe_RadioMessageReceivedEvent_dtor_RadioMessageReceivedEvent (0x43e190)
