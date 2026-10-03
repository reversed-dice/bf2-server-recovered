// FUNCTION: BF2 0x5077a0

extern "C" void f_5077a0(long param_1,unsigned char param_2)
{
  *(unsigned char *)(param_1 + 0xe8) = *(unsigned char *)(param_1 + 0xe8) & 0xfd | (param_2 & 1) * '\x02';
  return;
}
// REVERSED_FUNCTION: dice_hfe_world_SimpleObjectTemplate_setHasMobilePhysics_bool (0x5077a0)
