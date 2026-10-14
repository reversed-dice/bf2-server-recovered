// BF2_FLAGS: -fno-tree-dominator-opts -fno-tree-loop-optimize
// FUNCTION: BF2 0x7309c0
namespace dice { namespace hfe {
extern int fn_4071b8(void* a);
extern void fn_407b88(void* a);
void* getTexScaleBias(void) {
    if (*(char*)0x010a4f28)
        return (void*)0x010a4f40;
    if (fn_4071b8((void*)0x010a4f28)) {
        long i = 3;
        float* p = (float*)0x010a4f40;
        for (; i != -1; i--) {
            p[0] = 0.0f; p[1] = 0.0f; p[2] = 0.0f; p[3] = 0.0f;
            p += 4;
        }
        *(float*)0x010a4f40 = 0.5f;
        *(float*)0x010a4f44 = 0.0f;
        *(float*)0x010a4f48 = 0.0f;
        *(float*)0x010a4f4c = 0.0f;
        *(float*)0x010a4f50 = 0.0f;
        *(float*)0x010a4f54 = -0.5f;
        *(float*)0x010a4f58 = 0.0f;
        *(float*)0x010a4f5c = 0.0f;
        *(float*)0x010a4f60 = 0.0f;
        *(float*)0x010a4f64 = 0.0f;
        *(float*)0x010a4f68 = 1.0f;
        *(float*)0x010a4f6c = 0.0f;
        *(float*)0x010a4f70 = 0.5f;
        *(float*)0x010a4f74 = 0.5f;
        *(float*)0x010a4f78 = 0.0f;
        *(float*)0x010a4f7c = 1.0f;
        fn_407b88((void*)0x010a4f28);
    }
    return (void*)0x010a4f40;
}
} }
