// FUNCTION: BF2 0x8252c0
extern "C" bool fn_0x8252c0(void* self) {
    unsigned int v = *((unsigned char*)self+0x14);
    return (v >> 6) & 1;
}
// REVERSED_FUNCTION: SBServerHasValidPing (0x8252c0)
