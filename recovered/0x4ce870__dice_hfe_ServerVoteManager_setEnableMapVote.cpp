// FUNCTION: BF2 0x4ce870
namespace dice { namespace hfe {
class ServerVoteManager {
public:
    char _pad[0x1];
    bool field;
    void setEnableMapVote(bool v);
};
void ServerVoteManager::setEnableMapVote(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ServerVoteManager_setEnableMapVote (0x4ce870)
