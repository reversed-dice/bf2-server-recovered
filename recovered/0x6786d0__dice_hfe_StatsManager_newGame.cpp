// FUNCTION: BF2 0x6786d0
#include <string>
#include <string.h>

extern "C" void* NewGame(int);
extern "C" char* GetChallenge(void*);

namespace dice {
namespace hfe {

class StatsManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual bool isConnected(); // slot 8: +0x40

    char pad[8];
    void* m_game;        // 0x10
    std::string m_challenge; // 0x18

    virtual bool newGame();
};

bool StatsManager::newGame() {
    if (isConnected()) {
        void* game = NewGame(0);
        m_game = game;
        char* ch = GetChallenge(game);
        m_challenge.assign(ch, strlen(ch));
        return true;
    }
    return false;
}

} // namespace hfe
} // namespace dice
