// FUNCTION: BF2 0x7a9b60
#include <iostream>
#include <string>
#include <list>

namespace dice { namespace hfe { namespace io {

class OldConsole
{
public:
    OldConsole();
    ~OldConsole();
};

class Console;

extern Console* mainConsole;

class Console
{
public:
    static std::string ignoredString_;
    static std::list<char const*> ignoredStringList_;
};

OldConsole mainConsole_fileScope;

std::string Console::ignoredString_;
std::list<char const*> Console::ignoredStringList_;

Console* activeMethodConsole = mainConsole;

} } }
