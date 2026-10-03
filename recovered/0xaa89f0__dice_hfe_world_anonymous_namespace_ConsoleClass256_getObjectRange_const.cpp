// FUNCTION: BF2 0xaa89f0
struct RangePair_0xaa89f0 { int* a; int* b; };

namespace dice { namespace hfe { namespace world {
RangePair_0xaa89f0 fn_0xaa89f0(void* self) {
    *(unsigned int*)((char*)self+0x110) = 0x0;
    *(unsigned int*)((char*)self+0x114) = 0x14;
    RangePair_0xaa89f0 r;
    r.a = (int*)((char*)self+0x110);
    r.b = (int*)((char*)self+0x114);
    return r;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass256_getObjectRange_const (0xaa89f0)
