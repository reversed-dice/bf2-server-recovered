// FUNCTION: BF2 0x74ef80
namespace dice { namespace hfe { namespace world {
typedef void* (*vfn_c0)(void*);
void* cb_74ef80(void* self) {
    void* q = *(void**)((char*)self + 0x8);
    if (q == 0)
        return 0;
    void* r = *(void**)((char*)q + 0x88);
    if (r == 0)
        return 0;
    return (*(vfn_c0*)((char*)*(void**)r + 0xc0))(r);
}
} } }
// REVERSED_FUNCTION: dice_hfe_ObjectSoundNode_getVelocity (0x74ef80)
