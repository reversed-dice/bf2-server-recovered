// FUNCTION: BF2 0x6572c0
// PlayerStatsManager disconnect 0x6572c0 — guard + ghttpCleanup + 2 stores
extern "C" void ghttpCleanup();
void disc_6572c0(char* self) {
    if (*(char*)(self + 0xc)) {
        ghttpCleanup();
        *(char*)(self + 0xc) = 0;
    }
    *(char*)(self + 0xd) = 0;
}
// REVERSED_FUNCTION: dice_hfe_PlayerStatsManager_disconnect (0x6572c0)
