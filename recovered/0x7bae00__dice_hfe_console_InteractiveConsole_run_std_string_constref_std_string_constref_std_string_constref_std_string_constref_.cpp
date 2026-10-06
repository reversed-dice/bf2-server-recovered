// FUNCTION: BF2 0x7bae00
#include <string>

namespace dice { namespace hfe { namespace console {

class Parser {
public:
    bool run(const std::string& a1, const std::string& a2, const std::string& a3,
             const std::string& a4, const std::string& a5, const std::string& a6,
             const std::string& a7, const std::string& a8, const std::string& a9,
             std::string& a10);
};

class InteractiveConsole {
public:
    bool run(const std::string& a1, const std::string& a2, const std::string& a3,
             const std::string& a4, const std::string& a5, const std::string& a6,
             const std::string& a7, const std::string& a8, const std::string& a9,
             std::string& a10);

    char _pad[0x258];
    Parser* m_parser;
};

bool InteractiveConsole::run(const std::string& a1, const std::string& a2, const std::string& a3,
                             const std::string& a4, const std::string& a5, const std::string& a6,
                             const std::string& a7, const std::string& a8, const std::string& a9,
                             std::string& a10)
{
    return m_parser->run(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}

} } }
// REVERSED_FUNCTION: dice_hfe_console_InteractiveConsole_run_std_string_constref_std_string_constref_std_string_constref_std_string_constref_std_string_constref_std_string_constref_std_string_constref_std_string_constref_std_string_constref_std_stringref (0x7bae00)
