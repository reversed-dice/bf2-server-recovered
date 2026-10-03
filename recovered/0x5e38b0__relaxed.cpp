// FUNCTION: BF2 0x5e38b0
namespace dice { namespace hfe { namespace world {
typedef void* (*vfn_18)(void*, int);
typedef bool (*vfn_148)(void*);
bool cb_5e3810(void* self) {
    void* q = *(void**)((char*)self + 0x2b8);
    if (q == 0)
        return 0;
    void* r = (*(vfn_18*)((char*)*(void**)q + 0x18))(q, *(int*)0x00c75e1c);
    return (*(vfn_148*)((char*)*(void**)r + 0x150))(r);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_getGoBackOnRecoil (0x5e3810)
