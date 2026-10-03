// FUNCTION: BF2 0x4ceb00
extern "C" {
extern long dice_hfe_serverSettings;
extern float DAT_00b38bb0;
}

extern "C" float getVotingTime_4ceb00(void) {
    if (dice_hfe_serverSettings != 0) {
        return (float)*(int*)(dice_hfe_serverSettings + 0x40);
    }
    return DAT_00b38bb0;
}
// REVERSED_FUNCTION: dice_hfe_ServerVoteManager_getVotingTime_const (0x4ceb00)
