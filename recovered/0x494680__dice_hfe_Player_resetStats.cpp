// FUNCTION: BF2 0x494680

namespace dice { namespace hfe { namespace world {
class PlayerScoreData {
public:
    void reset();
};
} } }

namespace dice { namespace hfe {

class Player {
public:
    char _pad[0x120];
    float m_120;
    world::PlayerScoreData* m_scoreData;
    char _pad2[0x2e0 - 0x130];
    float m_2e0;
    float m_2e4;

    void resetStats();
};

void Player::resetStats() {
    m_120 = -100000.0f;
    float z = 0.0f;
    m_2e0 = z;
    m_2e4 = z;
    m_scoreData->reset();
}

} }
