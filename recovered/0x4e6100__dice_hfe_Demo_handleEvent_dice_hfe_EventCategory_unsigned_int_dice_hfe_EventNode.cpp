// FUNCTION: BF2 0x4e6100
namespace dice { namespace hfe {
void fn_0x4e6100(void* self, int a, int b) {
    if (a == 2) {
        char v = *(char*)0x0108da98;
        *(char*)0x0108da98 = b == 8 ? 1 : v;
    }
}
} }
