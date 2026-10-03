// FUNCTION: BF2 0x5741c0
typedef long long code();
extern "C" long long dice_hfe_world_SimpleObject_enableCachedObject(long long);
extern "C" long long dice_hfe_world_setChildPartGeometries_dice_hfe_world_IObjectptr_dice_hfe_geom_IGeometryptr(long long, long long);
extern "C" void f_5741c0(long *param_1)
{
  long lVar1;
  unsigned long long uVar2;
  
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x1e0))();
    dice_hfe_world_setChildPartGeometries_dice_hfe_world_IObjectptr_dice_hfe_geom_IGeometryptr
              ((long long)(uVar2),(long long)(lVar1));
  }
  dice_hfe_world_SimpleObject_enableCachedObject((long long)(param_1));
  return;
}
// REVERSED_FUNCTION: dice_hfe_world_Bundle_enableCachedObject (0x5741c0)
