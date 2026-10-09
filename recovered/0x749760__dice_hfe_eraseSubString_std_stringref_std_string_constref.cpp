// FUNCTION: BF2 0x749760
#include <string>
namespace dice { namespace hfe {

// free function: eraseSubString(std::string& , std::string const&)
void eraseSubString(std::string& s, const std::string& sub)
{
    std::string::size_type i = s.find(sub);
    if (i == std::string::npos) return;
    s.erase(i, sub.size());
}

} }
