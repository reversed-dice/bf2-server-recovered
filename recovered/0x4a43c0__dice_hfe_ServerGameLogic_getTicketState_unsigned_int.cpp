// FUNCTION: BF2 0x4a43c0
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
    int getTicketState(unsigned int team);
};

int ServerGameLogic::getTicketState(unsigned int team)
{
    if (team - 1 > 1) {
        return -1;
    }
    return *(int*)((char*)world::scoreManager->getTeamScores(team) + 0x8c);
}

} }
