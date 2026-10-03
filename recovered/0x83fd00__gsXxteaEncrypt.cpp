// FUNCTION: BF2 0x83fd00
extern "C" void real_0x83fa60(void* a, void* b, void* c, int mode, void* d);
extern "C" void gsXxteaEncrypt(void* a, void* b, void* c, void* d) {
    real_0x83fa60(a, b, c, 1, d);
}
// REVERSED_FUNCTION: gsXxteaEncrypt (0x83fd00)
