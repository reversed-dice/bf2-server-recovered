// FUNCTION: BF2 0xb07df0
extern "C" long long dice_hfe_ai_getActiveWeaponTemplate();
extern "C" unsigned long long f_b07df0(long param_1)
{
  int iVar1;
  unsigned int uVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x30) != 2) {
    return 0;
  }
  iVar1 = **(int **)(param_1 + 0x38);
  uVar2 = **(unsigned int **)(param_1 + 0x40);
  *(unsigned char *)(param_1 + 0x108) = 0;
  lVar3 = dice_hfe_ai_getActiveWeaponTemplate();
  *(unsigned int *)(*(long *)(lVar3 + 0x40) + (long)iVar1 * 4) = uVar2;
  return 0;
}
// REVERSED_FUNCTION: dice_hfe_ai_anonymous_namespace_ConsoleClass239_executeObjectMethod (0xb07df0)
