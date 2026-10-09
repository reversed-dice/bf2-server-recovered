// FUNCTION: BF2 0x4a4610
namespace dice { namespace hfe { namespace world {

class ScoreManager {
public:
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void* getTeamScores(unsigned int team);
};
extern ScoreManager* scoreManager;

} // world

class GameLogic { public: virtual ~GameLogic(); };
class ServerGameLogic : public GameLogic {
public:
    int getNumberOfTickets(unsigned int team) const;
};

int ServerGameLogic::getNumberOfTickets(unsigned int team) const
{
    if (team - 1 > 1) {
        return 0;
    }
    return *(int*)((char*)world::scoreManager->getTeamScores(team) + 0x84);
}

} }
