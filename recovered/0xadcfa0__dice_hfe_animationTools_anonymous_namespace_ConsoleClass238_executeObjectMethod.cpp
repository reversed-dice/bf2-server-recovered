// FUNCTION: BF2 0xadcfa0
extern "C" char* AT_trigger_active(int);
long fn_adcfa0(long p) {
    int m = *(int*)(p + 0x30);
    if (m != 0) goto nz;
    {
        *(char*)(p + 0x108) = 1;
        char* h = AT_trigger_active(2);
        int* out;
        // PERM_ORDER
        out = (int*)(p + 0x10c);
        int b = *(int*)(h + 0x48);
        int a = *(int*)(h + 0x44);
        // PERM_ORDER_END
        // PERM_ORDER
        out[0] = a;
        out[1] = b;
        // PERM_ORDER_END
        return (long)out;
    }
    nz:
    if (m != 1) return 0;
    {
        int* q = *(int**)(p + 0x38);
        // PERM_ORDER
        int b = q[1];
        int a = q[0];
        // PERM_ORDER_END
        *(char*)(p + 0x108) = 0;
        char* h = AT_trigger_active(2);
        // PERM_ORDER
        *(int*)(h + 0x44) = a;
        *(int*)(h + 0x48) = b;
        *(int*)(h + 0x4c) = a;
        // PERM_ORDER_END
        return 0;
    }
}
