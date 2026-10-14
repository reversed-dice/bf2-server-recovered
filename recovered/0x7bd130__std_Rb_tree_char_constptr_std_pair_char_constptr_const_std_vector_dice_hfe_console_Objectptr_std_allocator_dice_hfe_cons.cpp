// FUNCTION: BF2 0x7bd130
#include <vector>
#include <map>
#include <strings.h>

namespace dice { namespace hfe {

class NoCaseCharPtrCompare
{
public:
    bool operator()(char const* a, char const* b) const
    {
        if (a && b)
            return strcasecmp(a, b) < 0;
        return a < b;
    }
};

namespace console {
class Object;
}

} }

void rdFindConsole(std::map<char const*, std::vector<dice::hfe::console::Object*>, dice::hfe::NoCaseCharPtrCompare>& m,
                   char const* const& k)
{
    m.find(k);
}

void rdFindConsoleConst(std::map<char const*, std::vector<dice::hfe::console::Object*>, dice::hfe::NoCaseCharPtrCompare> const& m,
                        char const* const& k)
{
    m.find(k);
}
