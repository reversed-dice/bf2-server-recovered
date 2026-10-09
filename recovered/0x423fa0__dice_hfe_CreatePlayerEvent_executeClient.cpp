// FUNCTION: BF2 0x423fa0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <iostream>

namespace dice {
namespace hfe {

enum DebugType {
    DebugType_Error = 6
};

class Debug {
    char _pad[0x20];
    char _stream[0x160];
public:
    Debug(DebugType type, std::string const& file, int line, std::string const& func = "");
    ~Debug();
    template <typename T>
    std::ostream& operator<<(T const& val) {
        return *(std::ostream*)(_stream) << val;
    }
};

namespace io {

class INetworkable;

class NetworkManager {
public:
    void addNetworkable(INetworkable* net, unsigned short id);
};

extern NetworkManager* networkManager;
extern const unsigned int IID_INetworkable;

} // namespace io

namespace world {

class IPlayer;

class ClientSub {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual void slot0x38(IPlayer* p); // slot 7 (+0x38)
};

class IPlayer {
public:
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void* queryInterface(unsigned int id); // slot 3 (+0x18)
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21();
    virtual void slot0xb0(int a); // slot 22 (+0xb0)
    virtual void v23();
    virtual void slot0xc0(int a); // slot 24 (+0xc0)
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28();
    virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32();
    virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36();
    virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40();
    virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
    virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48();
    virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52();
    virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56();
    virtual void slot0x1c8(int a, int b); // slot 57 (+0x1c8)
    virtual void v58(); virtual void v59(); virtual void v60(); virtual void v61();
    virtual void v62(); virtual void v63(); virtual void v64(); virtual void v65();
    virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69();
    virtual void v70(); virtual void v71(); virtual void v72(); virtual void v73();
    virtual void v74(); virtual void v75(); virtual void v76(); virtual void v77();
    virtual void v78(); virtual void v79(); virtual void v80(); virtual void v81();
    virtual void v82(); virtual void v83(); virtual void v84();
    virtual void slot0x2a8(int a); // slot 85 (+0x2a8)
};

class PlayerManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12();
    virtual void slot0x68(IPlayer* p); // slot 13 (+0x68)
    virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21();
    virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25();
    virtual void v26(); virtual void v27(); virtual void v28();
    virtual IPlayer* createPlayer(unsigned int cid, std::string const& name, unsigned char val); // slot 29 (+0xe8)
};

extern PlayerManager* playerManager;
extern const unsigned int CID_Player;

} // namespace world

class IGameClient {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual world::ClientSub* getClientSub(); // slot 8 (+0x40)
};

class IGame {
public:
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void* queryInterface(unsigned int id); // slot 3 (+0x18)
};

extern IGame* game;
extern const unsigned int IID_IGameClient;

class GameEvent {
public:
    GameEvent();
    virtual ~GameEvent();
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual bool executeClient();
    virtual bool executeServer(int playerId);
    char _pad[0x8];
};

class CreatePlayerEvent : public GameEvent {
public:
    virtual bool executeClient();

    unsigned char m_val10; // +0x10
    unsigned char m_val11; // +0x11
    unsigned char m_isAi;  // +0x12
    unsigned char m_val13; // +0x13
    char m_name[32];       // +0x14
    unsigned char m_val34; // +0x34
    char _pad35;
    unsigned short m_val36;// +0x36
    unsigned short m_val38;// +0x38
};

bool CreatePlayerEvent::executeClient()
{
    IGameClient* client = (IGameClient*)game->queryInterface(IID_IGameClient);
    if (!client) {
        return false;
    }
    world::ClientSub* clientSub = client->getClientSub();
    if (!clientSub) {
        return true;
    }

    world::IPlayer* player = world::playerManager->createPlayer(world::CID_Player, std::string(m_name), m_val34);
    if (!player) {
        Debug(DebugType(6), "Game/GameEvents/CreatePlayerEvent.cpp", 157, "") << "Failed to create requested player";
        return false;
    }

    if (m_isAi == 0) {
        world::playerManager->slot0x68(player);
        player->slot0x2a8(0);
        player->slot0xb0(0);
        clientSub->slot0x38(player);
        world::playerManager->slot0x68(player);
    } else {
        player->slot0xb0(1);
        player->slot0xc0(m_val13);
    }

    player->slot0x1c8(m_val10, 0);
    player->slot0x2a8(0);
    unsigned short netId = m_val36;
    io::INetworkable* net = (io::INetworkable*)player->queryInterface(io::IID_INetworkable);
    io::networkManager->addNetworkable(net, netId);
    return true;
}

} // namespace hfe
} // namespace dice
