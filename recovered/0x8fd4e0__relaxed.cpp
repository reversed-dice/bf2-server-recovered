// FUNCTION: BF2 0x8fd4e0
struct RangePair_0x754910 { int* a; int* b; };

namespace dice { namespace hfe { namespace world {
RangePair_0x754910 fn_0x754910(void* self) {
    *(unsigned int*)((char*)self+0x110) = 0x0;
    *(unsigned int*)((char*)self+0x114) = 0x40;
    RangePair_0x754910 r;
    r.a = (int*)((char*)self+0x110);
    r.b = (int*)((char*)self+0x114);
    return r;
}
} } }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass150_getObjectRange_const (0x754910)
