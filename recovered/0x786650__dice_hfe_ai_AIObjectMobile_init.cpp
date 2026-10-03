// FUNCTION: BF2 0x786650
namespace dice { namespace hfe { namespace ai {
typedef void* (*vfn_70)(void*, void*);
extern void* g_010ade58;
void cb_786650(void* self) {
    *(void**)((char*)self + 0x40) = *(void**)((char*)*(void**)((char*)self + 0x38) + 0x88);
    void* q = g_010ade58;
    (*(vfn_70*)((char*)*(void**)q + 0x70))(q, *(void**)((char*)self + 0x8));
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectMobile_init (0x786650)
