// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7bb290
#include <list>
#include <string>
#include <utility>

namespace dice { namespace hfe {

enum AccessType {
    ACCESS_DEFAULT = 2
};

namespace console {

class Console {
public:
    enum ResultType {
        RESULT_OK = 0
    };
    virtual ~Console();
};

class Parser {
public:
    Console::ResultType handleCommand(std::string const& line, std::string& output, AccessType access);
};

class LocalConsole : public Console {
public:
    virtual ~LocalConsole();
    virtual void _v10();
    virtual void _v18();
    virtual void _v20();
    virtual bool executeLines(std::list<std::string> const& lines, std::list<std::pair<Console::ResultType, std::string> >& results);

    Parser m_parser; // +0x8
};

bool LocalConsole::executeLines(std::list<std::string> const& lines, std::list<std::pair<Console::ResultType, std::string> >& results)
{
    typedef std::pair<Console::ResultType, std::string> ResultPair;
    for (std::list<std::string>::const_iterator it = lines.begin(); it != lines.end(); ++it) {
        std::string out;
        Console::ResultType res = m_parser.handleCommand(*it, out, (AccessType)2);
        results.push_back(ResultPair(res, out));
    }
    return true;
}

} } }
