// FUNCTION: BF2 0x41bf40
namespace dice { namespace hfe {
extern int fn_0x00407338(unsigned int a);
extern void atexit_0x004071c8(void* f, void* arg, void* dso);
extern void* fn_0x0041bee0();
void si_4177d0(int a, int b) {
    if (a != 1)
        return;
    if (b != 0xffff)
        return;
    fn_0x00407338(0x108a348);
    atexit_0x004071c8((void*)0x41baa0, 0, (void*)0xf66a88);
    *(void**)0x0108a340 = fn_0x0041bee0();
}
} }
