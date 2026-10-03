// FUNCTION: BF2 0x7d4c70
extern "C" long long dice_hfe_io_NetServer_updateConnections_intptr();
extern "C" long long dice_hfe_io_NetServer_update_intptr(long long, long long);
extern "C" unsigned long long f_7d4c70(long param_1,unsigned long long param_2)
{
  unsigned long long uVar1;
  
  if (*(char *)(param_1 + 0x4f8) == '\0') {
    return 8;
  }
  dice_hfe_io_NetServer_updateConnections_intptr();
  uVar1 = dice_hfe_io_NetServer_update_intptr((long long)(param_1),(long long)(param_2));
  return uVar1;
}
// REVERSED_FUNCTION: dice_hfe_io_NetServer_update_intptr (0x7d4c70)
