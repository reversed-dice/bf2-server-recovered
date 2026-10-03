// FUNCTION: BF2 0x721270
void fn_0x721270(unsigned short* dst, long count, unsigned short* src) {
    if (count != 0) {
        long i = 0;
        do {
            if (dst != 0) { dst[0] = src[0]; dst[1] = src[1]; dst[2] = src[2]; dst[3] = src[3]; }
            dst += 4;
            i++;
        } while (i != count);
    }
}