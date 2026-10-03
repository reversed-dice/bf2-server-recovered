// FUNCTION: BF2 0x73e850

extern "C" unsigned long long f_73e850(unsigned char *param_1,unsigned char *param_2)
{
  int iVar1;
  
  iVar1 = 0x10;
  do {
    if (*param_1 < *param_2) {
      return 1;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}
// REVERSED_FUNCTION: dice_hfe_MD5String_operator_dice_hfe_MD5String_constref (0x73e850)
