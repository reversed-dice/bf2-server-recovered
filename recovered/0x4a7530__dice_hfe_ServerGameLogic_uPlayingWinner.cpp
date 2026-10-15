// FUNCTION: BF2 0x4a7530
namespace dice { namespace hfe { namespace world {

struct TeamScore {
    char pad[0x84];
    int m_score;
};

class ScoreManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual TeamScore* getTeamScore(unsigned int);
    virtual void setWinner(unsigned char);
    virtual unsigned char getWinner();
    virtual void forceSetWinner(unsigned char);
    virtual void setVictoryType(unsigned char);
};

} } }

extern "C" void set_game_status_4a7470(void* self, int status, bool flag, float t);

namespace dice { namespace hfe { namespace world {

#define SM (*(dice::hfe::world::ScoreManager**)0x010c0ea0)

void uPlayingWinner_0x4a7530(void* self)
{
    if ((SM->getTeamScore(1)->m_score > 0 || SM->getTeamScore(2)->m_score > 0) &&
         SM->getTeamScore(1)->m_score > 0)
    {
        SM->getTeamScore(2);
    }

    int s1 = SM->getTeamScore(1)->m_score;
    int s2 = SM->getTeamScore(2)->m_score;
    unsigned int winner = 1;
    if (s1 <= s2)
        winner = (s1 < s2) ? 2 : 0;
    SM->setWinner((unsigned char)winner);

    set_game_status_4a7470(self, 2, false, 0.0f);

    if (SM->getWinner())
        SM->setVictoryType(3);
    else
        SM->setVictoryType(0);
}

} } }
