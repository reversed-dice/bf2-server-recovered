// FUNCTION: BF2 0x6f0ef0
namespace dice { namespace hfe { namespace world {

float fn_0x6f0ef0(void* self, float val) {
    float t = val;
    val = val * (*(float*)0xb355c4);
    val = val + (*(float*)0xb2f3bc);
    return val - t;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierPhysicsNode_getDragMod_float (0x6f0ef0)
