// FUNCTION: BF2 0x435a20
namespace dice { namespace hfe {

class VoteEvent;

class ServerVoteManager {
public:
    static ServerVoteManager* getInstance();
    void receiveVote(int param, const VoteEvent& event);
};

class VoteEvent {
public:
    int executeServer(int param);
};

int VoteEvent::executeServer(int param) {
    ServerVoteManager* mgr = ServerVoteManager::getInstance();
    mgr->receiveVote(param, *this);
    return 1;
}

} }
// REVERSED_FUNCTION: dice_hfe_VoteEvent_executeServer_int (0x435a20)