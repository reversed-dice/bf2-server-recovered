// FUNCTION: BF2 0x8fd080
struct RangePair_0x8fd080 { int* a; int* b; };

namespace dice { namespace hfe { namespace world {
RangePair_0x8fd080 fn_0x8fd080(void* self) {
    *(unsigned int*)((char*)self+0x110) = 0x0;
    *(unsigned int*)((char*)self+0x114) = 0x6;
    RangePair_0x8fd080 r;
    r.a = (int*)((char*)self+0x110);
    r.b = (int*)((char*)self+0x114);
    return r;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass1171_getObjectRange_const (0x8fd080)
