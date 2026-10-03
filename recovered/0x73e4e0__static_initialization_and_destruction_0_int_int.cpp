// FUNCTION: BF2 0x73e4e0
// static_initialization_and_destruction_0(int, int) - allocates LoadStat
extern "C" {
    void* _Znwm(long size);
    void dice_hfe_LoadStat_LoadStat(void* obj);
    extern long dice_hfe_loadStat;
}

void static_initialization_and_destruction_0(int param_1, int param_2) {
    if (param_1-- == 1 && param_2 == 0xffff) {
        void* obj = _Znwm(0x58);
        dice_hfe_LoadStat_LoadStat(obj);
        dice_hfe_loadStat = (long)obj;
    }
}
