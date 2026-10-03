// FUNCTION: BF2 0x634590
namespace dice { namespace hfe { namespace world {

void fn_0x634590(void* self, float val) {
    *(unsigned char*)((char*)self+0x628) = (val != 0.0f);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_EngineTemplate_setAccumulate_float (0x634590)
