// FUNCTION: BF2 0x4a4b00
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

namespace world { class IObject; }

class ServerSettings {
public:
    float getSpawnTime();
};

class WorldPref {
public:
    static unsigned int getTickCount();
};

class IEventManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void sendEvent(int target, int type, void* data, float delay);
};
extern IEventManager* eventManager;

namespace ai {
class AIInstanceServer {
public:
    virtual void _v00();
    virtual void _v01();
    virtual void _v02();
    virtual void _v03();
    virtual void _v04();
    virtual void _v05();
    virtual void _v06();
    static AIInstanceServer* m_iAI;
    virtual char isEnabled();
};
}

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
    virtual IObject* getVehicle() const;
    virtual void v19();
    virtual void v20();
    virtual int getId() const;
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
    virtual void setTeam(int team, bool force);
    virtual int getTeam() const;
    virtual void v59();
    virtual void setSpawnAtTick(unsigned int tick);
    virtual float getTimeToSpawn() const;
    virtual void v62();
    virtual void v63(int a);
};

}

extern ServerSettings* serverSettings;

class GameLogic {
public:
    unsigned char killPlayer(world::IPlayer* player, bool suicide, bool silent);
};

class ServerGameLogic : public GameLogic {
public:
    int reSpawnPlayer(world::IPlayer* p);
};

struct SpawnData {
    int team;
    int id;
    void* ptr;
};

int ServerGameLogic::reSpawnPlayer(world::IPlayer* p)
{
    if (p == 0) return 0;
    float t = serverSettings->getSpawnTime();
    p->getVehicle();
    p->v63(0);
    p->setSpawnAtTick((int)(t * 30.0f) + WorldPref::getTickCount());
    if (ai::AIInstanceServer::m_iAI != 0) {
        if (ai::AIInstanceServer::m_iAI->isEnabled() != 0) {
            world::IObject* veh = p->getVehicle();
            int id = p->getId();
            void* c = *(void**)((char*)veh + 0x68);
            int team = p->getTeam();
            SpawnData d;
            d.team = team;
            d.id = id;
            d.ptr = c;
            eventManager->sendEvent(3, 0, &d, 0.0f);
        }
    }
    return killPlayer(p, false, false);
}

} }
