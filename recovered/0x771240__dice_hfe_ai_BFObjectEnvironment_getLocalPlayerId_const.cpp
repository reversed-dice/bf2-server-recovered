// FUNCTION: BF2 0x771240
namespace dice { namespace hfe { namespace ai {
typedef void* (*vfn_60)(void*);
typedef int (*vfn_a8)(void*);
int cb_771240() {
    void* g = *(void**)0x0112ee38;
    void* q = (*(vfn_60*)((char*)*(void**)g + 0x60))(g);
    if (q != 0)
        return (*(vfn_a8*)((char*)*(void**)q + 0xa8))(q);
    return 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_BFObjectEnvironment_getLocalPlayerId_const (0x771240)
