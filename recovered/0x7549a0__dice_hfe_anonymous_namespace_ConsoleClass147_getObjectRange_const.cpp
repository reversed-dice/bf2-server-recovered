// FUNCTION: BF2 0x7549a0
struct RangePair_0x7549a0 { int* a; int* b; };

namespace dice { namespace hfe { namespace world {
RangePair_0x7549a0 fn_0x7549a0(void* self) {
    *(unsigned int*)((char*)self+0x110) = 0x0;
    *(unsigned int*)((char*)self+0x114) = 0x43b40000;
    RangePair_0x7549a0 r;
    r.a = (int*)((char*)self+0x110);
    r.b = (int*)((char*)self+0x114);
    return r;
}
} } }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass147_getObjectRange_const (0x7549a0)
