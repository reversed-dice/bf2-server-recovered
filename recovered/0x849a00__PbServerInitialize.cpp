// FUNCTION: BF2 0x849a00
namespace dice { namespace hfe {
extern void fn_8499e0(int a, int b, int c, void* d);
extern void fn_84a920(int a);
void PbServerInitialize_0x849a00() {
    *(void**)0x10b3390 = (void*)0x849850;
    *(void**)0x10b3398 = (void*)0x8492f0;
    *(void**)0x10b33a0 = (void*)0x8494c0;
    *(void**)0x10b33a8 = (void*)0x849540;
    *(void**)0x10b33c0 = (void*)0x849560;
    fn_8499e0(0x10, -1, 0, (void*)0xbb25f1);
    if (*(void**)0x10b33b0)
        return;
    fn_84a920(0);
}
} }
