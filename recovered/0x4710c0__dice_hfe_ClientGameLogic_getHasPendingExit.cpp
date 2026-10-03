// FUNCTION: BF2 0x4710c0
extern "C" long long dice_hfe_WorldPref_getTickCount();
extern "C" bool f_4710c0(long param_1)
{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = *(int *)(param_1 + 0x4c0);
  uVar2 = dice_hfe_WorldPref_getTickCount();
  return uVar2 < iVar1 + 0x3cU;
}
// REVERSED_FUNCTION: dice_hfe_ClientGameLogic_getHasPendingExit (0x4710c0)
