// FUNCTION: BF2 0x4b56b0
typedef void* (*getfn_4b56b0)(void*, unsigned int, unsigned int);
typedef long  (*subfn_4b56b0)(void*, int, bool);

extern "C" long f_4b56b0(void* self, unsigned int p2, unsigned int p3, int p4, bool p5) {
    long r;
    void* a = (*(getfn_4b56b0*)(*(char**)self + 0xa0))(self, p2, p3);
    if (a) {
        r = (*(subfn_4b56b0*)(*(char**)a + 0x68))(a, p4, p5);
        if (__builtin_expect(r != 0, 1)) return r;
    }
    void* b = (*(getfn_4b56b0*)(*(char**)self + 0xa0))(self, p2, 0);
    if (__builtin_expect(b == 0, 1)) return 0;
    r = (*(subfn_4b56b0*)(*(char**)b + 0x68))(b, p4, p5);
    if (__builtin_expect(r == 0, 0)) return 0;
    return r;
}
