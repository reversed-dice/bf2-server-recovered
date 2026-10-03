// FUNCTION: BF2 0x825310
extern "C" bool SBServerHasPrivateAddress(void* self) {
    unsigned int v = *((unsigned char*)self+0x15);
    return (v>>1)&1;
}
// REVERSED_FUNCTION: SBServerHasPrivateAddress (0x825310)
