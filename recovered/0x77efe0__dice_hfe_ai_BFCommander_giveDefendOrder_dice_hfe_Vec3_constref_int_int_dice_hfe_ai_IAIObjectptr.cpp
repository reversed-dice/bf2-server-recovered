// FUNCTION: BF2 0x77efe0
extern "C" void real_giveOrder(void* self, void* vec3, int a, int b, void* obj, int type);

namespace dice { namespace hfe { namespace ai {
void fn_0x77efe0(void* self, void* vec3, int a, int b, void* obj) {
    real_giveOrder(self, vec3, a, b, obj, 6);
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_BFCommander_giveDefendOrder_dice_hfe_Vec3_constref_int_int_dice_hfe_ai_IAIObjectptr (0x77efe0)
