// FUNCTION: BF2 0x6c0a80
extern "C" void dice_anim_RagDoll_addForce_int_dice_hfe_Vec3_constref(void*);
extern "C" void f_6c0a80(char* self) {
    char* p = *(char**)(self + 0x110);
    if (p != 0) dice_anim_RagDoll_addForce_int_dice_hfe_Vec3_constref(p);
}
// REVERSED_FUNCTION: dice_anim_RagDollTemplate_addForce_int_dice_hfe_Vec3_constref (0x6c0a80)
