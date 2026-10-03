// FUNCTION: BF2 0x87d430
void* CAM_acc_active() __attribute__((noinline));
void* CAM_acc_active() { return 0; }
long fn_87d430(long p) {
    int m = *(int*)(p + 0x30);
    if (__builtin_expect(m == 0, 1)) {
        *(char*)(p + 0x108) = 1;
        void* h = CAM_acc_active();
        *(unsigned char*)(p + 0x10a) = *(unsigned char*)((char*)h + 0x25);
        return p + 0x10a;
}
    if (m != 1) return 0;
    unsigned char v = **(unsigned char**)(p + 0x38);
    *(char*)(p + 0x108) = 0;
    void* h2 = CAM_acc_active();
    *(unsigned char*)((char*)h2 + 0x25) = v;
    return 0;
}