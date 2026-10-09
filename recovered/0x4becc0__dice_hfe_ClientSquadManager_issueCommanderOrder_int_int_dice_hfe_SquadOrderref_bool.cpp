// FUNCTION: BF2 0x4becc0
// BF2_FLAGS: -fno-tree-ter
namespace dice { namespace hfe {

extern void* game;

struct SquadOrder;

class IssueSquadOrderEvent {
public:
    unsigned char _pad[0x40];
    IssueSquadOrderEvent(int team, int squad, SquadOrder* order, int type);
};

class SquadManager {
public:
    void issueCommanderOrder(int team, int squad, SquadOrder& order, bool fromServer);
};

class ClientSquadManager : public SquadManager {
public:
    void issueCommanderOrder(int team, int squad, SquadOrder& order, bool fromServer);
};

typedef void (*SendFn)(void*, int, void*);

void ClientSquadManager::issueCommanderOrder(int team, int squad, SquadOrder& order,
                                             bool fromServer) {
    if (fromServer) {
        SquadManager::issueCommanderOrder(team, squad, order, true);
        return;
    }
    if (game == 0) {
        return;
    }
    SendFn send = (SendFn)(*(void***)game)[0x120 / 8];
    IssueSquadOrderEvent* ev = new IssueSquadOrderEvent(team, squad, &order, 1);
    send(game, -1, ev);
}

} }
