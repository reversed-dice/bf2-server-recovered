// FUNCTION: BF2 0x426e50
namespace dice { namespace hfe {

namespace world {
extern unsigned int CID_GrapplingHookRopeContainerTemplate;

class ISoldier;

class GrapplingHookRope {
public:
    void detachSoldier(ISoldier* s);
};

class ITemplate {
public:
    virtual ~ITemplate(); // 0, 8
    virtual void pad1(); // 0x10
    virtual void pad2(); // 0x18
    virtual unsigned int getType(); // 0x20 (slot 4)
};

class Container {
public:
    virtual ~Container(); // 0, 8
    virtual void pad1(); // 0x10
    virtual void pad2(); // 0x18
    virtual void pad3(); // 0x20
    virtual void pad4(); // 0x28
    virtual void pad5(); // 0x30
    virtual void pad6(); // 0x38
    virtual void pad7(); // 0x40
    virtual void pad8(); // 0x48
    virtual void pad9(); // 0x50
    virtual void pad10(); // 0x58
    virtual void pad11(); // 0x60
    virtual void method_0x68(int); // 0x68 (slot 13)
    virtual void pad13(); // 0x70
    virtual void pad14(); // 0x78
    virtual void pad15(); // 0x80
    virtual void pad16(); // 0x88
    virtual void pad17(); // 0x90
    virtual void pad18(); // 0x98
    virtual void pad19(); // 0xa0
    virtual void pad20(); // 0xa8
    virtual void pad21(); // 0xb0
    virtual void pad22(); // 0xb8
    virtual void pad23(); // 0xc0
    virtual void pad24(); // 0xc8
    virtual void pad25(); // 0xd0
    virtual void pad26(); // 0xd8
    virtual void method_0xe0(void*); // 0xe0 (slot 28)

    char _pad[0x20]; // 0x8 + 0x20 = 0x28
    ITemplate* m_template; // 0x28
    char _pad2[0x5e0]; // to 0x610
    GrapplingHookRope* m_rope; // 0x610
};

class IPlayer {
public:
    virtual ~IPlayer(); // 0, 8
    virtual void pad1(); // 0x10
    virtual void pad2(); // 0x18
    virtual void pad3(); // 0x20
    virtual void pad4(); // 0x28
    virtual void pad5(); // 0x30
    virtual void pad6(); // 0x38
    virtual void pad7(); // 0x40
    virtual void pad8(); // 0x48
    virtual void pad9(); // 0x50
    virtual void pad10(); // 0x58
    virtual void pad11(); // 0x60
    virtual void pad12(); // 0x68
    virtual void pad13(); // 0x70
    virtual void pad14(); // 0x78
    virtual void pad15(); // 0x80
    virtual void pad16(); // 0x88
    virtual Container* method_0x90(); // 0x90 (slot 18)
    virtual void pad18(); // 0x98
    virtual void pad19(); // 0xa0
    virtual void pad20(); // 0xa8
    virtual void pad21(); // 0xb0
    virtual void pad22(); // 0xb8
    virtual void pad23(); // 0xc0
    virtual void pad24(); // 0xc8
    virtual void pad25(); // 0xd0
    virtual void pad26(); // 0xd8
    virtual void pad27(); // 0xe0
    virtual void pad28(); // 0xe8
    virtual void pad29(); // 0xf0
    virtual void pad30(); // 0xf8
    virtual void pad31(); // 0x100
    virtual void pad32(); // 0x108
    virtual void pad33(); // 0x110
    virtual void pad34(); // 0x118
    virtual void pad35(); // 0x120
    virtual void pad36(); // 0x128
    virtual void pad37(); // 0x130
    virtual void pad38(); // 0x138
    virtual void pad39(); // 0x140
    virtual void* method_0x148(); // 0x148 (slot 41)
};

class PlayerManager {
public:
    virtual ~PlayerManager();
    virtual void pad1();
    virtual void pad2();
    virtual void pad3();
    virtual void pad4();
    virtual void pad5();
    virtual void pad6();
    virtual IPlayer* getPlayer(int id); // 0x40 (slot 8)
};
extern PlayerManager* playerManager;
}

class GrapplingHookContainerDetachEvent {
public:
    char _head[0x10];
    int f_10;
    int f_14;

    bool executeClient();
};

bool GrapplingHookContainerDetachEvent::executeClient() {
    world::IPlayer* player = world::playerManager->getPlayer(f_10);
    if (!player)
        return false;

    if (!player->method_0x90())
        return false;

    if (player->method_0x90()->m_template->getType() != world::CID_GrapplingHookRopeContainerTemplate)
        return false;

    world::Container* container = player->method_0x90();
    world::GrapplingHookRope* rope = container->m_rope;
    if (!rope)
        return true;

    container->method_0xe0(&f_14);

    void* p = player->method_0x148();
    world::ISoldier* soldier = p ? (world::ISoldier*)((char*)p + 0x248) : 0;
    rope->detachSoldier(soldier);
    container->method_0x68(1);
    return true;
}

} }
