// FUNCTION: BF2 0x452b10
#include <string>

namespace dice { namespace hfe {

class BanList {
public:
    std::string consoleBanPlayerKey(const std::string& key);
    std::string consoleBanPlayerKey(const std::string& key, const std::string& reason);
};

std::string BanList::consoleBanPlayerKey(const std::string& key)
{
    return consoleBanPlayerKey(key, std::string(""));
}

} }
