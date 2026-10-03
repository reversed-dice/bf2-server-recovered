// FUNCTION: BF2 0x599a30

extern "C" void f_599a30(long param_1)
{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0x3e0);
  *(unsigned int *)(param_1 + 0x54c) = 0;
  iVar1 = 0;
  do {
    if (*(long *)(*plVar2 + -0x18) != 0) {
      *(int *)(param_1 + 0x54c) = *(int *)(param_1 + 0x54c) + 1;
    }
    iVar1 = iVar1 + 1;
    plVar2 = plVar2 + 1;
  } while (iVar1 != 5);
  return;
}
// REVERSED_FUNCTION: dice_hfe_world_EmitterTemplate_updateNumAlternateTemplates (0x599a30)
