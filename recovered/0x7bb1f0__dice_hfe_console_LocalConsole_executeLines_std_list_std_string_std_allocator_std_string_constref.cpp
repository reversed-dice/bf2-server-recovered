// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7bb1f0
#include <list>
#include <string>

namespace dice { namespace hfe {

enum AccessType {
    ACCESS_DEFAULT = 2
};

namespace console {

class Parser {
public:
    void handleCommand(std::string const& line, std::string& output, AccessType access);
};

class Console {
public:
    virtual ~Console();
};

class LocalConsole : public Console {
public:
    virtual ~LocalConsole();
    virtual void _v10();
    virtual void _v18();
    virtual void _v20();
    virtual void _v28();
    virtual bool executeLines(std::list<std::string> const& lines); // +0x30 slot 6

    Parser m_parser; // +0x8
};

bool LocalConsole::executeLines(std::list<std::string> const& lines)
{
    for (std::list<std::string>::const_iterator it = lines.begin(); it != lines.end(); ++it) {
        std::string out;
        m_parser.handleCommand(*it, out, (AccessType)2);
    }
    return true;
}

} } }
