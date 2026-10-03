// FUNCTION: BF2 0x83eeb0
extern "C" void* real_0x408178(unsigned long a, unsigned long b);
extern "C" void* _gsi_memalign(unsigned long alignment, unsigned long size) {
    return real_0x408178(size / alignment, alignment);
}
// REVERSED_FUNCTION: _gsi_memalign (0x83eeb0)
