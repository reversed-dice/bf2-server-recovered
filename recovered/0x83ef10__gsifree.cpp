// FUNCTION: BF2 0x83ef10
typedef void (*free_t)(void*);
extern "C" void gsifree(void* p) {
    if (p) {
        free_t f = *(free_t*)0xf6b3e8;
        f(p);
    }
}
// REVERSED_FUNCTION: gsifree (0x83ef10)
