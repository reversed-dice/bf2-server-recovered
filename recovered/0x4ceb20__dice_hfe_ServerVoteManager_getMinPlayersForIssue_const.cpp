// FUNCTION: BF2 0x4ceb20
namespace dice { namespace hfe {
class ServerVoteManager {
public:
    char _pad[0x44];
    int minPlayers;
};
extern ServerVoteManager* g_serverVoteManager;
int getMinPlayersForIssue() {
    ServerVoteManager* mgr = g_serverVoteManager;
    if (mgr == 0) return 3;
    return mgr->minPlayers;
}
}
}

// REVERSED_FUNCTION: dice_hfe_ServerVoteManager_getMinPlayersForIssue_const (0x4ceb20)
