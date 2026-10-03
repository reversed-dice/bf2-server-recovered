// FUNCTION: BF2 0x7194e0

extern "C" unsigned long long
f_7194e0(long param_1,int param_2,int param_3)
{
  unsigned long uVar1;
  long *plVar2;
  
  plVar2 = (long *)((long)param_2 * 0x30 + *(long *)(param_1 + 8));
  uVar1 = (unsigned long)*(unsigned int *)((long)plVar2 + (long)param_3 * 4 + 0x18);
  if ((uVar1 < (unsigned long)(plVar2[1] - *plVar2 >> 3)) && (*(long *)(*plVar2 + uVar1 * 8) != 0)) {
    return 1;
  }
  return 0;
}
// REVERSED_FUNCTION: dice_hfe_world_CollisionMeshTemplate_isLodValid_int_int_const (0x7194e0)
