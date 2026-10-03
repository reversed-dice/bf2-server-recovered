// FUNCTION: BF2 0x4944e0
namespace dice { namespace hfe {
extern int fn_74aaa0();
extern float g_00b2efc4;
float cb_4944e0(void* self) {
    float v = (float)(*(int*)((char*)self + 0x104) - fn_74aaa0()) / g_00b2efc4;
    return 0.0f > v ? 0.0f : v;
}
} }
// REVERSED_FUNCTION: dice_hfe_Player_getTimeToSpawn_const (0x4944e0)
