// FUNCTION: BF2 0x7a82f0
#include <string>

namespace dice { namespace hfe { namespace io {

int compareIgnoreCase(char const*, char const*, int);
extern void* mainConsole;

bool addConstantToAllConsoles(std::string const& a, std::string const& b)
{
    if (compareIgnoreCase(a.c_str(), "c_", 2) == 0) {
        typedef bool (*vfn)(void*, std::string const&, std::string const&);
        return ((vfn)(*(void***)mainConsole)[0x88/8])(mainConsole, a, b);
    }
    return false;
}

} } }
