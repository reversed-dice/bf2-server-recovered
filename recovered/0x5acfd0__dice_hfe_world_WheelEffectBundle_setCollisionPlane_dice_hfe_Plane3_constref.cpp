// FUNCTION: BF2 0x5acfd0
extern "C" void dice_hfe_world_EffectBundle_setCollisionPlane_dice_hfe_Plane3_constref(void*);
extern "C" void f_5acfd0(char* self) {
    char* p = *(char**)(self + 0x2c0);
    if (p != 0) dice_hfe_world_EffectBundle_setCollisionPlane_dice_hfe_Plane3_constref(p);
}
// REVERSED_FUNCTION: dice_hfe_world_WheelEffectBundle_setCollisionPlane_dice_hfe_Plane3_constref (0x5acfd0)
