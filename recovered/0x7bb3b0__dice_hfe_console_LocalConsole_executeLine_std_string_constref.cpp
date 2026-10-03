// FUNCTION: BF2 0x7bb3b0
#include <string>

// dice::hfe::console::LocalConsole::executeLine(const std::string&) -- 0x7bb3b0
//
// Hands the line to the parser at +8 with an empty output string and access
// level 2, and returns the parser's verdict; the output string is a local
// whose COW release is inlined at the end.

namespace dice { namespace hfe { namespace console {
extern unsigned handleCommand_7bb3b0(void* parser, const std::string& line,
                                     std::string& out, int access);
} } }

extern "C" unsigned executeLine_7bb3b0(char* self, const std::string& line)
{
    std::string out;
    return dice::hfe::console::handleCommand_7bb3b0(self + 8, line, out, 2);
}
// REVERSED_FUNCTION: dice_hfe_console_LocalConsole_executeLine_std_string_constref (0x7bb3b0)
