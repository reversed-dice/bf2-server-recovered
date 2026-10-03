// FUNCTION: BF2 0x7bd950
namespace dice { namespace hfe {
extern int fn_0x00407338(unsigned int a);
extern void atexit_0x004071c8(void* f, void* arg, void* dso);

extern void atexit_0x004071c8(void* f, void* arg, void* dso);
void si_7bd950(int a, int b) {
    if (a != 1)
        return;
    if (b != 0xffff)
        return;
    fn_0x00407338(0x10aeb48);
    atexit_0x004071c8((void*)0x7bd8f0, 0, (void*)0xf66a88);
    *(void**)0x010aeb40 = (void*)0xf6c6e8;
    atexit_0x004071c8((void*)0x7bd9c0, 0, (void*)0xf66a88);
}
} }
