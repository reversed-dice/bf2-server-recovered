// FUNCTION: BF2 0x4ceb40
namespace dice { namespace hfe {
class ServerVoteManager {
public:
    char _pad[0x48];
    bool teamVoteOnly;
};
extern ServerVoteManager* g_serverVoteManager;
bool getTeamVoteOnly() {
    ServerVoteManager* mgr = g_serverVoteManager;
    if (mgr == 0) return true;
    return mgr->teamVoteOnly;
}
}
}

// REVERSED_FUNCTION: dice_hfe_ServerVoteManager_getTeamVoteOnly_const (0x4ceb40)
