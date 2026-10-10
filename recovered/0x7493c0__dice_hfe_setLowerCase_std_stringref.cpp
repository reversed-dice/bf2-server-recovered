// FUNCTION: BF2 0x7493c0
#include <string>
#include <ctype.h>
namespace dice { namespace hfe {
void setLowerCase(std::string& s)
{
    for (size_t i = 0; i != s.size(); ++i) {
        if (s[i] == '\xc5')
            s[i] = '\xe5';
        else if (s[i] == '\xc4')
            s[i] = '\xe4';
        else if (s[i] == '\xd6')
            s[i] = '\xf6';
        else if (s[i] == '\xdc')
            s[i] = '\xfc';
        else if (s[i] == '\xc9')
            s[i] = '\xe9';
        else
            s[i] = tolower(s[i]);
    }
}
}}
