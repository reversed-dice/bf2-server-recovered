// FUNCTION: BF2 0x76c0c0
namespace dice { namespace hfe {

#define V8 virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();

class IPlayer {
public:
    V8
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26();
    virtual bool isRemovable();
};

class IGameState {
public:
    V8
    virtual bool isShuttingDown();
};

class IPlayerManager {
public:
    V8
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26();
    virtual void removePlayer(IPlayer* p, bool, bool);
};

extern IGameState* g_gameState;
extern IPlayerManager* g_playerManager;

namespace ai {

class AIPlayer {
public:
    virtual ~AIPlayer();
    void removePlayerFromGame();
    IPlayer* m_player;
};

void AIPlayer::removePlayerFromGame()
{
    if (g_gameState->isShuttingDown())
        return;
    if (m_player && m_player->isRemovable())
        g_playerManager->removePlayer(m_player, true, false);
}

} } }
