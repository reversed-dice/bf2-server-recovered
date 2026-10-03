// FUNCTION: BF2 0x991430
struct RangePair_0x991430 { int* a; int* b; };

namespace dice { namespace hfe { namespace world {
RangePair_0x991430 fn_0x991430(void* self) {
    *(unsigned int*)((char*)self+0x110) = 0x0;
    *(unsigned int*)((char*)self+0x114) = 0x4;
    RangePair_0x991430 r;
    r.a = (int*)((char*)self+0x110);
    r.b = (int*)((char*)self+0x114);
    return r;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass127_getObjectRange_const (0x991430)
