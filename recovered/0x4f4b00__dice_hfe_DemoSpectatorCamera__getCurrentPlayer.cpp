// FUNCTION: BF2 0x4f4b00
namespace dice { namespace hfe {

class Player;

class PlayerManager {
public:
    virtual void _d0() = 0;
    virtual void _d1() = 0;
    virtual void _d2() = 0;
    virtual void _d3() = 0;
    virtual void _d4() = 0;
    virtual void _d5() = 0;
    virtual void _d6() = 0;
    virtual void _d7() = 0;
    virtual Player* getPlayer(int) = 0;
};

extern PlayerManager* g_playerManager;

class DemoSpectatorCamera {
public:
    char __pad[0x10];
    int m_field;

    Player* getCurrentPlayer();
};

Player* DemoSpectatorCamera::getCurrentPlayer() {
    if (m_field < 0)
        return 0;
    Player* player = g_playerManager->getPlayer(m_field);
    if (player)
        return player;
    m_field = -1;
    return 0;
}

} }
// REVERSED_FUNCTION: dice_hfe_DemoSpectatorCamera::getCurrentPlayer (0x4f4b00)