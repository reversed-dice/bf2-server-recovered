// FUNCTION: BF2 0x83eef0
typedef void* (*malloc_t)(unsigned long);
extern "C" void* gsimalloc(unsigned long size) {
    malloc_t f = *(malloc_t*)0xf6b3e0;
    return f(size);
}
// REVERSED_FUNCTION: gsimalloc (0x83eef0)
