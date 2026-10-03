// FUNCTION: BF2 0x718b20
namespace dice { namespace hfe { namespace world {
void cb_718b20(void* self, unsigned short a, unsigned short b) {
    *(unsigned short*)((char*)self + 0x60) = a;
    *(unsigned short*)((char*)self + 0x62) = b;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_CollisionMeshTemplate_setLodNameOverrides_unsigned_short_unsigned_short (0x718b20)
