// FUNCTION: BF2 0x767c80
void fn_0x767c80(char* dst, long count, char* src) {
    if (count != 0) {
        long i = 0;
        do {
            if (dst != 0) { *(void**)dst = *(void**)src; *(int*)(dst+8) = *(int*)(src+8); }
            dst += 12;
            i++;
        } while (i != count);
    }
}