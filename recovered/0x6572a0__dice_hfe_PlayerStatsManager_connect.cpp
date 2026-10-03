// FUNCTION: BF2 0x6572a0
// PlayerStatsManager connect 0x6572a0 — ghttpStartup + store + return 1
extern "C" void ghttpStartup();
long conn_6572a0(char* self) {
    ghttpStartup();
    *(char*)(self + 0xc) = 1;
    return 1;
}
// REVERSED_FUNCTION: dice_hfe_PlayerStatsManager_connect (0x6572a0)
