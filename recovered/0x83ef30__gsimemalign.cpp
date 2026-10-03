// FUNCTION: BF2 0x83ef30
typedef void* (*memalign_t)(unsigned long, unsigned long);
extern "C" void* gsimemalign(unsigned long a, unsigned long b) {
    memalign_t f = *(memalign_t*)0xf6b3f8;
    return f(a, b);
}
// REVERSED_FUNCTION: gsimemalign (0x83ef30)
