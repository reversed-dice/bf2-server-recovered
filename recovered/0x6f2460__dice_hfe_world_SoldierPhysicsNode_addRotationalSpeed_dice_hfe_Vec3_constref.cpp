// FUNCTION: BF2 0x6f2460
#include <cmath>
extern "C" float DAT_00b84754;
extern "C" void addRotationalSpeed_6f2460(char* param_1, float* param_2) {
    float thresh = DAT_00b84754;
    float f4 = *(float*)(param_1 + 0xa4) + param_2[1];
    float f3 = fabsf(*(float*)(param_1 + 0xa0));
    *(float*)(param_1 + 0xa4) = f4;
    if (f3 < thresh) *(unsigned int*)(param_1 + 0xa0) = 0;
    if (fabsf(f4) < thresh) *(unsigned int*)(param_1 + 0xa4) = 0;
    if (fabsf(*(float*)(param_1 + 0xa8)) < thresh) *(unsigned int*)(param_1 + 0xa8) = 0;
}
// REVERSED_FUNCTION: dice_hfe_world_SoldierPhysicsNode_addRotationalSpeed_dice_hfe_Vec3_constref (0x6f2460)
