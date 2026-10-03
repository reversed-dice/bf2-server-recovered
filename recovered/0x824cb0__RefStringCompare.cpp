// FUNCTION: BF2 0x824cb0
extern "C" int real_0x4071d8(const void* a, const void* b, ...);
extern "C" int RefStringCompare(void** a, void** b) {
    return real_0x4071d8(*a, *b);
}
// REVERSED_FUNCTION: RefStringCompare (0x824cb0)
