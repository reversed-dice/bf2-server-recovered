// FUNCTION: BF2 0x4283e0
namespace dice { namespace hfe {

namespace world {
class IObject {
public:
    virtual void _v0(); virtual void _v1(); virtual void _v2(); virtual void _v3(); virtual void _v4(); virtual void _v5(); virtual void _v6(); virtual void _v7(); virtual void _v8(); virtual void _v9(); virtual void _v10(); virtual void _v11(); virtual void _v12(); virtual void _v13(); virtual void _v14(); virtual void _v15(); virtual void _v16(); virtual void _v17(); virtual void _v18(); virtual void _v19(); virtual void _v20(); virtual void _v21(); virtual void _v22(); virtual void _v23(); virtual void _v24(); virtual void _v25(); virtual void _v26(); virtual void _v27();
    virtual void setDropInfo(const void* info);
};
}
class IPlayer {
public:
    virtual void _v0(); virtual void _v1(); virtual void _v2(); virtual void _v3(); virtual void _v4(); virtual void _v5(); virtual void _v6(); virtual void _v7(); virtual void _v8(); virtual void _v9(); virtual void _v10(); virtual void _v11(); virtual void _v12(); virtual void _v13(); virtual void _v14(); virtual void _v15(); virtual void _v16(); virtual void _v17();
    virtual void* getVehicle();
};
namespace io { class NetworkManager { public: world::IObject* getObject(unsigned short id); }; }
class IPlayerManager {
public:
    virtual void _v0(); virtual void _v1(); virtual void _v2(); virtual void _v3(); virtual void _v4(); virtual void _v5(); virtual void _v6(); virtual void _v7();
    virtual IPlayer* getPlayerFromId(int id);
};
class IGameLogic {
public:
    virtual void _v0(); virtual void _v1(); virtual void _v2(); virtual void _v3(); virtual void _v4(); virtual void _v5(); virtual void _v6(); virtual void _v7(); virtual void _v8(); virtual void _v9(); virtual void _v10(); virtual void _v11(); virtual void _v12(); virtual void _v13(); virtual void _v14(); virtual void _v15(); virtual void _v16(); virtual void _v17(); virtual void _v18(); virtual void _v19(); virtual void _v20(); virtual void _v21(); virtual void _v22(); virtual void _v23(); virtual void _v24(); virtual void _v25(); virtual void _v26(); virtual void _v27(); virtual void _v28(); virtual void _v29(); virtual void _v30(); virtual void _v31(); virtual void _v32(); virtual void _v33(); virtual void _v34(); virtual void _v35(); virtual void _v36(); virtual void _v37(); virtual void _v38(); virtual void _v39(); virtual void _v40(); virtual void _v41(); virtual void _v42(); virtual void _v43(); virtual void _v44(); virtual void _v45(); virtual void _v46(); virtual void _v47(); virtual void _v48(); virtual void _v49(); virtual void _v50(); virtual void _v51(); virtual void _v52(); virtual void _v53(); virtual void _v54(); virtual void _v55(); virtual void _v56(); virtual void _v57(); virtual void _v58();
    virtual void pickupObject(world::IObject* o, IPlayer* p, world::IObject* kit, bool notify);
    virtual void dropObject(world::IObject* o, IPlayer* p, world::IObject* kit, bool notify);
};
extern io::NetworkManager* g_networkManager;
extern IPlayerManager* g_playerManager;
extern IGameLogic* g_gameLogic;

class HandleDropEvent {
public:
    bool executeClient();
    char _pad0[0x10];
    unsigned char m_playerId;
    char _pad11;
    unsigned short m_objectId;
    unsigned short m_kitId;
    char _pad16[0x2];
    char m_info[0x10];
};

bool HandleDropEvent::executeClient()
{
    world::IObject* o = g_networkManager->getObject(m_objectId);
    world::IObject* kit = g_networkManager->getObject(m_kitId);
    IPlayer* p = g_playerManager->getPlayerFromId(m_playerId);
    if (!p || !o)
        return false;
    if (!kit)
        return false;
    g_gameLogic->dropObject(o, p, kit, true);
    o->setDropInfo(m_info);
    return true;
}

} }
