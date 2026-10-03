// FUNCTION: BF2 0x8252b0
extern "C" bool fn_0x8252b0(void* self) {
    unsigned int v = *((unsigned char*)self+0x14);
    return (v >> 1) & 1;
}
// REVERSED_FUNCTION: SBServerHasFullKeys (0x8252b0)
