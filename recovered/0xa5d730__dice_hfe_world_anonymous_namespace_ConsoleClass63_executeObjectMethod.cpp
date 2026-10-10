// FUNCTION: BF2 0xa5d730
// Target: 0xa5d730 dice::hfe::world::(anonymous namespace)::ConsoleClass63::executeObjectMethod()
// Compiler: gcc-4.0
// Flags: -O2

namespace dice { namespace hfe {
namespace world {
extern unsigned int CID_EngineTemplate;
void* getActiveTemplate(unsigned int);

namespace {

class ConsoleClass63 {
public:
    virtual ~ConsoleClass63();
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

void* ConsoleClass63::executeObjectMethod() {
    if (m_argc == 0) {
        m_active = 1;
        void* t = getActiveTemplate(CID_EngineTemplate);
        m_val = *(float*)((char*)t + 0x45c);
        return &m_val;
    }
    if (m_argc == 1) {
        float val = *m_argv;
        m_active = 0;
        void* t = getActiveTemplate(CID_EngineTemplate);
        if (val < 0.1f) val = 0.1f;
        if (val > 100.0f) val = 100.0f;
        *(float*)((char*)t + 0x45c) = val;
        return 0;
    }
    return 0;
}

} } } }
