// FUNCTION: BF2 0x48c0a0
namespace dice { namespace hfe {
extern int fn_0x00407338(unsigned int a);
extern void atexit_0x004071c8(void* f, void* arg, void* dso);


extern void* fn_0x004ee6b0(void* a, int b);


void si_48c0a0(int a, int b) {
    if (a != 1)
        return;
    if (b != 0xffff)
        return;
    fn_0x00407338(0x108ccd8);
    atexit_0x004071c8((void*)0x48c090, 0, (void*)0xf66a88);
    *(void**)0x0108ccd0 = fn_0x004ee6b0((void*)0xb34a58, 0x1);
}
} }
