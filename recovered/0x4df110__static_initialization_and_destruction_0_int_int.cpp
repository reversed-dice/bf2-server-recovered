// FUNCTION: BF2 0x4df110
namespace dice { namespace hfe {
extern int fn_0x00407338(unsigned int a);
extern void atexit_0x004071c8(void* f, void* arg, void* dso);



extern void atexit_0x004071c8(void* f, void* arg, void* dso);

void si_4df110(int a, int b) {
    if (a != 1)
        return;
    if (b != 0xffff)
        return;
    fn_0x00407338(0x108da38);
    atexit_0x004071c8((void*)0x4df100, 0, (void*)0xf66a88);
    *(void**)0x0108da20 = 0;
    *(void**)0x0108da28 = 0;
    *(void**)0x0108da30 = 0;
    atexit_0x004071c8((void*)0x4df300, 0, (void*)0xf66a88);
}
} }
