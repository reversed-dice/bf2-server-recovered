// FUNCTION: BF2 0x707640
extern "C" void real_0x7071e0(void* self, int a, int b, unsigned short c, int d);

namespace dice { namespace hfe { namespace world {
void fn_0x707640(void* self, int a, int b, unsigned short c) {
    real_0x7071e0(self, a, b, c, 3);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_HeightmapEditable_setHeightRaw_int_int_unsigned_short (0x707640)
