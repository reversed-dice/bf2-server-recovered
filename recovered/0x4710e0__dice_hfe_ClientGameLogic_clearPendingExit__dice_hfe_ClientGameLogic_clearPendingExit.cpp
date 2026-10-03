// FUNCTION: BF2 0x4710e0
namespace dice { namespace hfe {

class WorldPref {
public:
    static unsigned int getTickCount();
};

class ClientGameLogic {
    // 0x0 - 0x4bf: unknown base/members
    char __pad_0x000[0x4c0];
    // offset 0x4c0
    int m_pendingExit;
    // offset 0x4c4 - padding or unknown
    char __pad_0x4c4[4];
    // offset 0x4c8
    unsigned int m_pendingExitTick;

public:
    void clearPendingExit();
};

void ClientGameLogic::clearPendingExit() {
    m_pendingExit = 0;
    m_pendingExitTick = WorldPref::getTickCount();
}

} }
// REVERSED_FUNCTION: dice_hfe_ClientGameLogic_clearPendingExit (0x4710e0)