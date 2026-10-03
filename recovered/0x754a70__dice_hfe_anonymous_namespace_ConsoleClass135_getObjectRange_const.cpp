// FUNCTION: BF2 0x754a70
struct RangePair_0x754a70 { int* a; int* b; };

namespace dice { namespace hfe { namespace world {
RangePair_0x754a70 fn_0x754a70(void* self) {
    *(unsigned int*)((char*)self+0x110) = 0x0;
    *(unsigned int*)((char*)self+0x114) = 0x3f800000;
    RangePair_0x754a70 r;
    r.a = (int*)((char*)self+0x110);
    r.b = (int*)((char*)self+0x114);
    return r;
}
} } }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass135_getObjectRange_const (0x754a70)
