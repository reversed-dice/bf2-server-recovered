// FUNCTION: BF2 0x764360
extern "C" unsigned int DAT_00b38948;
extern "C" unsigned int DAT_00b5b8f8;
extern "C" unsigned int *
f_764360(unsigned int *param_1,unsigned long long param_2,char param_3)
{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)&DAT_00b38948;
  if (param_3 != '\0') {
    puVar2 = &DAT_00b5b8f8;
  }
  uVar1 = *puVar2;
  param_1[1] = 0;
  param_1[2] = 0x3ecccccd;
  *param_1 = uVar1;
  return param_1;
}
// REVERSED_FUNCTION: dice_hfe_SoldierSound_getSwimStrokePos_bool (0x764360)
