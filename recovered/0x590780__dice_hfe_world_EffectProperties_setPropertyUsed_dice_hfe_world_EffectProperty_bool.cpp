// FUNCTION: BF2 0x590780

extern "C" void f_590780
               (long param_1,int param_2,unsigned char param_3)
{
  *(unsigned char *)((long)param_2 + 0x158 + param_1) = param_3;
  return;
}
// REVERSED_FUNCTION: dice_hfe_world_EffectProperties_setPropertyUsed_dice_hfe_world_EffectProperty_bool (0x590780)
