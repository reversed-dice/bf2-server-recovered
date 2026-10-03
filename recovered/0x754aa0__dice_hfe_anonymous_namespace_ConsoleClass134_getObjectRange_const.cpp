// FUNCTION: BF2 0x754aa0
struct RangePair_0x754aa0 { int* a; int* b; };

namespace dice { namespace hfe { namespace world {
RangePair_0x754aa0 fn_0x754aa0(void* self) {
    *(unsigned int*)((char*)self+0x110) = 0x3e4ccccd;
    *(unsigned int*)((char*)self+0x114) = 0x40a00000;
    RangePair_0x754aa0 r;
    r.a = (int*)((char*)self+0x110);
    r.b = (int*)((char*)self+0x114);
    return r;
}
} } }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass134_getObjectRange_const (0x754aa0)
