// FUNCTION: BF2 0xa9a5a0
// Target: 0xa9a5a0 dice::hfe::(anonymous namespace)::ConsoleClass714::executeObjectMethod()
// Compiler: gcc-4.0
// Flags: -O2
// BF2_FLAGS: -fno-strict-aliasing

namespace dice { namespace hfe {
extern void* game;
extern unsigned int IID_IGameClient;
extern void* serverSettings;

class ServerSettings {
public:
    float getCoopBotRatio() const;
};

namespace {

class ConsoleClass714 {
public:
    virtual ~ConsoleClass714();
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

void* ConsoleClass714::executeObjectMethod() {
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
        m_val = ((ServerSettings*)ss)->getCoopBotRatio();
        return &m_val;
    }
    if (m_argc == 1) {
        float val = *m_argv;
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
        if (val < 0.0f) val = 0.0f;
        if (val > 100.0f) val = 100.0f;
        *(float*)((char*)ss + 0x114) = val;
        return 0;
    }
    return 0;
}

} } }
