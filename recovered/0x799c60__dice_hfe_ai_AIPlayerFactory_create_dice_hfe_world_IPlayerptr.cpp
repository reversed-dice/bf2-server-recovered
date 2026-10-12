// FUNCTION: BF2 0x799c60
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <ostream>
#include <vector>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug(int type, const std::string& file, int line, const std::string& tag);
    ~Debug();
};

namespace world {

class IPlayer {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual int getIndex();
};

} // namespace world

namespace ai {

class AIPlayer {
public:
    AIPlayer(world::IPlayer* p);
    char _data[0x18];
};

class AIPlayerFactory {
public:
    char _pad[0x8];
    std::vector<AIPlayer*> m_players;

    AIPlayer* create(world::IPlayer* player);
};

AIPlayer* AIPlayerFactory::create(world::IPlayer* player)
{
    AIPlayer* p = new AIPlayer(player);
    if (p == 0)
        Debug(6, std::string("./AI/AIDLL/AI/AIUtils/checkPointer.h"), 46,
              std::string(&DAT_00bb25f1)).os
            << "AI::Allocation failed";
    m_players[player->getIndex()] = p;
    return p;
}

} // namespace ai

} }
