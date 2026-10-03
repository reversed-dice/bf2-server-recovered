// FUNCTION: BF2 0x543140
typedef long long code();

extern "C" int f_543140
              (long *param_1,long param_2)
{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)(**(code **)(*param_1 + 0xd8))();
  plVar3 = (long *)*plVar2;
  if (plVar3 != (long *)plVar2[1]) {
    iVar1 = 0;
    if (param_2 == *plVar3) {
      return 0;
    }
    while( true ) {
      plVar3 = plVar3 + 1;
      iVar1 = iVar1 + 1;
      if ((long *)plVar2[1] == plVar3) break;
      if (*plVar3 == param_2) {
        return iVar1;
      }
    }
  }
  return -1;
}
// REVERSED_FUNCTION: dice_hfe_world_getWeaponIndex_dice_hfe_world_IPlayerControlObjectptr_dice_hfe_world_IObjectptr (0x543140)
