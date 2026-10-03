// FUNCTION: BF2 0x464df0
extern "C" void _ZdlPv(void*);
extern "C" void dtor_464df0(void* self) {
    *(void**)self = (void*)0xb30c90;
    _ZdlPv(self);
}
// REVERSED_FUNCTION: dice_hfe_GameServer_IEventWrapper_dtor_IEventWrapper (0x464df0)
