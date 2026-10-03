// FUNCTION: BF2 0x55d2e0
namespace dice { namespace hfe { namespace world {
typedef void* (*vfn_c0)(void*, int, int);
void* cb_55d2e0(void* self) {
    void* src = *(void**)((char*)self + 0x238);
    *(char*)((char*)self + 0x250) = 0;
    *(int*)((char*)self + 0x240) = *(int*)((char*)src + 0x1f8);
    *(int*)((char*)self + 0x244) = *(int*)((char*)src + 0x210);
    *(int*)((char*)self + 0x248) = *(int*)((char*)src + 0x214);
    *(int*)((char*)self + 0x24c) = *(int*)((char*)src + 0x218);
    return (*(vfn_c0*)((char*)*(void**)self + 0xc0))(self, 0x800, 0);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_SupplyObject_reset (0x55d2e0)
