// FUNCTION: BF2 0x4edec0
#include <string>
#include <cstdlib>
namespace dice { namespace hfe {
class Vars { public: static std::string list(std::string const& name); };
namespace { char* DumpConfigValues(std::string const& s); }
std::string Vars::list(std::string const& name) {
    char* buf = DumpConfigValues(name);
    std::string out(buf);
    if (buf) free(buf);
    return out;
}
}}
