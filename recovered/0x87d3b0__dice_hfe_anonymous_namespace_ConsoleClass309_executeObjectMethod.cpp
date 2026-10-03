// FUNCTION: BF2 0x87d3b0
void* CAM_acc_active() __attribute__((noinline));
void* CAM_acc_active() { return 0; }
long fn_87d3b0(long p) {
    int m = *(int*)(p + 0x30);
    if (__builtin_expect(m == 0, 1)) {
        *(char*)(p + 0x108) = 1;
        void* h = CAM_acc_active();
        *(int*)(p + 0x10c) = *(int*)((char*)h + 0x14);
        return p + 0x10c;
}
    if (m != 1) return 0;
    int v = **(int**)(p + 0x38);
    *(char*)(p + 0x108) = 0;
    void* h2 = CAM_acc_active();
    *(int*)((char*)h2 + 0x14) = v;
    return 0;
}