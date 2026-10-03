// FUNCTION: BF2 0x72c260

extern "C" bool f_72c260
               (float param_1,long param_2,long param_3,long param_4)
{
  float fVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = 0.0;
  iVar3 = 0;
  lVar2 = 0;
  do {
    fVar1 = *(float *)(lVar2 + param_2);
    fVar4 = *(float *)(lVar2 + param_3);
    if ((fVar1 < fVar4) || (fVar4 = *(float *)(lVar2 + param_4), fVar4 < fVar1)) {
      fVar5 = fVar5 + (fVar1 - fVar4) * (fVar1 - fVar4);
    }
    iVar3 = iVar3 + 1;
    lVar2 = lVar2 + 4;
  } while (iVar3 != 3);
  return fVar5 <= param_1 * param_1;
}
// REVERSED_FUNCTION: dice_hfe_sphereIntersectsAABB_dice_hfe_Vec3_constref_float_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref (0x72c260)
