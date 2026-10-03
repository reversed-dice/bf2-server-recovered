// FUNCTION: BF2 0x83bdf0
extern "C" void* real_memset(void* dst, int c, unsigned long n);
extern "C" void* MD5_memset(void* dst, int c, unsigned int n) {
    return real_memset(dst, c, n);
}
// REVERSED_FUNCTION: MD5_memset (0x83bdf0)
