// FUNCTION: BF2 0x76bba0
extern "C" {
extern void dice_hfe_lineIntersect_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref_dice_hfe_Vec3ref(
    void*, void*, void*, void*, void*);
extern char dice_hfe_linePointOnSegment_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref(
    void*, void*, void*);
}

unsigned char dice_hfe_lineSegmentIntersect_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref_dice_hfe_Vec3ref(
    void* param_1, void* param_2, void* param_3, void* param_4, void* param_5) {
    dice_hfe_lineIntersect_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref_dice_hfe_Vec3ref(
        param_1, param_2, param_3, param_4, param_5);
    char cVar1 = dice_hfe_linePointOnSegment_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref(
        param_5, param_1, param_2);
    if (cVar1 != '\0') {
        cVar1 = dice_hfe_linePointOnSegment_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref(
            param_5, param_3, param_4);
        if (cVar1 != '\0') {
            return 1;
        }
    }
    return 0;
}
