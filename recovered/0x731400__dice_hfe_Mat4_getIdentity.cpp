// FUNCTION: BF2 0x731400
namespace dice { namespace hfe {
extern int fn_4071b8(void* a);
extern void fn_407b88(void* a);
void* getIdentity(void) {
    if (*(char*)0x010a4f38)
        return (void*)0x010a4f80;
    if (fn_4071b8((void*)0x010a4f38)) {
        long i = 3;
        float* p = (float*)0x010a4f80;
        for (; i != -1; i--) {
            p[0] = 0.0f; p[1] = 0.0f; p[2] = 0.0f; p[3] = 0.0f;
            p += 4;
        }
        *(float*)0x010a4f80 = 1.0f;
        *(float*)0x010a4f84 = 0.0f;
        *(float*)0x010a4f88 = 0.0f;
        *(float*)0x010a4f8c = 0.0f;
        *(float*)0x010a4f90 = 0.0f;
        *(float*)0x010a4f94 = 1.0f;
        *(float*)0x010a4f98 = 0.0f;
        *(float*)0x010a4f9c = 0.0f;
        *(float*)0x010a4fa0 = 0.0f;
        *(float*)0x010a4fa4 = 0.0f;
        *(float*)0x010a4fa8 = 1.0f;
        *(float*)0x010a4fac = 0.0f;
        *(float*)0x010a4fb0 = 0.0f;
        *(float*)0x010a4fb4 = 0.0f;
        *(float*)0x010a4fb8 = 0.0f;
        *(float*)0x010a4fbc = 1.0f;
        fn_407b88((void*)0x010a4f38);
    }
    return (void*)0x010a4f80;
}
} }
