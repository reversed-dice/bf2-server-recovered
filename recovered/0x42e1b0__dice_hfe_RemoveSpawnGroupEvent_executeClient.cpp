// FUNCTION: BF2 0x42e1b0
namespace dice { namespace hfe {

class IGameClient {
public:
    virtual ~IGameClient() {}
    virtual void _00() {}
    virtual void _01() {}
    virtual void _02() {}
    virtual void _03() {}
    virtual void _04() {}
    virtual void _05() {}
    virtual void _06() {}
    virtual void _07() {}
    virtual void _08() {}
    virtual void _09() {}
    virtual void _0a() {}
    virtual void _0b() {}
    virtual void _0c() {}
    virtual void _0d() {}
    virtual void _0e() {}
    virtual void _0f() {}
    virtual void _10() {}
    virtual void _11() {}
    virtual void _12() {}
};

class IGame {
public:
    virtual ~IGame() {}
    virtual void _00() {}
    virtual IGameClient* getInterface(unsigned int iid) { return 0; }
};

class ISpawnManager {
public:
    virtual ~ISpawnManager() {}
    virtual void _00() {}
    virtual void _01() {}
    virtual void _02() {}
    virtual void _03() {}
    virtual void _04() {}
    virtual void _05() {}
    virtual void _06() {}
    virtual void _07() {}
    virtual void _08() {}
    virtual void _09() {}
    virtual void _0a() {}
    virtual void _0b() {}
    virtual void _0c() {}
    virtual void _0d() {}
    virtual void _0e() {}
    virtual void _0f() {}
    virtual void _10() {}
    virtual void removeSpawnGroup(unsigned char a1) {}
};

extern IGame* dice_hfe_game;
extern ISpawnManager* dice_hfe_spawnManager;
extern const unsigned int dice_hfe_IID_IGameClient;

class RemoveSpawnGroupEvent {
public:
    char _pad0x00[0x10];
    unsigned char m_unk_0x10;

    bool executeClient();
};

bool RemoveSpawnGroupEvent::executeClient() {
    if (dice_hfe_game->getInterface(dice_hfe_IID_IGameClient) == 0)
        return 0;
    if (dice_hfe_spawnManager == 0)
        return 0;
    dice_hfe_spawnManager->removeSpawnGroup(m_unk_0x10);
    return 1;
}

} }
