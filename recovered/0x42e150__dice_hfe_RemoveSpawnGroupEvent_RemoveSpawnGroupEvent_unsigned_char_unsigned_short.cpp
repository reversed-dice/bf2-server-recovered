// FUNCTION: BF2 0x42e150
extern "C" long long dice_hfe_GameEvent_GameEvent();
extern "C" void f_42e150
               (unsigned long long *param_1,unsigned char param_2,unsigned short param_3)
{
  dice_hfe_GameEvent_GameEvent();
  *(unsigned char *)(param_1 + 2) = param_2;
  *(unsigned short *)((long)param_1 + 0x12) = param_3;
  *param_1 = 0xb2dc30;
  return;
}
// REVERSED_FUNCTION: dice_hfe_RemoveSpawnGroupEvent_RemoveSpawnGroupEvent_unsigned_char_unsigned_short (0x42e150)
