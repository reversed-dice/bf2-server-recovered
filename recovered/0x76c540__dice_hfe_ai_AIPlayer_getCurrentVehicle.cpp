// FUNCTION: BF2 0x76c540
namespace dice { namespace hfe {
namespace world {
extern unsigned int CID_LadderContainerTemplate;
extern unsigned int CID_ParachuteTemplate;
extern unsigned int CID_ZiplineContainerTemplate;
extern unsigned int CID_GrapplingHookRopeContainerTemplate;
extern unsigned int IID_IPlayerControlObject;

class ITemplate {
public:
    virtual void _v0(); virtual void _v1(); virtual void _v2(); virtual void _v3();
    virtual unsigned int getClassId(); // 0x20 / 8 = 4
};

class IPlayerControlObject {
public:
    virtual void _v0(); virtual void _v1(); virtual void _v2(); virtual void _v3();
    virtual void _v4();
    virtual void* getParentPco(); // 0x28 / 8 = 5
};

class IObject {
public:
    virtual void _v0(); virtual void _v1(); virtual void _v2();
    virtual void* queryInterface(unsigned int iid);
    char _pad[0x28 - 8];
    ITemplate* m_template; // +0x28
    char _pad2[0x68 - 0x30];
    void* m_networkable; // +0x68
};

class IPlayer {
public:
    virtual void _v0();
    // 0x90 / 8 = 18
    virtual void _v1(); virtual void _v2(); virtual void _v3(); virtual void _v4();
    virtual void _v5(); virtual void _v6(); virtual void _v7(); virtual void _v8();
    virtual void _v9(); virtual void _v10(); virtual void _v11(); virtual void _v12();
    virtual void _v13(); virtual void _v14(); virtual void _v15(); virtual void _v16();
    virtual void _v17();
    virtual IObject* getControlledObject();
};
}
namespace ai {

class AIPlayer {
public:
    char _pad[8];
    world::IPlayer* m_player;
    void* getCurrentVehicle();
};

void* AIPlayer::getCurrentVehicle() {
    world::IObject* obj = m_player->getControlledObject();
    if (!obj) return 0;
    unsigned int cid = obj->m_template->getClassId();
    if (cid == world::CID_LadderContainerTemplate ||
        cid == world::CID_ParachuteTemplate ||
        cid == world::CID_ZiplineContainerTemplate ||
        cid == world::CID_GrapplingHookRopeContainerTemplate) {
        world::IPlayerControlObject* pco = (world::IPlayerControlObject*)obj->queryInterface(world::IID_IPlayerControlObject);
        void* parent = pco->getParentPco();
        return *(void**)((char*)parent + 0x68);
    }
    return obj->m_networkable;
}

} } }
