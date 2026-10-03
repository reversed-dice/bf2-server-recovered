// FUNCTION: BF2 0x43b150

extern "C" void f_43b150
               (unsigned int *param_1,unsigned int *param_2)
{
  *(short *)(param_1 + 1) = (short)param_2[1];
  *(unsigned short *)((long)param_1 + 6) = *(unsigned short *)((long)param_2 + 6);
  *(short *)(param_1 + 2) = (short)param_2[2];
  *(unsigned short *)((long)param_1 + 10) = *(unsigned short *)((long)param_2 + 10);
  *(short *)(param_1 + 3) = (short)param_2[3];
  *(unsigned short *)((long)param_1 + 0xe) = *(unsigned short *)((long)param_2 + 0xe);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *param_1 = *param_2;
  *(unsigned char *)(param_1 + 6) = *(unsigned char *)(param_2 + 6);
  return;
}
// REVERSED_FUNCTION: dice_hfe_PlayerAction_PlayerAction_dice_hfe_PlayerAction_constref (0x43b150)
