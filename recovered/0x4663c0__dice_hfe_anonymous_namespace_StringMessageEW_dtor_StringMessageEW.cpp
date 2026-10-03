// FUNCTION: BF2 0x4663c0
extern "C" void _ZdlPv(void*);
extern "C" void dtor_4663c0(void* self) {
    *(void**)self = (void*)0xb30c90;
    _ZdlPv(self);
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_StringMessageEW_dtor_StringMessageEW (0x4663c0)
