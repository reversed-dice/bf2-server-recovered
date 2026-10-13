// FUNCTION: BF2 0x6ef330
namespace dice { namespace hfe {
extern int fn_0x00407338(unsigned int a);
extern void atexit_0x004071c8(void* f, void* arg, void* dso);

void si_6ef330(int a, int b) {
    if (a != 1)
        return;
    if (b != 0xffff)
        return;
    fn_0x00407338(0x10a3f24);
    atexit_0x004071c8((void*)0x6ef320, 0, (void*)0xf66a88);
    *(int*)0x010a3f20 = 3;
    *(void**)0x010a3f18 = (void*)0x10a3f20;
    *(float*)0x010a3f10 = 0.05f;
    *(void**)0x010a3f08 = (void*)0x10a3f10;
    *(float*)0x010a3f00 = 0.001f;
    *(void**)0x010a3ef8 = (void*)0x10a3f00;
}
} }
