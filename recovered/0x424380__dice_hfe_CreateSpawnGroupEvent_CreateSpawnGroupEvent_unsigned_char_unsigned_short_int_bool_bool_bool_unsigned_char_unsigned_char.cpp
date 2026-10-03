// FUNCTION: BF2 0x424380
extern "C" long long dice_hfe_GameEvent_GameEvent();
extern "C" void f_424380
               (unsigned long long *param_1,unsigned char param_2,unsigned short param_3,unsigned int param_4,
               unsigned char param_5,unsigned char param_6,unsigned char param_7,unsigned char param_8,
               unsigned char param_9)
{
  dice_hfe_GameEvent_GameEvent();
  *(unsigned int *)((long)param_1 + 0x14) = param_4;
  *(unsigned char *)(param_1 + 3) = param_5;
  *(unsigned char *)((long)param_1 + 0x19) = param_6;
  *(unsigned char *)((long)param_1 + 0x1a) = param_7;
  *(unsigned char *)((long)param_1 + 0x1b) = param_8;
  *param_1 = 0xb2c150;
  *(unsigned char *)(param_1 + 2) = param_2;
  *(unsigned char *)((long)param_1 + 0x1c) = param_9;
  *(unsigned short *)((long)param_1 + 0x1e) = param_3;
  return;
}
// REVERSED_FUNCTION: dice_hfe_CreateSpawnGroupEvent_CreateSpawnGroupEvent_unsigned_char_unsigned_short_int_bool_bool_bool_unsigned_char_unsigned_char (0x424380)
