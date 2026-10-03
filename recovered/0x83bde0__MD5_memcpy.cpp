// FUNCTION: BF2 0x83bde0
extern "C" void* real_memcpy(void* dst, const void* src, unsigned long n);
extern "C" void* MD5_memcpy(void* dst, const void* src, unsigned int n) {
    return real_memcpy(dst, src, n);
}
// REVERSED_FUNCTION: MD5_memcpy (0x83bde0)
