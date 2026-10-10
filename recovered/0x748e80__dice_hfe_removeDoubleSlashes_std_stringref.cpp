// FUNCTION: BF2 0x748e80
#include <string>
namespace dice { namespace hfe {

void removeDoubleSlashes(std::string& s)
{
    std::string::size_type pos;
    while ((pos = s.find("//")) != std::string::npos)
        s.erase(pos, 1);
}

} }
