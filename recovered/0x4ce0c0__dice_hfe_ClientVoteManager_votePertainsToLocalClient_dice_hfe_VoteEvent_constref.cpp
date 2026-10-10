namespace dice { namespace hfe {

struct Vote {
    enum VoteType { VT_NONE };
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

class ServerInfo {
public:
    char m_pad0[0x4f];
    bool m_unk4f;
};

extern ServerInfo* serverInfo;

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
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual int v58();
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

class ClientVoteManager {
public:
    bool votePertainsToLocalClient(const VoteEvent& ev);
};

// FUNCTION: BF2 0x4ce0c0
bool ClientVoteManager::votePertainsToLocalClient(const VoteEvent& ev)
{
    switch (ev.m_type) {
    case (Vote::VoteType)1:
        return true;
    case (Vote::VoteType)2:
        if (serverInfo && !serverInfo->m_unk4f)
            return true;
        break;
    case (Vote::VoteType)3:
        break;
    default:
        return false;
    }
    world::IPlayer* p = world::playerManager->getPlayer(ev.m_item);
    if (!p)
        return false;
    world::IPlayer* local = world::playerManager->getLocalPlayer();
    if (local->v58() == p->v58())
        return true;
    return false;
}

} }
