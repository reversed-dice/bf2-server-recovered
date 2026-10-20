// FUNCTION: BF2 0xa953e0
#include <string>
namespace dice { namespace hfe { namespace python {
struct PythonHost { bool consoleSendCommand(std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string); };
} python::PythonHost* pythonHost();
namespace {
struct ConsoleClass626 {
    char pad00[0x28];
    int m_argc;
    char pad34[4];
    std::string* m_args[9];
    char pad80[0x88];
    unsigned char m_hasResult;
    char pad109;
    unsigned char m_result;
    virtual void* executeObjectMethod();
};
void* ConsoleClass626::executeObjectMethod() {
    if (m_argc == 1) {
        std::string a1(*m_args[0]);
        m_hasResult = true;
        m_result = dice::hfe::pythonHost()->consoleSendCommand(a1, "", "", "", "", "", "", "", "");
        return &m_result;
    }
    else if (m_argc == 2) {
        std::string a1(*m_args[0]);
        std::string a2(*m_args[1]);
        m_hasResult = true;
        m_result = dice::hfe::pythonHost()->consoleSendCommand(a1, a2, "", "", "", "", "", "", "");
        return &m_result;
    }
    else if (m_argc == 3) {
        std::string a1(*m_args[0]);
        std::string a2(*m_args[1]);
        std::string a3(*m_args[2]);
        m_hasResult = true;
        m_result = dice::hfe::pythonHost()->consoleSendCommand(a1, a2, a3, "", "", "", "", "", "");
        return &m_result;
    }
    else if (m_argc == 4) {
        std::string a1(*m_args[0]);
        std::string a2(*m_args[1]);
        std::string a3(*m_args[2]);
        std::string a4(*m_args[3]);
        m_hasResult = true;
        m_result = dice::hfe::pythonHost()->consoleSendCommand(a1, a2, a3, a4, "", "", "", "", "");
        return &m_result;
    }
    else if (m_argc == 5) {
        std::string a1(*m_args[0]);
        std::string a2(*m_args[1]);
        std::string a3(*m_args[2]);
        std::string a4(*m_args[3]);
        std::string a5(*m_args[4]);
        m_hasResult = true;
        m_result = dice::hfe::pythonHost()->consoleSendCommand(a1, a2, a3, a4, a5, "", "", "", "");
        return &m_result;
    }
    else if (m_argc == 6) {
        std::string a1(*m_args[0]);
        std::string a2(*m_args[1]);
        std::string a3(*m_args[2]);
        std::string a4(*m_args[3]);
        std::string a5(*m_args[4]);
        std::string a6(*m_args[5]);
        m_hasResult = true;
        m_result = dice::hfe::pythonHost()->consoleSendCommand(a1, a2, a3, a4, a5, a6, "", "", "");
        return &m_result;
    }
    else if (m_argc == 7) {
        std::string a1(*m_args[0]);
        std::string a2(*m_args[1]);
        std::string a3(*m_args[2]);
        std::string a4(*m_args[3]);
        std::string a5(*m_args[4]);
        std::string a6(*m_args[5]);
        std::string a7(*m_args[6]);
        m_hasResult = true;
        m_result = dice::hfe::pythonHost()->consoleSendCommand(a1, a2, a3, a4, a5, a6, a7, "", "");
        return &m_result;
    }
    else if (m_argc == 8) {
        std::string a1(*m_args[0]);
        std::string a2(*m_args[1]);
        std::string a3(*m_args[2]);
        std::string a4(*m_args[3]);
        std::string a5(*m_args[4]);
        std::string a6(*m_args[5]);
        std::string a7(*m_args[6]);
        std::string a8(*m_args[7]);
        m_hasResult = true;
        m_result = dice::hfe::pythonHost()->consoleSendCommand(a1, a2, a3, a4, a5, a6, a7, a8, "");
        return &m_result;
    }
    else if (m_argc == 9) {
        std::string a1(*m_args[0]);
        std::string a2(*m_args[1]);
        std::string a3(*m_args[2]);
        std::string a4(*m_args[3]);
        std::string a5(*m_args[4]);
        std::string a6(*m_args[5]);
        std::string a7(*m_args[6]);
        std::string a8(*m_args[7]);
        std::string a9(*m_args[8]);
        m_hasResult = true;
        m_result = dice::hfe::pythonHost()->consoleSendCommand(a1, a2, a3, a4, a5, a6, a7, a8, a9);
        return &m_result;
    }
    return 0;
}
}
} }
