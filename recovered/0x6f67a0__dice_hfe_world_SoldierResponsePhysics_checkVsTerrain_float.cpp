// FUNCTION: BF2 0x6f67a0
extern "C" void real_checkVsTerrain(void* self, float a, float b);

namespace dice { namespace hfe { namespace world {
void fn_0x6f67a0(void* self, float a) {
    real_checkVsTerrain(self, a, *(float*)0xb2f3bc);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierResponsePhysics_checkVsTerrain_float (0x6f67a0)
