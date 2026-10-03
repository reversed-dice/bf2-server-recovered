// FUNCTION: BF2 0x71c800

extern "C" unsigned long long
f_71c800(long param_1,int param_2,int param_3)
{
  long *plVar1;
  
  plVar1 = (long *)((long)param_2 * 0x30 + *(long *)(param_1 + 8));
  return *(unsigned long long *)(*plVar1 + (long)*(int *)((long)plVar1 + (long)param_3 * 4 + 0x18) * 8);
}
// REVERSED_FUNCTION: dice_hfe_world_CollisionMeshTemplate_getValidLod_int_int (0x71c800)
