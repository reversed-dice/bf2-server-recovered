// FUNCTION: BF2 0x6cd6d0
extern "C" long long dice_anim_Trigger_update_dice_anim_AnimationSystemref();
extern "C" unsigned char f_6cd6d0(long param_1,long param_2)
{
  unsigned char uVar1;
  
  if ((*(unsigned int *)(param_1 + 0x44) == 0) ||
     (uVar1 = 1, (*(unsigned int *)(param_2 + 0xc) & *(unsigned int *)(param_1 + 0x44)) != 0)) {
    uVar1 = dice_anim_Trigger_update_dice_anim_AnimationSystemref();
  }
  return uVar1;
}
// REVERSED_FUNCTION: dice_anim_MessageTrigger_update_dice_anim_AnimationSystemref (0x6cd6d0)
