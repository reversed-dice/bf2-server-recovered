// FUNCTION: BF2 0x9d8130
struct RangePair_0x9d8130 { int* a; int* b; };

namespace dice { namespace hfe { namespace world {
RangePair_0x9d8130 fn_0x9d8130(void* self) {
    *(unsigned int*)((char*)self+0x110) = 0x0;
    *(unsigned int*)((char*)self+0x114) = 0x1;
    RangePair_0x9d8130 r;
    r.a = (int*)((char*)self+0x110);
    r.b = (int*)((char*)self+0x114);
    return r;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass293_getObjectRange_const (0x9d8130)
