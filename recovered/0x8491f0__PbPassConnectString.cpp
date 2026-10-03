// FUNCTION: BF2 0x8491f0
namespace dice {
typedef void (*fn_t)(int, void*, void*);
void cb_8491f0(void* a, void* b) {
    fn_t g = (fn_t)*(void**)0x010b33c8;
    if (g != 0)
        g(0x10b3240, a, b);
}
}
// REVERSED_FUNCTION: PbPassConnectString (0x8491f0)
