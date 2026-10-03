// FUNCTION: BF2 0x68c750

extern "C" unsigned int
f_68c750(long param_1,long param_2)
{
  unsigned int uVar1;
  
  if (*(unsigned int *)(param_1 + 8) == (*(unsigned int *)(param_2 + 8) & *(unsigned int *)(param_1 + 8))) {
    uVar1 = 1;
    if (*(unsigned int *)(param_1 + 0xc) != (~*(unsigned int *)(param_2 + 8) & *(unsigned int *)(param_1 + 0xc))) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
// REVERSED_FUNCTION: dice_hfe_world_ObjectFlagPredicatorEx_predicate_dice_hfe_world_IObjectptr (0x68c750)
