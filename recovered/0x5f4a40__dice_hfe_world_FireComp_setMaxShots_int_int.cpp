// FUNCTION: BF2 0x5f4a40
namespace dice { namespace hfe { namespace world {
void set_0x5f4a40(void* p, unsigned int a1, unsigned int a2) {
    *(unsigned int*)((char*)p + 0x50) = a1;
    *(unsigned int*)((char*)p + 0x54) = a2;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_FireComp_setMaxShots_int_int (0x5f4a40)
