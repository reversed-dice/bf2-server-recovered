// FUNCTION: BF2 0x5077d0

extern "C" unsigned char f_5077d0(long param_1)
{
  return *(unsigned char *)(param_1 + 0xe8) >> 1 & 1;
}
// REVERSED_FUNCTION: dice_hfe_world_SimpleObjectTemplate_getHasMobilePhysics_const (0x5077d0)
