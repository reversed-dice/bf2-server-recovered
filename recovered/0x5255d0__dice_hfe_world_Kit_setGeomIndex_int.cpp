// FUNCTION: BF2 0x5255d0
// BF2_FLAGS: -fno-gcse
extern "C" {
    extern void dice_hfe_world_Kit_updateGeometry_bool(long, int);
}

void dice_hfe_world_Kit_setGeomIndex_int(long p, int idx) {
    int old = *(int*)(p + 0x2c8);
    if (idx == -1) {
        *(int*)(p + 0x2c8) = *(int*)(p + 0x2cc);
    } else {
        *(int*)(p + 0x2c8) = idx;
    }
    if (old != *(int*)(p + 0x2c8)) {
        dice_hfe_world_Kit_updateGeometry_bool(p, *(long*)(p + 0x50) != 0);
    }
}
