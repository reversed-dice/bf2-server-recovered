// FUNCTION: BF2 0x885120
#include <string>
namespace dice { namespace hfe {

class Player {
public:
    void pickup(std::string name);
};

class IPlayerManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual Player* getLocalPlayer();
};

extern IPlayerManager* g_playerManager;

namespace {

inline Player* localPlayer() { return g_playerManager ? g_playerManager->getLocalPlayer() : 0; }

class ConsoleClass259 {
public:
    virtual ~ConsoleClass259();
    void* executeObjectMethod();
    unsigned char _pad0[0x30 - 8];
    int m_argc;
    unsigned char _pad1[4];
    const std::string* m_arg0;
    unsigned char _pad2[0x108 - 0x40];
    bool m_hasResult;
};

void* ConsoleClass259::executeObjectMethod()
{
    if (m_argc == 1) {
        std::string a(*m_arg0);
        m_hasResult = false;
        localPlayer()->pickup(a);
    }
    return 0;
}

}
} }
