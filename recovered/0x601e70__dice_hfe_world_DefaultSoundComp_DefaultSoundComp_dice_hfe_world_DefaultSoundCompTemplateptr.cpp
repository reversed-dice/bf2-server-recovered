// FUNCTION: BF2 0x601e70

extern "C" void f_601e70
               (unsigned long long *param_1,unsigned long long param_2)
{
  int iVar1;
  
  *(unsigned int *)(param_1 + 1) = 1;
  *param_1 = 0xb75fb0;
  iVar1 = 0xb;
  param_1[4] = 0xb76118;
  *(unsigned int *)(param_1 + 5) = 1;
  param_1[6] = param_2;
  param_1[7] = 0;
  param_1[0x13] = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned char *)((long)param_1 + 0xa4) = 0;
  *(unsigned char *)((long)param_1 + 0xa5) = 1;
  *(unsigned char *)((long)param_1 + 0xa6) = 0;
  *(unsigned char *)((long)param_1 + 0xa7) = 0;
  *(unsigned char *)(param_1 + 0x15) = 0;
  *(unsigned char *)((long)param_1 + 0xa9) = 0;
  *(unsigned int *)((long)param_1 + 0xac) = 0;
  do {
    param_1[8] = 0;
    param_1 = param_1 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}
// REVERSED_FUNCTION: dice_hfe_world_DefaultSoundComp_DefaultSoundComp_dice_hfe_world_DefaultSoundCompTemplateptr (0x601e70)
