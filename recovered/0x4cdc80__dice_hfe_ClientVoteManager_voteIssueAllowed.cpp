// FUNCTION: BF2 0x4cdc80
extern "C" long long dice_hfe_ClientVoteManager_participatesInVoting();
extern "C" unsigned long long f_4cdc80(char *param_1)
{
  char cVar1;
  
  cVar1 = dice_hfe_ClientVoteManager_participatesInVoting();
  if (((cVar1 != '\0') && (*param_1 != '\0')) && (*(int *)(param_1 + 4) == 0)) {
    return 1;
  }
  return 0;
}
// REVERSED_FUNCTION: dice_hfe_ClientVoteManager_voteIssueAllowed (0x4cdc80)
