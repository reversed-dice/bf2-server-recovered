// FUNCTION: BF2 0x426030
namespace dice { namespace hfe {

extern void* dice_hfe_game;
extern unsigned int dice_hfe_IID_IGameClient;

struct IGame {
    virtual void dummy0() = 0;
    virtual void dummy1() = 0;
    virtual void dummy2() = 0;
    virtual void* getInterface(unsigned int iid) = 0;
};

struct IClient {
    virtual void dummy0() = 0;
    virtual void dummy1() = 0;
    virtual void dummy2() = 0;
    virtual void dummy3() = 0;
    virtual void dummy4() = 0;
    virtual void dummy5() = 0;
    virtual void dummy6() = 0;
    virtual void dummy7() = 0;
    virtual void dummy8() = 0;
    virtual void dummy9() = 0;
    virtual void dummy10() = 0;
    virtual void dummy11() = 0;
    virtual void dummy12() = 0;
    virtual void dummy13() = 0;
    virtual void method(unsigned char a, unsigned char b) = 0;
};

class ExitVehicleEvent {
public:
    char _pad0[0x10];
    unsigned char m_unk_0x10;
    unsigned char m_unk_0x11;
    
    bool executeClient();
};

bool ExitVehicleEvent::executeClient() {
    IClient* client = (IClient*)((IGame*)dice_hfe_game)->getInterface(dice_hfe_IID_IGameClient);
    if (!client)
        return false;
    client->method(m_unk_0x10, m_unk_0x11);
    return true;
}

} }
// REVERSED_FUNCTION: dice_hfe_ExitVehicleEvent_executeClient (0x426030)