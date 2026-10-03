// FUNCTION: BF2 0x50e3c0
namespace dice { namespace hfe { namespace world {
struct Vec3 { float x, y, z; };
extern void fn_50e2f0(void* self, void* v, int third);
void cb_50e3c0(void* self) {
    Vec3 z = {0, 0, 0};
    fn_50e2f0(self, &z, 0);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ArtilleryHandler_failedFire (0x50e3c0)
