// FUNCTION: BF2 0x83eed0
extern "C" void gsiMemoryCallbacksSet(void* a, void* b, void* c, void* d) {
    *(void**)0xf6b3e0 = a;
    *(void**)0xf6b3e8 = b;
    *(void**)0xf6b3f0 = c;
    *(void**)0xf6b3f8 = d;
}
// REVERSED_FUNCTION: gsiMemoryCallbacksSet (0x83eed0)
