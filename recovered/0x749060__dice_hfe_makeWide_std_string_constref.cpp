// FUNCTION: BF2 0x749060
#include <string>
#include <vector>
#include <stdlib.h>
namespace dice { namespace hfe {

std::wstring makeWide(std::string const& str)
{
    size_t len = mbstowcs(NULL, str.c_str(), 0);
    std::vector<wchar_t> buf(len + 1);
    size_t n = mbstowcs(&buf[0], str.c_str(), len + 1);
    if (n == 0)
        return std::wstring(L"");
    return std::wstring(&buf[0], n);
}

} }
