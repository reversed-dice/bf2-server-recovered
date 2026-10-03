// FUNCTION: BF2 0xa659c0
struct RangePair_0xa659c0 { int* a; int* b; };

namespace dice { namespace hfe { namespace world {
RangePair_0xa659c0 fn_0xa659c0(void* self) {
    *(unsigned int*)((char*)self+0x110) = 0x0;
    *(unsigned int*)((char*)self+0x114) = 0x40;
    RangePair_0xa659c0 r;
    r.a = (int*)((char*)self+0x110);
    r.b = (int*)((char*)self+0x114);
    return r;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass202_getObjectRange_const (0xa659c0)
