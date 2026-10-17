// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x8af0e0
#include <string>

namespace dice { namespace hfe {

class IBase {
public:
    virtual void a0();
    virtual void a1();
    virtual void a2();
    virtual IBase* queryInterface(unsigned int iid);
};

class IGame : public IBase {
public:
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20();
    virtual void message(int channel, std::string const& msg, void* player,
                         unsigned int a, unsigned int b, unsigned int c);
};

class IPlayerManager {
public:
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3();
    virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7();
    virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11();
    virtual void* getPlayer();
};

extern IBase* game;
extern unsigned int IID_IGame;
extern IPlayerManager* playerManager;

namespace {

static inline void sayAll(int channel, std::string const& msg)
{
    if (game && game->queryInterface(IID_IGame)) {
        void* player = playerManager->getPlayer();
        IGame* g = game ? static_cast<IGame*>(game->queryInterface(IID_IGame)) : 0;
        g->message(channel, msg, player, 0, 1, 0);
    }
}
static inline void sayAllV(int channel, std::string msg)
{
    if (game && game->queryInterface(IID_IGame)) {
        void* player = playerManager->getPlayer();
        IGame* g = game ? static_cast<IGame*>(game->queryInterface(IID_IGame)) : 0;
        g->message(channel, msg, player, 0, 1, 0);
    }
}
class ConsoleClass233 {
public:
    virtual ~ConsoleClass233();
    void* executeObjectMethod();

    unsigned char _pad0[0x30 - 8];
    int m_mode;                 // +0x30
    unsigned char _pad1[4];
    const int* m_id;            // +0x38
    const std::string* m_arg0;  // +0x40
    unsigned char _pad2[0x108 - 0x48];
    bool m_hasResult;           // +0x108
};

void* ConsoleClass233::executeObjectMethod()
{
    if (m_mode == 2) {
        int id = *m_id;
        std::string a(*m_arg0);
        m_hasResult = false;
        sayAllV(id, a);
    }
    return 0;
}
}
} }
