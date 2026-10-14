// FUNCTION: BF2 0x40f1d0
// BF2_FLAGS: -fno-tree-ter
namespace dice { namespace hfe {

namespace world {

class IPlayerManager {
public:
    virtual void q0();  virtual void q1();  virtual void q2();  virtual void q3();
    virtual void q4();  virtual void q5();  virtual void q6();  virtual void q7();
    virtual void q8();  virtual void q9();  virtual void q10(); virtual void q11();
};

extern IPlayerManager* playerManager;

} // namespace world

class ISquadManager {
public:
    virtual void q0();  virtual void q1();  virtual void q2();  virtual void q3();
    virtual void q4();  virtual void q5();  virtual void q6();  virtual void q7();
    virtual void q8();  virtual void q9();  virtual void q10(); virtual void q11();
};

extern ISquadManager* squadManager;

typedef void* (*FnGet)(void*);
typedef int   (*FnInt)(void*);
typedef void  (*FnJoin)(void*, int, int, int);

class Game {
public:
    void joinSquad(int playerId);
};

void Game::joinSquad(int playerId)
{
    void* obj = ((FnGet)(*(void***)world::playerManager)[0x60 / 8])(world::playerManager);
    if (obj == 0)
        return;
    if (squadManager == 0)
        return;
    FnJoin f = (FnJoin)(*(void***)squadManager)[0x60 / 8];
    int a = ((FnInt)(*(void***)obj)[0xa8 / 8])(obj);
    int b = ((FnInt)(*(void***)obj)[0x1d0 / 8])(obj);
    f(squadManager, b, playerId, a);
}

} }
