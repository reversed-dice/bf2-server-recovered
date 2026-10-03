// FUNCTION: BF2 0x81cba0
namespace dice { namespace hfe {
extern void fn_81cb70(void* a, int b, int c, int d, int e, int f);
int ptaPatchFailed_0x81cba0(void* self) {
    fn_81cb70(self, 0, 0, 0xbb25f1, 0, 0xbb25f1);
    return 1;
}
} }
