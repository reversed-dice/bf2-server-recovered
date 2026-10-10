// FUNCTION: BF2 0x748c10
#include <string>
namespace dice { namespace hfe {

std::string& replaceAll(std::string* str, std::string const& from, std::string const& to)
{
    std::string::size_type pos = 0;
    while ((pos = str->find(from, pos)) != std::string::npos)
    {
        str->replace(pos, from.length(), to.c_str(), to.length());
        pos += to.length();
    }
    return *str;
}

} }
