// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x748f40
#include <string>
#include <vector>
#include <stdlib.h>
namespace dice { namespace hfe {

std::string makeNarrow(std::wstring const& str)
{
    size_t length = wcstombs(NULL, str.c_str(), 0) + 1;
    if (length == (size_t)-1)
        return "no_conversion_exists";
    std::vector<char> buf(length);
    size_t n = wcstombs(&buf[0], str.c_str(), length);
    if (n == (size_t)-1)
        return "no_conversion_exists";
    if (n == 0)
        return std::string("");
    return std::string(&buf[0], n);
}

} }
