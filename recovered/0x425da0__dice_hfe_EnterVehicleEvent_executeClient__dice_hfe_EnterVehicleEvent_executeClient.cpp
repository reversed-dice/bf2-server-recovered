// FUNCTION: BF2 0x425da0
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
    virtual void executeEnterVehicle(unsigned char a1, unsigned short a2, unsigned char a3) {}
};

class IGame {
public:
    virtual ~IGame() {}
    virtual void _00() {}
    virtual IGameClient* getInterface(unsigned int iid) { return 0; }
};

extern IGame* dice_hfe_game;
extern const unsigned int dice_hfe_IID_IGameClient;

class EnterVehicleEvent {
public:
    char _pad0x00[0x10];
    unsigned char m_unk_0x10;
    unsigned short m_unk_0x12;
    unsigned char m_unk_0x14;

    bool executeClient();
};

bool EnterVehicleEvent::executeClient() {
    IGameClient* client = dice_hfe_game->getInterface(dice_hfe_IID_IGameClient);
    if (client) {
        client->executeEnterVehicle(m_unk_0x10, m_unk_0x12, m_unk_0x14);
        return 1;
    }
    return 0;
}

} }
// REVERSED_FUNCTION: dice_hfe_EnterVehicleEvent_executeClient (0x425da0)