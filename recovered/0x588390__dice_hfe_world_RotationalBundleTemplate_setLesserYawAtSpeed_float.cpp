// FUNCTION: BF2 0x588390
namespace dice { namespace hfe { namespace world {

void fn_0x588390(void* self, float val) {
    if (val > 0.0f) {
        *(float*)((char*)self+0x268) = val;
        *(unsigned char*)((char*)self+0x267) = 1;
    }
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_RotationalBundleTemplate_setLesserYawAtSpeed_float (0x588390)
