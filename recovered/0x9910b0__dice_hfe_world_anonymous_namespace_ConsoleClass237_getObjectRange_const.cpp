// FUNCTION: BF2 0x9910b0
struct RangePair_0x9910b0 { int* a; int* b; };

namespace dice { namespace hfe { namespace world {
RangePair_0x9910b0 fn_0x9910b0(void* self) {
    *(unsigned int*)((char*)self+0x110) = 0x0;
    *(unsigned int*)((char*)self+0x114) = 0x40;
    RangePair_0x9910b0 r;
    r.a = (int*)((char*)self+0x110);
    r.b = (int*)((char*)self+0x114);
    return r;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass237_getObjectRange_const (0x9910b0)
