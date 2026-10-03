// FUNCTION: BF2 0x7892e0
namespace dice { namespace hfe { namespace ai {
typedef void* (*vfn_40)(void*);
typedef float (*vfn_78)(void*);
float cb_7892e0(void* self) {
    void* s8 = *(void**)((char*)self + 0x8);
    void* q = (*(vfn_40*)((char*)*(void**)s8 + 0x40))(s8);
    void* r = *(void**)((char*)q + 0x78);
    if (r != 0)
        return (*(vfn_78*)((char*)*(void**)r + 0x78))(r);
    return *(float*)0x00b94234;
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectPhysical_getHealth (0x7892e0)
