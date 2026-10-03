// 0x5fa950 - MultiFireComp_dummyLaunchProjectile_int (attempt 2)
// Match target: load [0x188] first, then [0x180]
void dice_hfe_world_MultiFireComp_dummyLaunchProjectile_int(long param_1, int param_2) {
    if (*(char*)(*(long*)(param_1 + 0x1f0) + 0x90) != '\0') {
        long end = *(long*)(param_1 + 0x188);
        long begin = *(long*)(param_1 + 0x180);
        long count = (end - begin) >> 3;
        if (count != 0 && param_2 < (int)count) {
            long* elem;
            if (param_2 == -1) {
                elem = *(long**)begin;
            } else {
                elem = *(long**)(begin + (long)param_2 * 8);
            }
            typedef void (*VtblCall)(void*, int, int);
            ((VtblCall)(*(void***)elem)[0xc0/8])((void*)elem, 0, 2);
        }
    }
}
