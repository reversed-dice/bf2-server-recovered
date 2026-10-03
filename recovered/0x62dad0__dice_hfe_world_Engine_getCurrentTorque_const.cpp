// FUNCTION: BF2 0x62dad0
extern "C" void real_0x631080(void* engine, float f);

namespace dice { namespace hfe { namespace world {
void fn_0x62dad0(void* self) {
    real_0x631080(*(void**)((char*)self+0x2c0), *(float*)((char*)self+0x2d8));
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_Engine_getCurrentTorque_const (0x62dad0)
