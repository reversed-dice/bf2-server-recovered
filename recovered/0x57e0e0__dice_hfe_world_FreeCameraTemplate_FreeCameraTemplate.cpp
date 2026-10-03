// FUNCTION: BF2 0x57e0e0
// FreeCameraTemplate ctor (second variant)
extern "C" void dice_hfe_world_BundleTemplate_BundleTemplate(long);
extern "C" void dice_hfe_world_ObjectTemplate_updateFlags_unsigned_int_unsigned_int(long, int, int);

extern "C" void dice_hfe_world_FreeCameraTemplate_FreeCameraTemplate(long self)
{
    dice_hfe_world_BundleTemplate_BundleTemplate(self);
    *(long*)self = 0xb59ff0;
    *(long*)(self + 0x10) = 0xb5a280;
    *(long*)(self + 0x68) = 0xb5a2b8;
    *(long*)(self + 0x1c8) = 0xb5a338;
    *(int*)(self + 0x1f4) = 1;
    *(float*)(self + 0x1f8) = 1.2f;
    *(float*)(self + 0x1fc) = 1.2f;
    dice_hfe_world_ObjectTemplate_updateFlags_unsigned_int_unsigned_int(self, 0x42, 0);
}