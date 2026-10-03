// FUNCTION: BF2 0x4752e0
extern "C" long long dice_hfe_world_CommanderToolsManager_handleDropVehicleEvent_dice_hfe_Vec3_constref_int(long long, long long, long long);
extern "C" long long dice_hfe_world_CommanderToolsManager_handleSatelliteEvent_int(long long, long long);
extern "C" long long dice_hfe_world_CommanderToolsManager_handleUAVEvent_dice_hfe_Vec3_constref_int(long long, long long, long long);
extern "C" void f_4752e0
               (unsigned long long param_1,int param_2,int param_3,unsigned long long param_4,long param_5)
{
  if (param_2 == 0) {
    if (param_3 == 0x12) {
      dice_hfe_world_CommanderToolsManager_handleSatelliteEvent_int
                ((long long)(param_1),(long long)(*(unsigned int *)(param_5 + 0xc)));
      return;
    }
    if (param_3 == 0x15) {
      dice_hfe_world_CommanderToolsManager_handleDropVehicleEvent_dice_hfe_Vec3_constref_int
                ((long long)(param_1),(long long)(param_5),(long long)(*(unsigned int *)(param_5 + 0xc)));
      return;
    }
    if (param_3 == 0x11) {
      dice_hfe_world_CommanderToolsManager_handleUAVEvent_dice_hfe_Vec3_constref_int
                ((long long)(param_1),(long long)(param_5),(long long)(*(unsigned int *)(param_5 + 0xc)));
      return;
    }
  }
  return;
}
// REVERSED_FUNCTION: dice_hfe_world_CommanderToolsManager_handleEvent_dice_hfe_EventCategory_unsigned_int_dice_hfe_EventNodeptr_voidptr (0x4752e0)
