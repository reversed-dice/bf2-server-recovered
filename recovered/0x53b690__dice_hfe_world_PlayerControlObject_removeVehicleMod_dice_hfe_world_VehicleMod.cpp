// FUNCTION: BF2 0x53b690

extern "C" void f_53b690
               (long param_1,unsigned int param_2)
{
  switch(param_2) {
  case 1:
    *(int *)(param_1 + 0x41c) = *(int *)(param_1 + 0x41c) + -1;
    return;
  case 2:
    *(int *)(param_1 + 0x420) = *(int *)(param_1 + 0x420) + -1;
    return;
  case 3:
    *(int *)(param_1 + 0x424) = *(int *)(param_1 + 0x424) + -1;
    return;
  case 4:
    *(int *)(param_1 + 0x428) = *(int *)(param_1 + 0x428) + -1;
    return;
  case 5:
    *(int *)(param_1 + 0x42c) = *(int *)(param_1 + 0x42c) + -1;
    return;
  case 6:
    *(int *)(param_1 + 0x430) = *(int *)(param_1 + 0x430) + -1;
    return;
  case 7:
    *(int *)(param_1 + 0x434) = *(int *)(param_1 + 0x434) + -1;
    return;
  case 8:
    *(int *)(param_1 + 0x438) = *(int *)(param_1 + 0x438) + -1;
  }
  return;
}
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_removeVehicleMod_dice_hfe_world_VehicleMod (0x53b690)
