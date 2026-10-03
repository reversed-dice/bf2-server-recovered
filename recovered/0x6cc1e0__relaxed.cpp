// FUNCTION: BF2 0x6cc1e0
namespace dice {
void fill_0x6cc250(void* dst, long n, void* src) {
    if (n != 0) {
        long i = 0;
        do {
            if (dst != 0) {
                *(long*)dst = *(long*)src;
                *(long*)((char*)dst + 8) = *(long*)((char*)src + 8);
                *(long*)((char*)dst + 0x10) = *(long*)((char*)src + 0x10);
                *(long*)((char*)dst + 0x18) = *(long*)((char*)src + 0x18);
                *(long*)((char*)dst + 0x20) = *(long*)((char*)src + 0x20);
                *(int*)((char*)dst + 0x28) = *(int*)((char*)src + 0x28);
            }
            i++;
            dst = (char*)dst + 0x30;
        } while (n != i);
    }
}
}
