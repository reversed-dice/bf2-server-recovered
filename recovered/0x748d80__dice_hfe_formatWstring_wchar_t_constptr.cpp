// FUNCTION: BF2 0x748d80
#include <cstdarg>
#include <cwchar>
#include <string>

namespace dice { namespace hfe {

std::wstring formatWstring(wchar_t const* fmt, ...)
{
    static wchar_t STR[0x1000];
    va_list args;
    va_start(args, fmt);
    int ret = vswprintf(STR, 0xfff, fmt, args);
    va_end(args);
    if (ret == -1)
        swprintf(STR, 0x1000, L"%s", L"WARNING: The original message was too long for formatString(). \n");
    else
        STR[ret] = 0;
    return std::wstring(STR);
}

}}
