// FUNCTION: BF2 0xa99660
#include <string>

namespace dice { namespace hfe {
extern void* game;
extern unsigned int IID_IGameClient;
extern void* serverSettings;

namespace {

class ConsoleClass733 {
public:
    char _pad[0x30];
    int m_argc;
    std::string* m_argv;
    char _pad2[0x108 - 0x40];
    char m_active;
    char _pad3[7];
    std::string m_value;

    void* executeObjectMethod();
};

void* ConsoleClass733::executeObjectMethod() {
    if (m_argc != 0) goto not_zero;
    {
        m_active = 1;
        void* ss;
        void* mgr = dice::hfe::game;
        if (mgr == 0) goto use_d;
        {
            void* c = ((void* (*)(void*, unsigned int))(*(void***)mgr)[0x18 / 8])(mgr, dice::hfe::IID_IGameClient);
            ss = 0;
            if (c == 0) goto use_d;
        }
        goto use;
    use_d:
        ss = dice::hfe::serverSettings;
    use:
        m_value.assign(*(std::string*)((char*)ss + 0x130));
        return &m_value;
    }
not_zero:
    if (m_argc != 1) return 0;
    {
        std::string val(*m_argv);
        m_active = 0;
        void* ss;
        void* mgr = dice::hfe::game;
        if (mgr == 0) goto use2_d;
        {
            void* c = ((void* (*)(void*, unsigned int))(*(void***)mgr)[0x18 / 8])(mgr, dice::hfe::IID_IGameClient);
            ss = 0;
            if (c == 0) goto use2_d;
        }
        goto use2;
    use2_d:
        ss = dice::hfe::serverSettings;
    use2:
        ((std::string*)((char*)ss + 0x130))->assign(val);
        return 0;
    }
}

}

} }
