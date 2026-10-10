#include <math.h>
namespace dice { namespace hfe {

struct Vote {
    enum VoteType { VT_NONE };
    float getMajority() const;
    enum VoteStatus { VS_NEW, VS_DISCARDED = 5 };
    enum VoteOption { VO_NONE };
};

struct VoteEvent {
    char m_pad0[0x10];
    Vote::VoteOption m_option;
    char m_pad1[4];
    Vote::VoteStatus m_status;
    Vote::VoteType m_type;
    char m_pad2[4];
    unsigned char m_item;
    unsigned char m_caster;
};

extern int IID_IGameServer;

class IGameServer {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual int getSlotState(unsigned char slot);
};

class Game {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual IGameServer* getInterface(int iid);
};

extern Game* game;

namespace world {

class IPlayer {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual bool v25();
};

class IPlayerManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual IPlayer* getPlayer(unsigned char id);
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual IPlayer* getLocalPlayer();
};

extern IPlayerManager* playerManager;

}


class ServerVoteManager {
public:
    int getNumberOfPotentialVoters(Vote::VoteType type, int a, int b);
    int calcVotesNeeded(Vote::VoteType type, Vote& vote, int a, int b);
};

// FUNCTION: BF2 0x4cf900
int ServerVoteManager::calcVotesNeeded(Vote::VoteType type, Vote& vote, int a, int b)
{
    int voters = getNumberOfPotentialVoters(type, a, b);
    float needed = vote.getMajority() * (float)voters;
    return (int)ceilf(needed);
}

} }
