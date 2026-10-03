// FUNCTION: BF2 0x41f800
namespace dice { namespace hfe {

struct ChallengeEvent;

struct IGameClient {
    virtual void method0x00() = 0;
    virtual void method0x08() = 0;
    virtual void method0x10() = 0;
    virtual void method0x18() = 0;
    virtual void method0x20() = 0;
    virtual void method0x28() = 0;
    virtual void executeChallenge(ChallengeEvent* event) = 0;
};

struct Game {
    virtual void method0x00() = 0;
    virtual void method0x08() = 0;
    virtual void method0x10() = 0;
    virtual IGameClient* queryInterface(unsigned int iid) = 0;
};

extern Game* dice_hfe_game;
extern const unsigned int IID_IGameClient;

struct ChallengeEvent {
    bool executeClient();
};

bool ChallengeEvent::executeClient() {
    IGameClient* client = dice_hfe_game->queryInterface(IID_IGameClient);
    if (client != 0) {
        client->executeChallenge(this);
        return true;
    }
    return false;
}

} } // namespace
// REVERSED_FUNCTION: dice_hfe_ChallengeEvent_executeClient (0x41f800)