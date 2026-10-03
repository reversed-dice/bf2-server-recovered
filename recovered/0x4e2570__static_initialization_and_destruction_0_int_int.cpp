// FUNCTION: BF2 0x4e2570
namespace dice { namespace hfe {
extern int fn_0x00407338(unsigned int a);
extern void atexit_0x004071c8(void* f, void* arg, void* dso);



extern void atexit_0x004071c8(void* f, void* arg, void* dso);

void si_4e2570(int a, int b) {
    if (a != 1)
        return;
    if (b != 0xffff)
        return;
    fn_0x00407338(0x108da91);
    atexit_0x004071c8((void*)0x4e2560, 0, (void*)0xf66a88);
    *(void**)0x0108da68 = 0;
    *(void**)0x0108da88 = 0;
    *(int*)0x0108da68 = 0;
    *(void**)0x0108da70 = 0;
    *(void**)0x0108da78 = (void*)0x108da68;
    *(void**)0x0108da80 = (void*)0x108da68;
    atexit_0x004071c8((void*)0x4e2670, 0, (void*)0xf66a88);
}
} }
