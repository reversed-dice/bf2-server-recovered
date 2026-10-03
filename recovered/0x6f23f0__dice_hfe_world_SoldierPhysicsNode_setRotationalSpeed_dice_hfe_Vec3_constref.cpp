// FUNCTION: BF2 0x6f23f0
#include <cmath>
extern "C" float DAT_00b84754;
extern "C" void setRotationalSpeed_6f23f0(char* param_1, int* param_2) {
    *(int*)(param_1 + 0xa4) = param_2[1];
    if (fabsf(*(float*)(param_1 + 0xa0)) < DAT_00b84754) *(unsigned int*)(param_1 + 0xa0) = 0;
    if (fabsf(*(float*)(param_1 + 0xa4)) < DAT_00b84754) *(unsigned int*)(param_1 + 0xa4) = 0;
    if (fabsf(*(float*)(param_1 + 0xa8)) < DAT_00b84754) *(unsigned int*)(param_1 + 0xa8) = 0;
}
// REVERSED_FUNCTION: dice_hfe_world_SoldierPhysicsNode_setRotationalSpeed_dice_hfe_Vec3_constref (0x6f23f0)
