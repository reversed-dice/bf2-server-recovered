// FUNCTION: BF2 0x849220
namespace dice {
typedef int (*fn_t)(int, void*, int, void*);
int cb_849220(void* a, int b, void* c) {
    fn_t g = (fn_t)*(void**)0x010b33d0;
    if (g != 0)
        return g(0x10b3240, a, b, c);
    return 0;
}
}
// REVERSED_FUNCTION: PbAuthClient (0x849220)
