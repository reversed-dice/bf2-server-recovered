// FUNCTION: BF2 0x5f33f0
namespace dice { namespace hfe { namespace world {
int cb_5f33f0(void* self, int a) {
    if (a == 1)
        return 0;
    if (a == 0) {
        if (*(int*)((char*)self + 0x170) == 2)
            return 0;
        return 1;
    }
    if (*(int*)((char*)self + 0x170) == 1)
        return 1;
    return 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ExplosivesFireComp_launchesProjectiles_int (0x5f33f0)
