// FUNCTION: BF2 0x799df0
#include <vector>

namespace dice { namespace hfe { namespace ai {

class IAIPlayer;

class IAIPlayerFactory {
public:
    IAIPlayerFactory();
    virtual ~IAIPlayerFactory();
};

class AIPlayerFactory : public IAIPlayerFactory {
public:
    AIPlayerFactory();
    virtual ~AIPlayerFactory();

    std::vector<IAIPlayer*> m_players;
};

AIPlayerFactory::AIPlayerFactory()
    : IAIPlayerFactory(), m_players()
{
    m_players.insert(m_players.begin(), 256, (IAIPlayer*)0);
}

} } }
