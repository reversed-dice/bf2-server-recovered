// FUNCTION: BF2 0x788eb0
namespace dice { namespace hfe { namespace ai {
typedef void* (*vfn_60)(void*);
extern void fn_72cb50(void* q);
float cb_788eb0(void* self) {
    void* q = (*(vfn_60*)((char*)*(void**)self + 0x60))(self);
    if (*(char*)((char*)q + 0x20) != 0)
        fn_72cb50(q);
    return *(float*)((char*)q + 0x1c);
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectPhysical_getSmallestRadius_const (0x788eb0)
