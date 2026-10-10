// FUNCTION: BF2 0xa9a140
// Target: 0xa9a140 dice::hfe::(anonymous namespace)::ConsoleClass718::executeObjectMethod()
// Compiler: gcc-4.0
// Flags: -O2
// BF2_FLAGS: -fno-strict-aliasing

#include <string>

namespace dice { namespace hfe {
extern void* game;
extern unsigned int IID_IGameClient;
extern void* serverSettings;

class ServerSettings {
public:
    bool getNoVehicles();
    std::string setNoVehicles(bool);
};

namespace {

class ConsoleClass718 {
public:
    virtual ~ConsoleClass718();
    virtual void* executeObjectMethod();

    char _pad[0x28];
    int m_argc;
    char _pad2[4];
    float* m_argv;
    char _pad3[0xc8];
    char m_active;
    char _pad4[3];
    float m_val;
};

void* ConsoleClass718::executeObjectMethod() {
    if (m_argc == 0) {
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
        m_val = (float)((ServerSettings*)ss)->getNoVehicles();
        return &m_val;
    }
    if (m_argc == 1) {
        float val = *m_argv;
        m_active = 0;
        unsigned int b = (val != 0.0f);
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
        ((ServerSettings*)ss)->setNoVehicles(b);
        return 0;
    }
    return 0;
}

} } }
