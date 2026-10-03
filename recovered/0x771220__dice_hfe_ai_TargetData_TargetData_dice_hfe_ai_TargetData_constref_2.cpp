// FUNCTION: BF2 0x771220
namespace dice { namespace hfe { namespace ai {

void fn_0x771220(void* self, void* other) {
    *(int*)self = *(int*)other;
    *(long*)((char*)self+8) = *(long*)((char*)other+8);
    *(long*)((char*)self+0x10) = *(long*)((char*)other+0x10);
}

} } }
// REVERSED_FUNCTION: dice_hfe_ai_TargetData_TargetData_dice_hfe_ai_TargetData_constref (0x771220)
