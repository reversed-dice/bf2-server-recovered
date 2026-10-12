// FUNCTION: BF2 0xaaafa0
typedef void* (*F1)(void*);
typedef void* (*F2)(void*, void*);
typedef char (*F2c)(void*, void*);

extern "C" void* eom_aaafa0(void* self) {
    int mode = *(int*)((char*)self + 0x30);
    if (mode == 0) {
        *(char*)((char*)self + 0x108) = 1;
        *(int*)0x0112ee24 = *(int*)0x01092c40;
        void* p = *(void**)0x0112ee38;
        *(int*)0x0112ee20 = *(int*)0x01092c3c;
        ((F1)(*(void***)p)[0x20])(p);
        void* q = *(void**)0x0112ee38;
        void* r = ((F1)(*(void***)q)[0x20])(q);
        char c = ((F2c)(*(void***)r)[0xb])(r, (void*)0x0112ee20);
        *(char*)((char*)self + 0x10a) = c;
        return (char*)self + 0x10a;
    }
    if (mode == 1) {
        unsigned char b = **(unsigned char**)((char*)self + 0x38);
        *(char*)((char*)self + 0x108) = 0;
        *(int*)0x0112ee24 = *(int*)0x01092c40;
        void* p = *(void**)0x0112ee38;
        *(int*)0x0112ee20 = *(int*)0x01092c3c;
        ((F1)(*(void***)p)[0x20])(p);
        if (b) {
            void* q = *(void**)0x0112ee38;
            void* r = ((F1)(*(void***)q)[0x20])(q);
            ((F2)(*(void***)r)[0xa])(r, (void*)0x0112ee20);
        } else {
            void* q = *(void**)0x0112ee38;
            void* r = ((F1)(*(void***)q)[0x20])(q);
            F2 f = (F2)(*(void***)r)[0xa];
            int tmp[2];
            tmp[1] = *(int*)0x0112ee20;
            tmp[0] = *(int*)0x0112ee24;
            f(r, tmp);
        }
    }
    return 0;
}
