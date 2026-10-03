// FUNCTION: BF2 0x452c60
#include <string>

namespace dice { namespace hfe {

class BanList {
public:
    std::string consoleBanPlayer(const std::string& a);
    std::string consoleBanPlayer(const std::string& a, const std::string& b);
};

std::string BanList::consoleBanPlayer(const std::string& a)
{
    return consoleBanPlayer(a, std::string(""));
}

} }
