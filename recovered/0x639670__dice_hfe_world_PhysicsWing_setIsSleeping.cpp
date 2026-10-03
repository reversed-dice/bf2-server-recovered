// FUNCTION: BF2 0x639670
namespace dice { namespace hfe { namespace world {
typedef void* (*vfn_c0)(void*, int, int);
void* cb_639670(void* self) {
    if (*(int*)(*(void**)0x01092940) == 1) {
        *(int*)((char*)self + 0x74) = *(int*)((char*)self + 0x70);
        void* q = *(void**)((char*)self + 0x18);
        return (*(vfn_c0*)((char*)*(void**)q + 0xc0))(q, 0x800, 0);
    }
    *(int*)((char*)self + 0x74) = 0;
    void* q = *(void**)((char*)self + 0x18);
    return (*(vfn_c0*)((char*)*(void**)q + 0xc0))(q, 0, 0x800);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_PhysicsWing_setIsSleeping (0x639670)
