// FUNCTION: BF2 0x748c80
#include <cstdarg>
#include <cstdio>
#include <cstring>
#include <string>

namespace dice { namespace hfe {

std::string formatString(char const* fmt, ...)
{
    static char STR[0x1000];
    va_list args;
    va_start(args, fmt);
    int ret = vsnprintf(STR, 0xfff, fmt, args);
    va_end(args);
    if (ret == -1)
        strcpy(STR, "WARNING: The original message was too long for formatString(). \n");
    else
        STR[ret] = 0;
    return std::string(STR);
}

}}
