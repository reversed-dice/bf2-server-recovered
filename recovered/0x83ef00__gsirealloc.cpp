// FUNCTION: BF2 0x83ef00
typedef void* (*realloc_t)(void*, unsigned long);
extern "C" void* gsirealloc(void* p, unsigned long size) {
    realloc_t f = *(realloc_t*)0xf6b3f0;
    return f(p, size);
}
// REVERSED_FUNCTION: gsirealloc (0x83ef00)
