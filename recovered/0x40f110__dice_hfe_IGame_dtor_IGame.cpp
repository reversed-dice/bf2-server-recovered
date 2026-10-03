// FUNCTION: BF2 0x40f110
extern "C" void _ZdlPv(void*);
extern "C" void dtor_40f110(void* self) {
    *(void**)self = (void*)0xb294f0;
    _ZdlPv(self);
}
// REVERSED_FUNCTION: dice_hfe_IGame_dtor_IGame (0x40f110)
