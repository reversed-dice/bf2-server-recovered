// FUNCTION: BF2 0x6b47a0
namespace dice { namespace anim {
void fn_0x6b47a0(void* self, float len) {
    float inv = *(float*)0xb2f3bc / len;
    *(float*)((char*)self+8) = len;
    *(float*)((char*)self+0xc) = inv;
}
} }
// REVERSED_FUNCTION: dice_anim_BoneAnimation_setLength_float (0x6b47a0)
