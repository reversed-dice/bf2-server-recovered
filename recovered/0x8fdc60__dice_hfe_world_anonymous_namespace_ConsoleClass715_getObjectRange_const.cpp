// FUNCTION: BF2 0x8fdc60
struct RangePair_0x8fdc60 { int* a; int* b; };

namespace dice { namespace hfe { namespace world {
RangePair_0x8fdc60 fn_0x8fdc60(void* self) {
    *(unsigned int*)((char*)self+0x110) = 0x0;
    *(unsigned int*)((char*)self+0x114) = 0x4;
    RangePair_0x8fdc60 r;
    r.a = (int*)((char*)self+0x110);
    r.b = (int*)((char*)self+0x114);
    return r;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass715_getObjectRange_const (0x8fdc60)
