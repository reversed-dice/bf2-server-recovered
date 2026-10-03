// FUNCTION: BF2 0x56c210
namespace dice { namespace hfe { namespace world {
typedef void* (*vfn_1b0)(void*);
void* cb_56c210(void* self) {
    void* q = *(void**)((char*)self + 0x270);
    if (q == 0)
        return 0;
    void* r = *(void**)((char*)q + 0x8);
    if (r == 0)
        return 0;
    return (*(vfn_1b0*)((char*)*(void**)r + 0x1b0))(r);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ZiplineContainer_getNetworkable_const (0x56c210)
