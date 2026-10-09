// FUNCTION: BF2 0x4bedb0
// BF2_FLAGS: -fno-tree-ter
namespace dice { namespace hfe {

class SquadOrder;
enum OrderType { OT_ZERO };

class SquadManager {
public:
    void issueRequest(int, int, SquadOrder&, bool);
};

class IssueSquadOrderEvent {
public:
    IssueSquadOrderEvent(int, int, SquadOrder*, OrderType);

    unsigned char m_pad[0x40];
};

class ClientSquadManager : public SquadManager {
public:
    void issueRequest(int, int, SquadOrder&, bool);
};

extern void* game;

typedef void (*SendFn)(void*, int, void*);

void ClientSquadManager::issueRequest(int team, int squad, SquadOrder& order, bool fromServer)
{
    if (fromServer)
    {
        SquadManager::issueRequest(team, squad, order, true);
        return;
    }

    if (game == 0)
        return;

    SendFn send = (SendFn)(*(void***)game)[0x24];
    IssueSquadOrderEvent* ev = new IssueSquadOrderEvent(team, squad, &order, (OrderType)2);
    send(game, -1, ev);
}

} }
