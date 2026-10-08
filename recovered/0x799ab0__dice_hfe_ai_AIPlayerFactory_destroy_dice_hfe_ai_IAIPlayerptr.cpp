// FUNCTION: BF2 0x799ab0
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>
#include <algorithm>

namespace dice { namespace hfe { namespace ai {

class IAIPlayer {
public:
    virtual void v0();
    virtual void release();          // +0x8
    virtual void v2();
    virtual void* isAlive();         // +0x18
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual int getId();             // +0x38
};

class AIPlayerFactory {
public:
    void* m_vptr;                                  // +0x0
    std::vector<IAIPlayer*> m_players;             // +0x8

    void destroy(IAIPlayer* player);
};

void AIPlayerFactory::destroy(IAIPlayer* player) {
    if (player->isAlive() == 0) {
        std::vector<IAIPlayer*>::iterator it = std::find(m_players.begin(), m_players.end(), player);
        if (it != m_players.end()) {
            *it = 0;
        }
    } else {
        m_players[player->getId()] = 0;
    }

    if (player != 0) {
        player->release();
    }
}

} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIPlayerFactory_destroy_dice_hfe_ai_IAIPlayerptr (0x799ab0)
