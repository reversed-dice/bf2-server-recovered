// FUNCTION: BF2 0x5326c0
namespace dice { namespace hfe { namespace world {
void set_0x5326c0(void* p, unsigned int v) {
    *(unsigned int*)((char*)p + 0x2c0) = v;
    *(unsigned int*)((char*)p + 0x2bc) = v;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectSpawner_setTeamOnStart_unsigned_int (0x5326c0)
