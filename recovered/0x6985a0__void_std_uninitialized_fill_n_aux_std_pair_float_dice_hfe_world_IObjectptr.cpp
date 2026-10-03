// FUNCTION: BF2 0x6985a0
// 0x6985a0 - uninitialized_fill_n_aux for pair<float, ...>
// Similar to fill_n pattern - might score 100% with GCC 4.0.3
void fn_0x6985a0(void** dst, long count, void* src) {
    if (count != 0) {
        long i = 0;
        do {
            if (dst != 0) {
                *dst = *(void**)src;
                dst[1] = *((void**)src + 1);
            }
            dst += 2;
            i++;
        } while (i != count);
    }
}
