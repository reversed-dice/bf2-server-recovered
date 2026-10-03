// FUNCTION: BF2 0x4cd960
namespace dice { namespace hfe {
class ClientVoteManager {
public:
    char _pad[0x4f];
    bool teamVoteOnly;
};
extern ClientVoteManager* g_clientVoteManager;
bool getTeamVoteOnly() {
    ClientVoteManager* mgr = g_clientVoteManager;
    if (mgr == 0) return true;
    return mgr->teamVoteOnly;
}
}
}

// REVERSED_FUNCTION: dice_hfe_ClientVoteManager_getTeamVoteOnly_const (0x4cd960)
