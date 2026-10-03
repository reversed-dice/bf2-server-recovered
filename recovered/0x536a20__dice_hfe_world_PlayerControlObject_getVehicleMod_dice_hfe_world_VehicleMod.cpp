// FUNCTION: BF2 0x536a20

extern "C" unsigned int
f_536a20
          (long param_1,unsigned int param_2)
{
  switch(param_2) {
  default:
    return 0;
  case 1:
    return *(unsigned int *)(param_1 + 0x41c);
  case 2:
    return *(unsigned int *)(param_1 + 0x420);
  case 3:
    return *(unsigned int *)(param_1 + 0x424);
  case 4:
    return *(unsigned int *)(param_1 + 0x428);
  case 5:
    return *(unsigned int *)(param_1 + 0x42c);
  case 6:
    return *(unsigned int *)(param_1 + 0x430);
  case 7:
    return *(unsigned int *)(param_1 + 0x434);
  case 8:
    return *(unsigned int *)(param_1 + 0x438);
  }
}
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_getVehicleMod_dice_hfe_world_VehicleMod (0x536a20)
