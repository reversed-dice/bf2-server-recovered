// FUNCTION: BF2 0x473a20
void dtor_473a20(void* self) {
    *(void**)self = (void*)0xb33280;
    if (self == *(void**)0x108caa8) {
        void* em = *(void**)0x10b3730;
        ((void (*)(void*, int, void*))(*(void***)em)[0xc])(em, 0, self);
        *(void**)0x108caa8 = 0;
    }
    void* rd = (char*)self + 8;
    if (rd != 0) {
        char* ra = (char*)self + 0x78;
        if (rd != ra) {
            long i = 2;
            do {
                i--;
            } while (i != 0);
        }
    }
}
