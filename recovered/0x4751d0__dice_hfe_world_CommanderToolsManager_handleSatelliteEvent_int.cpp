// FUNCTION: BF2 0x4751d0
namespace dice { namespace hfe {

enum EventCategory { EC_2 = 2 };

class PostRemoteEvent {
public:
    char _pad[0x58];
    PostRemoteEvent(EventCategory cat, unsigned int type, bool flag, void* data, unsigned int size, float delay);
};

class Game {
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
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void postEvent(int player, void* event);

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
    virtual void v25();
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
    virtual int getTeam();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual bool isCommander();

};

class PlayerManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void* getPlayer(int id);
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void* getLocalPlayer();

};

extern PlayerManager* playerManager;

class CommanderToolState {
public:
    char _pad[0x38];
    bool startScan();
};

class CommanderToolsManager {
public:
    char _pad[8];
    CommanderToolState m_states[2];

    void handleSatelliteEvent(int playerId);
};

void CommanderToolsManager::handleSatelliteEvent(int playerId) {

    IPlayer* player = (playerId == -1) ? (IPlayer*)playerManager->getLocalPlayer() : (IPlayer*)playerManager->getPlayer(playerId);
    if (player && player->isCommander()) {
        int team = player->getTeam();
        if (team > 0) {
            if (m_states[team - 1].startScan() && playerId != -1) {
                game->postEvent(playerId, new PostRemoteEvent(EC_2, 0x29, false, 0, 0, 0.0f));
            }
        }
    }
    
}

} } }
