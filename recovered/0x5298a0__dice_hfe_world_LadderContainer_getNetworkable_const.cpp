// FUNCTION: BF2 0x5298a0
namespace dice { namespace hfe { namespace world {
typedef void* (*vfn_1b0)(void*);
void* cb_5298a0(void* self) {
    void* q = *(void**)((char*)self + 0x270);
    if (q == 0)
        return 0;
    void* r = *(void**)((char*)q + 0x8);
    if (r == 0)
        return 0;
    return (*(vfn_1b0*)((char*)*(void**)r + 0x1b0))(r);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_LadderContainer_getNetworkable_const (0x5298a0)
