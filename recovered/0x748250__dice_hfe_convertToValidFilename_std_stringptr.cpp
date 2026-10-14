// FUNCTION: BF2 0x748250
#include <ctype.h>
#include <string>
namespace dice { namespace hfe {

void convertToValidFilename(std::string& s)
{
    for (std::string::size_type i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if (!isalnum(c) && c != '_' && c != '.' && c != '/' && c != '\\')
            s[i] = '_';
    }
}

} }
