// FUNCTION: BF2 0xa9ae10
#include <string>
namespace dice { namespace hfe {
extern void* game;
extern unsigned int IID_IGameClient;
extern void* serverSettings;
namespace {
static inline void* pickSS() {
    void* ss;
    void* mgr = game;
    if (mgr == 0) goto use_d;
    {
        void* c = ((void* (*)(void*, unsigned int))(*(void***)mgr)[0x18 / 8])(mgr, IID_IGameClient);
        ss = 0;
        if (c == 0) goto use_d;
    }
    goto use;
use_d:
    ss = serverSettings;
use:
    return ss;
}
static inline void setStr(std::string v) {
    ((std::string*)((char*)pickSS() + 0x70))->assign(v);
}
class ConsoleClass702 {
public:
    virtual ~ConsoleClass702();
    virtual void* executeObjectMethod();
    char pad[0x28];
    int m_argc;
    char pad1[4];
    std::string* m_arg;
    char pad2[0x108 - 0x40];
    char m_active;
    char pad3[7];
    std::string m_result;
};
void* ConsoleClass702::executeObjectMethod() {
    if (m_argc == 0) {
        m_active = 1;
        m_result.assign(std::string(*(std::string*)((char*)pickSS() + 0x70)));
        return &m_result;
    }
    if (m_argc == 1) {
        std::string val(*m_arg);
        m_active = 0;
        setStr(val);
    }
    return 0;
}
}
} }
