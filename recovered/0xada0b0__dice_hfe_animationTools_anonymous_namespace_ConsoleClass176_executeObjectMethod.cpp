// FUNCTION: BF2 0xada0b0
void* AT_valueHolder_active() __attribute__((noinline));
void* AT_valueHolder_active() { return 0; }
long fn_ada0b0(long p) {
    int m = *(int*)(p + 0x30);
    if (__builtin_expect(m == 0, 1)) {
        *(char*)(p + 0x108) = 1;
        void* h = AT_valueHolder_active();
        *(int*)(p + 0x10c) = *(int*)h;
        return p + 0x10c;
    }
    if (m != 1) return 0;
    int v = **(int**)(p + 0x38);
    *(char*)(p + 0x108) = 0;
    void* h2 = AT_valueHolder_active();
    *(int*)h2 = v;
    return 0;
}
