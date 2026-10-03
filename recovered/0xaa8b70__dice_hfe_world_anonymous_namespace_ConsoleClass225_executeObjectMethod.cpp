// FUNCTION: BF2 0xaa8b70


long dice_hfe_world_anonymous_namespace_ConsoleClass225_executeObjectMethod(long param_1) {
    int sel = *(int*)(param_1 + 0x30);
    if (sel != 0) goto not_zero;
    {
        *(char*)(param_1 + 0x108) = 1;
        void* obj = *(void**)0x0112ee30;
        typedef const unsigned* (*Fn)(void*);
        Fn f = (Fn)(*(void***)obj)[0x48 / 8];
        const unsigned* v = f(obj);
        unsigned* d = (unsigned*)(param_1 + 0x10c);
        unsigned a2 = v[2], a1 = v[1], a0 = v[0];
        d[0] = a0; d[1] = a1; d[2] = a2;
        return param_1 + 0x10c;
    }
    not_zero:
    if (sel != 1) return 0;
    {
        const unsigned* src = *(const unsigned**)(param_1 + 0x38);
        unsigned b2 = src[2], b1 = src[1], b0 = src[0];
        unsigned tmp[3];
        tmp[0] = b0; tmp[1] = b1; tmp[2] = b2;
        *(char*)(param_1 + 0x108) = 0;
        void* obj = *(void**)0x0112ee30;
        typedef void (*Fn)(void*, const unsigned*);
        Fn f = (Fn)(*(void***)obj)[0x50 / 8];
        f(obj, tmp);
        return 0;
    }
}
