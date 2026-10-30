// FUNCTION: BF2 0x868700
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice { namespace hfe { namespace io {

class Console {
public:
    static std::string ignoredString_;
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual bool execute(const std::string& f, const std::string& a1 = "", const std::string& a2 = "",
                         const std::string& a3 = "", const std::string& a4 = "", const std::string& a5 = "",
                         const std::string& a6 = "", const std::string& a7 = "", const std::string& a8 = "",
                         std::string* out = &ignoredString_);
};
extern Console* activeMethodConsole;

namespace {

class ConsoleClass434 {
public:
    std::string* executeObjectMethod();
    char pad_00[0x30];
    int m_numArgs;
    char pad_34[4];
    std::string* m_arg[5];
    char pad_60[0xa8];
    bool m_executed;
    char pad_109[7];
    std::string m_result;
};

std::string* ConsoleClass434::executeObjectMethod()
{
    if (m_numArgs == 1) {
        std::string a0(*m_arg[0]);
        m_executed = true;
        m_result = activeMethodConsole->execute(a0);
        return &m_result;
    }
    else if (m_numArgs == 2) {
        std::string a0(*m_arg[0]);
        std::string a1(*m_arg[1]);
        m_executed = true;
        m_result = activeMethodConsole->execute(a0, a1);
        return &m_result;
    }
    else if (m_numArgs == 3) {
        std::string a0(*m_arg[0]);
        std::string a1(*m_arg[1]);
        std::string a2(*m_arg[2]);
        m_executed = true;
        m_result = activeMethodConsole->execute(a0, a1, a2);
        return &m_result;
    }
    else if (m_numArgs == 4) {
        std::string a0(*m_arg[0]);
        std::string a1(*m_arg[1]);
        std::string a2(*m_arg[2]);
        std::string a3(*m_arg[3]);
        m_executed = true;
        m_result = activeMethodConsole->execute(a0, a1, a2, a3);
        return &m_result;
    }
    else if (m_numArgs == 5) {
        std::string a0(*m_arg[0]);
        std::string a1(*m_arg[1]);
        std::string a2(*m_arg[2]);
        std::string a3(*m_arg[3]);
        std::string a4(*m_arg[4]);
        m_executed = true;
        m_result = activeMethodConsole->execute(a0, a1, a2, a3, a4);
        return &m_result;
    }
    return 0;
}

}

} } }
