// FUNCTION: BF2 0x470fe0
namespace dice { namespace hfe {

extern unsigned char clientResetCalledAlready;
void GameLogic_reset();

struct ClientGameLogic {
    unsigned char _pad0[0xa8];
    unsigned int resetState;
    void reset();
};

void ClientGameLogic::reset() {
    if (clientResetCalledAlready == 0) goto body;
    return;
body:
    clientResetCalledAlready = 1;
    reinterpret_cast<unsigned int*>(reinterpret_cast<unsigned char*>(this) + 0xa8)[0] = 3;
    GameLogic_reset();
    clientResetCalledAlready = 0;
}

} }
// REVERSED_FUNCTION: dice_hfe_ClientGameLogic_reset (0x470fe0)