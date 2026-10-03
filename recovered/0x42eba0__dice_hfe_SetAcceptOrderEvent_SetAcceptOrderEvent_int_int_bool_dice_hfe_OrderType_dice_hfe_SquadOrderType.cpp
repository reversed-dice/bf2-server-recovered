// FUNCTION: BF2 0x42eba0
extern "C" long long dice_hfe_GameEvent_GameEvent();
extern "C" void f_42eba0
               (unsigned long long *param_1,unsigned char param_2,unsigned char param_3,unsigned char param_4,
               unsigned char param_5,unsigned char param_6)
{
  dice_hfe_GameEvent_GameEvent();
  *(unsigned char *)((long)param_1 + 0x11) = param_3;
  *(unsigned char *)(param_1 + 2) = param_2;
  *(unsigned char *)((long)param_1 + 0x12) = param_4;
  *(unsigned char *)((long)param_1 + 0x13) = param_5;
  *(unsigned char *)((long)param_1 + 0x14) = param_6;
  *param_1 = 0xb2ddd0;
  return;
}
// REVERSED_FUNCTION: dice_hfe_SetAcceptOrderEvent_SetAcceptOrderEvent_int_int_bool_dice_hfe_OrderType_dice_hfe_SquadOrderType (0x42eba0)
