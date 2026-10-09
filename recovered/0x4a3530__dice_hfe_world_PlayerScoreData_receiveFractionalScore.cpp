// FUNCTION: BF2 0x4a3530
namespace dice { namespace hfe { namespace world {

class PlayerScoreData {
public:
    int m_score;           // +0x0
    char _pad[0x1c - 4];
    float m_fractionalScore; // +0x1c

    bool receiveFractionalScore();
};

bool PlayerScoreData::receiveFractionalScore()
{
    if (m_fractionalScore > -1.0f && m_fractionalScore < 1.0f)
        return false;
    int whole = (int)m_fractionalScore;
    m_score += whole;
    m_fractionalScore -= (float)whole;
    return true;
}

} } }
