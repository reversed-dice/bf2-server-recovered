// FUNCTION: BF2 0x58e5e0
namespace dice { namespace hfe { namespace world {
typedef void (*vfn_208)(void*, int, int, int);
typedef void (*vfn_60)(void*);
void cb_58e5e0(void* self) {
    void* q1 = *(void**)((char*)self + 0x2c0);
    if (q1 != 0)
        (*(vfn_208*)((char*)*(void**)q1 + 0x208))(q1, 1, 0, 0);
    void* q2 = *(void**)((char*)self + 0x2d0);
    if (q2 != 0)
        (*(vfn_60*)((char*)*(void**)q2 + 0x60))(q2);
    *(char*)((char*)self + 0x2c8) = 0;
    *(int*)((char*)self + 0x2e0) = 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_AirDraftEffectBundle_stopEffect (0x58e5e0)
