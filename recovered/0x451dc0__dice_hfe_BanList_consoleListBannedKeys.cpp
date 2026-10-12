// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x451dc0
#include <string>
#include <list>

namespace dice { namespace hfe {

class BanList {
public:
    std::string consoleListBannedKeys();
    std::string consoleListBannedAddresses();
    void getSimplifiedBanList(std::list<std::string>&, bool);
};

std::string BanList::consoleListBannedKeys() {
    std::string ret;
    std::list<std::string> list;
    getSimplifiedBanList(list, true);
    std::list<std::string>::const_iterator end = list.end();
    for (std::list<std::string>::const_iterator it = list.begin(); it != end; ++it) {
        if ((*it).find("Key: ", 0, 5) != 0)
            continue;
        ret.append(*it);
        ret.append("\n", 1);
    }
    return ret;
}

} }
