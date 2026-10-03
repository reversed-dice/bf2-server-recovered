// FUNCTION: BF2 0x6f9280
namespace dice { namespace hfe { namespace world {
void set_0x6f9280(void* p, unsigned int a1, unsigned int a2) {
    *(unsigned int*)((char*)p + 0x20) = a1;
    *(unsigned int*)((char*)p + 0x24) = a2;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_Heightmap_setPos_int_int (0x6f9280)
