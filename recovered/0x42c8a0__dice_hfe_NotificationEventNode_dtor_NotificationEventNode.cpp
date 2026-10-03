// FUNCTION: BF2 0x42c8a0
extern "C" void _ZdlPv(void*);
extern "C" void dtor_42c8a0(void* self) {
    *(void**)self = (void*)0xb2d8f0;
    _ZdlPv(self);
}
// REVERSED_FUNCTION: dice_hfe_NotificationEventNode_dtor_NotificationEventNode (0x42c8a0)
