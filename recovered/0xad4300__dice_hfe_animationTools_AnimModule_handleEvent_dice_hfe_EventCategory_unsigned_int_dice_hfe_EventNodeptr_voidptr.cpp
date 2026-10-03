// FUNCTION: BF2 0xad4300
extern "C" long long dice_anim_RagDollTemplate_init();
extern "C" long long dice_anim_RagDollTemplate_shutdown();
extern "C" void f_ad4300
               (unsigned long long param_1,int param_2,int param_3)
{
  if (param_2 != 5 || param_3 != 0xd) {
    return;
  }
  dice_anim_RagDollTemplate_shutdown();
  dice_anim_RagDollTemplate_init();
  return;
}
// REVERSED_FUNCTION: dice_hfe_animationTools_AnimModule_handleEvent_dice_hfe_EventCategory_unsigned_int_dice_hfe_EventNodeptr_voidptr (0xad4300)
