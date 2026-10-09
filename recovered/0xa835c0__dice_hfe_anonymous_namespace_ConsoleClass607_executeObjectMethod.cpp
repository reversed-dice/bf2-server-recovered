// FUNCTION: BF2 0xa835c0
// REVERSED_FUNCTION: dice::hfe::(anonymous namespace)::ConsoleClass607::executeObjectMethod (0xa835c0)
namespace dice { namespace hfe {

class HudInfo {
public:
    char m_pad[0x50];
    void (*m_fn)(int);
};
extern HudInfo* hudInformationLayer;

class ConsoleClass607 {
public:
    bool executeObjectMethod();
    bool pad0();
private:
    char m_pad0[0x30];
    int m_argc;
    char m_pad1[0x108 - 0x34];
    char m_active;
};

bool ConsoleClass607::pad0()
{
    if (__builtin_expect(m_argc == 0, 1)) {
        m_active = 0;
        hudInformationLayer->m_fn(0);
    }
    return false;
}

bool ConsoleClass607::executeObjectMethod()
{
    if (__builtin_expect(m_argc == 0, 1)) {
        m_active = 0;
        hudInformationLayer->m_fn(0);
    }
    return false;
}

} }
