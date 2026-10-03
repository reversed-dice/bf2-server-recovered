// FUNCTION: BF2 0x6238d0
namespace dice { namespace hfe { namespace world {

void fn_0x6238d0(void* self) {
    float one = 1.0f;
    *(long*)self = 0xb7ecd0;
    *(long*)((char*)self + 0x8) = 0xb7ed40;
    *(float*)((char*)self + 0x14) = one;
    *(float*)((char*)self + 0x18) = one;
    float pointone = 0.1f;
    *(int*)((char*)self + 0x10) = 1;
    *(float*)((char*)self + 0x1c) = pointone;
    *(float*)((char*)self + 0x20) = pointone;
    *(unsigned*)((char*)self + 0x24) = 0x42480000;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultFollowCompTemplate_DefaultFollowCompTemplate (0x6238d0)
