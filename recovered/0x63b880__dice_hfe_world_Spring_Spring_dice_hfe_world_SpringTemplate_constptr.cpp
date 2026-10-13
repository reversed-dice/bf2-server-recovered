// FUNCTION: BF2 0x63b880
// BF2_FLAGS: -fno-strict-aliasing
extern void fn_573e60(void* a, const void* b);
extern void fn_68a600(void* a, unsigned int b, unsigned int c);
extern void* fn_407508(unsigned long n);
extern void fn_7682f0(void* a, const void* b, void* c);
extern void fn_7680f0(void* a);
extern void fn_4085b8(void* a);

void ctor_0x63b880(char* self, const void* tpl) {
    fn_573e60(self, tpl);
    *(void**)self = (void*)0xb85930;
    float z = 0;
    float* a = (float*)(self + 0x250);
    a[0] = z;
    *(void**)(self + 0x100) = (void*)0xb85c48;
    *(unsigned char*)(self + 0x238) = 0;
    *(unsigned char*)(self + 0x239) = 0;
    *(unsigned char*)(self + 0x23a) = 0;
    *(void**)(self + 0x240) = 0;
    *(int*)(self + 0x248) = -1;
    *(int*)(self + 0x24c) = -1;
    a[1] = z;
    a[2] = z;
    float* b = (float*)(self + 0x25c);
    b[0] = z;
    b[1] = z;
    b[2] = z;
    *(float*)(self + 0x268) = z;
    *(void**)(self + 0x270) = 0;
    *(void**)(self + 0x278) = 0;
    fn_68a600(self, 0x800, 0);
    void* w = fn_407508(0x20);
    fn_7682f0(w, tpl, self);
    void* old = *(void**)(self + 0x270);
    if (w != old) {
        if (old) {
            fn_7680f0(old);
            fn_4085b8(old);
        }
        *(void**)(self + 0x270) = w;
    }
}
